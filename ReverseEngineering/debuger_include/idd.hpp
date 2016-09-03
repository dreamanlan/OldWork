/*
 *      Interactive disassembler (IDA).
 *      Copyright (c) 1990-2008 Hex-Rays
 *      ALL RIGHTS RESERVED.
 *
 */

#ifndef _IDD_HPP
#define _IDD_HPP
#pragma pack(push, 4)

//
//      This file contains definition of the interface to IDD modules
//      The interface consists of structures describing the target
//      debugged processor and a debugging API.

#define         IDD_INTERFACE_VERSION   10


//====================================================================
//
//                       Process and Threads
//

typedef int pid_t;                   // process id
typedef int thid_t;                  // thread id

#define NO_PROCESS        0xFFFFFFFF // No process
#define NO_THREAD         0          // No thread
                                     // in PROCESS_START this value
                                     // can be used to specify that
                                     // the main thread has not been created
                                     // It will be initializated later
                                     // by a THREAD_START event.

struct process_info_t
{
  pid_t pid;
  char name[MAXSTR];
};

//====================================================================
//
//                          Registers
//

typedef unsigned char register_class_t; // Each register is associated to
                                        // a register class.
                                        // example: "segment", "mmx", ...

struct register_info_t
{
  const char *name;                   // Register full name
  uint32 flags;                       // Register special features
#define REGISTER_READONLY 0x0001      //   the user can't modify the current value of this register
#define REGISTER_IP       0x0002      //   instruction pointer
#define REGISTER_SP       0x0004      //   stack pointer
#define REGISTER_FP       0x0008      //   frame pointer
#define REGISTER_ADDRESS  0x0010      //   may contain an address
#define REGISTER_CS       0x0020      //   code segment
#define REGISTER_SS       0x0040      //   stack segment
#define REGISTER_NOLF     0x0080      //   displays this register without returning to the next line
                                      //   allowing the next register to be display to its right (on the same line)
  register_class_t register_class;
  char dtyp;                          // Register size (dt_... constants)
  const char *const *bit_strings;     // Strings corresponding to each bit of the register
                                      // (NULL = no bit, same name = multi-bits mask)
  int bit_strings_default;            // Mask of default bits
};

//====================================================================
//
//                           Memory
//

// The following structure is used by debugger modules to report memory are
// information to IDA kernel. It is ok to return empty fields if information
// is not available.

struct memory_info_t : public area_t
{
  memory_info_t(void)
    : sbase(0),bitness(0),perm(0) {}
  qstring name;                // Memory area name
  qstring sclass;              // Memory area class name
  ea_t sbase;                  // Segment base (meaningful only for segmented architectures, e.g. 16-bit x86)
                               // The base is specified in paragraphs (i.e. shifted to the right by 4)
  uchar bitness;               // Number of bits in segment addresses (0-16bit, 1-32bit, 2-64bit)
  uchar perm;                  // Memory area permissions (0-no information): see segment.hpp
  bool operator ==(const memory_info_t &r) const
  {
    return startEA == r.startEA
        && endEA   == r.endEA
        && name    == r.name
        && sclass  == r.sclass
        && sbase   == r.sbase
        && bitness == r.bitness
        && perm    == r.perm;
  }
  bool operator !=(const memory_info_t &r) const { return !(*this == r); }
};
typedef qvector<memory_info_t> meminfo_vec_t;

//====================================================================
//
//                         Debug events
//

enum event_id_t
{
  NO_EVENT       = 0x00000000, // Not an interesting event. This event can be
                               // used if the debugger module needs to return
                               // an event but there are no valid events.
  PROCESS_START  = 0x00000001, // New process has been started.
  PROCESS_EXIT   = 0x00000002, // Process has been stopped.
  THREAD_START   = 0x00000004, // New thread has been started.
  THREAD_EXIT    = 0x00000008, // Thread has been stopped.
  BREAKPOINT     = 0x00000010, // Breakpoint has been reached. IDA will complain
                               // about unknown breakpoints, they should be reported
                               // as exceptions.
  STEP           = 0x00000020, // One instruction has been executed. Spurious
                               // events of this kind are silently ignored by IDA.
  EXCEPTION      = 0x00000040, // Exception.
  LIBRARY_LOAD   = 0x00000080, // New library has been loaded.
  LIBRARY_UNLOAD = 0x00000100, // Library has been unloaded.
  INFORMATION    = 0x00000200, // User-defined information.
                               // This event can be used to return empty information
                               // This will cause IDA to call get_debug_event()
                               // immediately once more.
  SYSCALL        = 0x00000400, // Syscall (not used yet).
  WINMESSAGE     = 0x00000800, // Window message (not used yet).
  PROCESS_ATTACH = 0x00001000, // Successfully attached to running process.
  PROCESS_DETACH = 0x00002000, // Successfully detached from process.
  PROCESS_SUSPEND= 0x00004000, // Process has been suspended..
                               // This event can be used by the debugger module
                               // to signal if the process spontaneously gets
                               // suspended (not because of an exception,
                               // breakpoint, or single step). IDA will silently
                               // switch to the 'suspended process' mode without
                               // displaying any messages.
};


// Those structures describe particular debug events

struct module_info_t
{
  char name[MAXSTR];    // full name of the module.
  ea_t base;            // module base address. if unknown pass BADADDR
  asize_t size;         // module size. if unknown pass 0
  ea_t rebase_to;       // if not BADADDR, then rebase the program to the specified address
};

struct e_breakpoint_t
{
  ea_t hea;             // Possible address referenced by hardware breakpoints
  ea_t kea;             // Address of the triggered bpt from the kernel's point
                        // of view (for some systems with special memory mappings,
                        // the triggered ea might be different from event ea).
                        // Use to BADADDR for flat memory model.
};

struct e_exception_t
{
  int code;             // Exception code
  bool can_cont;        // Execution of the process can continue after this exception?
  ea_t ea;              // Possible address referenced by the exception
  char info[MAXSTR];    // Exception message
};

// This structure is used only when detailed information
//   on a debug event is needed.
struct debug_event_t
{
  debug_event_t(void) : eid(NO_EVENT) {}
                           // The following fields must be filled for all events:
  event_id_t   eid;        // Event code (used to decipher 'info' union)
  pid_t pid;               // Process where the event occured
  thid_t  tid;             // Thread where the event occured
  ea_t ea;                 // Address where the event occured
  bool handled;            // Is event handled by the debugger?
                           // (from the system's point of view)
                           // Meaningful for EXCEPTION events
#ifndef SWIG
  union
  {
#endif //SWIG
    module_info_t modinfo; // PROCESS_START, PROCESS_ATTACH, LIBRARY_LOAD
    int exit_code;         // PROCESS_EXIT, THREAD_EXIT
    char info[MAXSTR];     // LIBRARY_UNLOAD (unloaded library name)
                           // INFORMATION (will be displayed in the
                           //              messages window if not empty)
    e_breakpoint_t bpt;    // BREAKPOINT
    e_exception_t exc;     // EXCEPTION
#ifndef SWIG
  };
#endif //SWIG
  // On some systems with special memory mappings the triggered ea might be
  // different from the actual ea. Calculate the address to use.
  ea_t bpt_ea(void) const
  {
    return eid == BREAKPOINT && bpt.kea != BADADDR ? bpt.kea : ea;
  }
};

// Hardware breakpoint types
typedef int bpttype_t;
const bpttype_t
  BPT_EXEC  =  0,             // Execute instruction
  BPT_WRITE =  1,             // Write access
  BPT_RDWR  =  3,             // Read/write access
  BPT_SOFT  =  4;             // Software breakpoint


// Exception information
struct exception_info_t
{
  uint code;
  uint32 flags;
#define EXC_BREAK  0x0001 // break on the exception
#define EXC_HANDLE 0x0002 // should be handled by the debugger?
  bool break_on(void) const { return (flags & EXC_BREAK) != 0; }
  bool handle(void) const { return (flags & EXC_HANDLE) != 0; }
  qstring name;         // Exception standard name
  qstring desc;         // Long message used to display info about the exception
  exception_info_t(void) {}
  exception_info_t(uint _code, uint32 _flags, const char *_name, const char *_desc)
    : code(_code), flags(_flags), name(_name), desc(_desc) {}
};
typedef qvector<exception_info_t> excvec_t;

// Instruction operand information
struct idd_opinfo_t
{
  ea_t addr;            // operand address (BADADDR - no address)
  uval_t value;         // operand value
  bool modified;        // the operand is modified (written) by the instruction
};

// register value
struct regval_t
{
#ifndef __WATCOMC__     // bad compiler
#ifndef SWIG
  union
  {
#endif //SWIG
#endif
    uint64 ival;        // 8:  integer value
    uint16 fval[6];     // 12: floating point value in the internal representation (see ieee.h)
#ifndef __WATCOMC__
#ifndef SWIG
  };
#endif //SWIG
#endif
  regval_t(void) : ival(~uint64(0)) {}
};

//====================================================================
//
//     This structure describes a debugger API module.
//     (functions needed to debug a process on a specific
//      operating system)
//
//     The address of this structure must be put into the 'dbg' variable by
//     the init() function of the debugger plugin

struct debugger_t
{
  int version;                        // Expected kernel version,
                                      //   should be IDD_INTERFACE_VERSION
  const char *name;                   // Short debugger name like win32 or linux
  int id;                             // Debugger API module id
#define DEBUGGER_ID_X86_IA32_WIN32_USER              0 // Userland win32 processes (win32 debugging APIs)
// #define DEBUGGER_ID_X86_IA32_WIN32_KERNEL           // ?
// #define DEBUGGER_ID_X86_IA32_WIN32_USER_SOFTICE     // Forward functions to a SoftIce plugin ?
// #define DEBUGGER_ID_X86_IA32_WIN32_KERNEL_SOFTICE   // "
#define DEBUGGER_ID_X86_IA32_LINUX_USER              1 // Userland linux processes (ptrace())
// #define DEBUGGER_ID_X86_IA32_LINUX_KERNEL           // ?
#define DEBUGGER_ID_ARM_WINCE_USER                   2 // Windows CE ARM
#define DEBUGGER_ID_X86_IA32_MACOSX_USER             3 // Userland MAC OS X processes
#define DEBUGGER_ID_ARM_EPOC_USER                    4 // Symbian OS
#define DEBUGGER_ID_ARM_IPHONE_USER                  5 // iPhone 1.x
#define DEBUGGER_ID_X86_IA32_BOCHS                   6 // BochsDbg.exe 32
#define DEBUGGER_ID_6811_EMULATOR                    7 // MC6812 emulator (beta)
#define DEBUGGER_ID_GDB_USER                         8 // GDB remote
#define DEBUGGER_ID_WINDBG                           9 // WinDBG using Microsoft Debug engine
#define DEBUGGER_ID_X86_DOSBOX_EMULATOR             10 // Dosbox MS-DOS emulator

// ...
  const char *processor;              // Required processor name
                                      // Used for instant debugging to load the correct
                                      // processor module

  uint32 flags;                             // Debugger module special features
#define DBG_FLAG_REMOTE       0x00000001    // Remote debugger (requires remote host name unless DBG_FLAG_NOHOST)
#define DBG_FLAG_NOHOST       0x00000002    // Remote debugger with does not require network params (host/port/pass)
                                            // (a unique device connected to the machine)
#define DBG_FLAG_FAKE_ATTACH  0x00000004    // PROCESS_ATTACH is a fake event
                                            // and does not suspend the execution
#define DBG_FLAG_HWDATBPT_ONE 0x00000008    // Hardware data breakpoints are
                                            // one byte size by default
#define DBG_FLAG_CAN_CONT_BPT 0x00000010    // Debugger knows to continue from a bpt
                                            // This flag also means that the debugger module
                                            // hides breakpoints from ida upon read_memory
#define DBG_FLAG_NEEDPORT     0x00000020    // Remote debugger requires port number (to be used with DBG_FLAG_NOHOST)
#define DBG_FLAG_DONT_DISTURB 0x00000040    // Debugger can handle only
                                            //   get_debug_event()
                                            //   prepare_to_pause_process()
                                            //   exit_process()
                                            // when the debugged process is running.
                                            // The kernel may also call service functions
                                            // (file I/O, map_address, etc)
#define DBG_FLAG_SAFE         0x00000080    // The debugger is safe (probably because it just emulates the application
                                            // without really running it)
#define DBG_FLAG_CLEAN_EXIT   0x00000100    // IDA must suspend the application and remove
                                            // all breakpoints before terminating the application.
                                            // Usually this is not required because the application memory
                                            // disappears upon termination.
#define DBG_FLAG_USE_SREGS    0x00000200    // Take segment register values into account (non flat memory)
#define DBG_FLAG_NOSTARTDIR   0x00000400    // Debugger module doesn't use startup directory
#define DBG_FLAG_NOPARAMETERS 0x00000800    // Debugger module doesn't use commandline parameters
#define DBG_FLAG_NOPASSWORD   0x00001000    // Remote debugger doesn't use password
#define DBG_FLAG_CONNSTRING   0x00002000    // Display "Connection string" instead of "Hostname" and hide the "Port" field
#define DBG_FLAG_SMALLBLKS    0x00004000    // If set, IDA uses 256-byte blocks for caching memory contents
                                            // Otherwise, 1024-byte blocks are used
#define DBG_FLAG_MANMEMINFO   0x00008000    // If set, manual memory region manipulation commands
                                            // will be available. Use this bit for debugger modules
                                            // that can not return memory layout information
#define DBG_FLAG_EXITSHOTOK   0x00010000    // IDA may take a memory snapshot at PROCESS_EXIT event
#define DBG_FLAG_VIRTHREADS   0x00020000    // Thread IDs may be shuffled after each debug event
                                            // (to be used for virtual threads that represent cpus for windbg kmode)

  bool is_remote(void) const { return (flags & DBG_FLAG_REMOTE) != 0; }
  bool must_have_hostname(void) const
    { return (flags & (DBG_FLAG_REMOTE|DBG_FLAG_NOHOST)) == DBG_FLAG_REMOTE; }
  bool can_continue_from_bpt(void) const
    { return (flags & DBG_FLAG_CAN_CONT_BPT) != 0; }
  bool may_disturb(void) const
    { return (flags & DBG_FLAG_DONT_DISTURB) == 0; }
  bool is_safe(void) const
    { return (flags & DBG_FLAG_SAFE) != 0; }
  bool use_sregs(void) const
    { return (flags & DBG_FLAG_USE_SREGS) != 0; }
  size_t cache_block_size(void) const
    { return (flags & DBG_FLAG_SMALLBLKS) != 0 ? 256 : 1024; }
  bool use_memregs(void) const
    { return (flags & DBG_FLAG_MANMEMINFO) != 0; }
  bool may_take_exit_snapshot(void) const
    { return (flags & DBG_FLAG_EXITSHOTOK) != 0; }
  bool virtual_threads(void) const
    { return (flags & DBG_FLAG_VIRTHREADS) != 0; }

  char*           *register_classes;        // Array of register class names
  int             register_classes_default; // Mask of default printed register classes
  register_info_t *registers;               // Array of registers
  int             registers_size;           // Number of registers

  int             memory_page_size;         // Size of a memory page

  const uchar     *bpt_bytes;               // Array of bytes for a breakpoint instruction
  int             bpt_size;                 // Size of this array

// Init/term (for local debuggers the parameters are ignored)

  bool (idaapi *init_debugger)(const char *hostname, int portnum, const char *password);

#if !defined(__WATCOMC__) && !defined(_MSC_VER)  // these compilers complain :(
  static const int default_port_number = 23946;
#define DEBUGGER_PORT_NUMBER debugger_t::default_port_number
#else
#define DEBUGGER_PORT_NUMBER 23946
#endif

  bool (idaapi *term_debugger)(void);

  // Return information about the n-th "compatible" running process.
  // If n is 0, the processes list is reinitialized.
  // 1-ok, 0-failed, -1-network error
  int (idaapi *process_get_info)(int n, process_info_t *info);

  // Start an executable to debug
  // 1 - ok, 0 - failed, -2 - file not found (ask for process options)
  // 1|CRC32_MISMATCH - ok, but the input file crc does not match
  // -1 - network error
  int (idaapi *start_process)(const char *path,
                              const char *args,
                              const char *startdir,
                              uint32 input_file_crc32);
#define CRC32_MISMATCH  0x40000000      // crc32 mismatch bit

  // Attach to an existing running process
  // 1-ok, 0-failed, -1-network error
  // event_id should be equal to -1 if not attaching to a crashed process
  int (idaapi *attach_process)(pid_t pid, int event_id);

  // Detach from the debugged process
  // 1-ok, 0-failed, -1-network error
  int (idaapi *detach_process)(void);

  // rebase database if the debugged program has been rebased by the system
  void (idaapi *rebase_if_required_to)(ea_t new_base);

  // Prepare to pause the process
  // This function will prepare to pause the process
  // Normally the next get_debug_event() will pause the process
  // If the process is sleeping then the pause will not occur
  // until the process wakes up. The interface should take care of
  // this situation.
  // If this function is absent, then it won't be possible to pause the program
  // 1-ok, 0-failed, -1-network error
  int (idaapi *prepare_to_pause_process)(void);

  // Stop the process.
  // 1-ok, 0-failed, -1-network error
  int (idaapi *exit_process)(void);

//-------------------------------------------
// The following functions manipulate events.
//
// Get a pending debug event and suspend the process
// returns: 1-got event, 0-no event, -1-error
// This function will be called regularly by IDA.
  int (idaapi *get_debug_event)(debug_event_t *event, bool ida_is_idle);

// Continue after handling the event
// 0-ok, 1-failed, -1-network error
  int (idaapi *continue_after_event)(const debug_event_t *event);

// Set exception handling
  void (idaapi *set_exception_info)(const exception_info_t *info, int qty);

// The following function will be called by the kernel each time
// when it has stopped the debugger process for some reason,
// refreshed the database and the screen.
// The debugger module may add information to the database if it wants.
// The reason for introducing this function is that when an event line
// LOAD_DLL happens, the database does not reflect the memory state yet
// and therefore we can't add information about the dll into the database
// in the get_debug_event() function.
// Only when the kernel has adjusted the database we can do it.
// Example: for imported PE DLLs we will add the exported function
// names to the database.
// This function pointer may be absent, i.e. NULL.
  void (idaapi *stopped_at_debug_event)(bool dlls_added);

  // The following functions manipulate threads.
  // 1-ok, 0-failed, -1-network error
  int (idaapi *thread_suspend) (thid_t tid); // Suspend a running thread
  int (idaapi *thread_continue)(thid_t tid); // Resume a suspended thread
  int (idaapi *thread_set_step)(thid_t tid); // Run one instruction in the thread

  // The following functions manipulate registers.
  // 1-ok, 0-failed, -1-network error
  int (idaapi *thread_read_registers)(thid_t tid, regval_t *values, int count); // Return current register values
  int (idaapi *thread_write_register)(thid_t tid, int reg_idx, const regval_t *value); // Write one register value
  // Get information about the base of a segment register
  // Currently used by the IBM PC module to resolve references like fs:0
  //   tid        - thread id
  //   sreg_value - value of the segment register (returned by get_reg_val())
  //   answer     - pointer to the answer. can't be NULL.
  // 1-ok, 0-failed, -1-network error
  int (idaapi *thread_get_sreg_base)(thid_t tid, int sreg_value, ea_t *answer);

//
// The following functions manipulate bytes in the memory.
//
  // Get information on the memory areas
  // The debugger module fills 'areas'. The returned vector MUST be sorted.
  // Returns:
  //   -3: use idb segmentation
  //   -2: no changes
  //   -1: the process does not exist anymore
  //    0: failed
  //    1: new memory layout is returned
  int (idaapi *get_memory_info)(meminfo_vec_t &areas);

  // Read process memory
  // Returns number of read bytes
  // 0 mean read error
  // -1 means that the process does not exist anymore
  ssize_t (idaapi *read_memory)(ea_t ea, void *buffer, size_t size);

  // Write process memory
  // Returns number of written bytes, -1-fatal error
  ssize_t (idaapi *write_memory)(ea_t ea, const void *buffer, size_t size);

//
// The following functions manipulate breakpoints.
//

  // Is it possible to set breakpoint?
  // Returns: BPT_...
  int (idaapi *is_ok_bpt)(bpttype_t type, ea_t ea, int len);
#define BPT_OK           0
#define BPT_INTERNAL_ERR 1
#define BPT_BAD_TYPE     2
#define BPT_BAD_ALIGN    3
#define BPT_BAD_ADDR     4
#define BPT_BAD_LEN      5
#define BPT_TOO_MANY     6
  // Add a breakpoint
  // Note: for software breakpoints, the kernel will save/restore
  // original byte values, the module should just write the bpt opcode.
  // 1-ok, 0-failed, -1-network error
  int (idaapi *add_bpt)(bpttype_t type, ea_t ea, int len);
  // Remove a breakpoint
  // Note: orig_bytes are used only for software breakpoints
  // to restore the old byte values overwritten by the breakpoint
  // For hardware breakpoints it must be NULL
  // 1-ok, 0-failed, -1-network error
  int (idaapi *del_bpt)(ea_t ea, const uchar *orig_bytes, int len);

// Open/close/read a remote file
  int  (idaapi *open_file)(const char *file, uint32 *fsize, bool readonly); // -1-error
  void (idaapi *close_file)(int fn);
  ssize_t (idaapi *read_file)(int fn, uint32 off, void *buf, size_t size);

// Map process address
// This function may be absent
//      off    - offset to map
//      regs   - current register values. if regs == NULL, then perform
//               global mapping, which is indepedent on used registers
//               usually such a mapping is a trivial identity mapping
//      regnum - required mapping. maybe specified as a segment register number
//               or a regular register number if the required mapping can be deduced
//               from it. for example, esp implies that ss should be used.
// Returns: mapped address or BADADDR

  ea_t (idaapi *map_address)(ea_t off, const regval_t *regs, int regnum);

// Set debugger options (parameters that are specific to the debugger module)
// See the definition of set_options_t in idp.hpp for arguments.
// See the convenience function in dbg.hpp if you need to call it.
// This function is optional.

  const char *(idaapi *set_dbg_options)(
        const char *keyword,
        int value_type,
        const void *value);


// Get pointer to debugger specific functions.
// This function returns a pointer to a structure that holds pointers to
// debugger module specific functions. For information on the structure
// layout, please check the corresponding debugger module. Most debugger
// modules return NULL because they do not have any extensions. Available
// extensions may be called from plugins.

  const void *(idaapi *get_debmod_extensions)(void);


};

CASSERT((sizeof(debugger_t) % 4) == 0);

#ifndef NO_OBSOLETE_FUNCS
typedef thid_t thread_id_t;
typedef pid_t pid_t;
#define PROCESS_NO_THREAD 0          // No thread
#endif

#pragma pack(pop)
#endif // _IDD_HPP
