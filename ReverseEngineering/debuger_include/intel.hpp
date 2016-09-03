/*
 *      Interactive disassembler (IDA).
 *      Copyright (c) 1990-2008 Hex-Rays
 *      ALL RIGHTS RESERVED.
 *
 */

#ifndef _INTEL_HPP
#define _INTEL_HPP

#include <struct.hpp>
#include <fixup.hpp>
#include <demangle.hpp>
#include <srarea.hpp>
#include <ieee.h>
#include <typeinf.hpp>
#include <ints.hpp>
#include <frame.hpp>
#include <idd.hpp>
#pragma hdrstop

#pragma pack(push, 4)

//---------------------------------
// not in ash.uflag for kernel (out struc/union descriptions)
inline bool tasm_ideal(void)  { return (ash.flag2 & AS2_IDEALDSCR) != 0; }

//---------------------------------
// Intel 80x86 cmd.auxpref bits
#define aux_lock        0x0001
#define aux_rep         0x0002
#define aux_repne       0x0004
#define aux_use32       0x0008  // segment type is 32-bits
#define aux_use64       0x0010  // segment type is 64-bits
#define aux_large       0x0020  // offset field is 32-bit (16-bit is not enough)
#define aux_short       0x0040  // short (byte) displacement used
#define aux_sgpref      0x0080  // a segment prefix byte is not used
#define aux_oppref      0x0100  // operand size prefix byte is not used
#define aux_adpref      0x0200  // address size prefix byte is not used
#define aux_basess      0x0400  // SS based instruction
#define aux_natop       0x0800  // operand size is not overridden by prefix
#define aux_natad       0x1000  // addressing mode is not overridden by prefix
#define aux_fpemu       0x2000  // FP emulator instruction

//---------------------------------
// operand types and other customization:
#define o_trreg         o_idpspec0      // IDP specific type
#define o_dbreg         o_idpspec1      // IDP specific type
#define o_crreg         o_idpspec2      // IDP specific type
#define o_fpreg         o_idpspec3      // IDP specific type
#define o_mmxreg        o_idpspec4      // IDP specific type
#define o_xmmreg        o_idpspec5      // IDP specific type


// 04.10.97: For o_mem,o_near,o_far we keep segment information as
// segrg - number of segment register to use
// if it is == SEGREG_IMM, then the segment was specified as an immediate
// value, look at segsel.

#define segrg           specval_shorts.high
#define SEGREG_IMM      0xFFFF          // this value of segrg means that
                                        // segment selector value is in
                                        // "segsel":
#define segsel          specval_shorts.low
#define hasSIB          specflag1
#define sib             specflag2
#define rex             insnpref

const int REX_W = 8;               // 64-bit operand size
const int REX_R = 4;               // modrm reg field extension
const int REX_X = 2;               // sib index field extension
const int REX_B = 1;               // modrm r/m, sib base, or opcode reg fields extension

//---------------------------------
typedef short regnum_t;

//---------------------------------
bool insn_default_opsize_64(void);

inline bool mode16(void){ return (cmd.auxpref & (aux_use32|aux_use64)) == 0; } // 16-bit mode?
inline bool mode32(void){ return (cmd.auxpref & aux_use32) != 0; } // 32-bit mode?
inline bool mode64(void){ return (cmd.auxpref & aux_use64) != 0; } // 64-bit mode?
inline bool natad(void) { return (cmd.auxpref & aux_natad) != 0; } // natural address size (no prefixes)?
inline bool natop(void) { return (cmd.auxpref & aux_natop) != 0; } // natural operand size (no prefixes)?

inline bool ad16(void)          // is current addressing 16-bit?
{
  int p = cmd.auxpref & (aux_use32|aux_use64|aux_natad);
  return p == aux_natad || p == aux_use32;
}

inline bool ad32(void)          // is current addressing 32-bit?
{
  int p = cmd.auxpref & (aux_use32|aux_use64|aux_natad);
  return p == (aux_natad|aux_use32)
      || p == 0
      || p == aux_use64;
}

inline bool ad64(void)          // is current addressing 64-bit?
{
  int p = cmd.auxpref & (aux_use32|aux_use64|aux_natad);
  return p == (aux_natad|aux_use64);
}

inline bool op16(void)          // is current operand size 16-bit?
{
  int p = cmd.auxpref & (aux_use32|aux_use64|aux_natop);
  return p == aux_natop                                 // 16-bit segment, no prefixes
      || p == aux_use32                                 // 32-bit segment, 66h
      || p == aux_use64 && (cmd.rex & REX_W) == 0;      // 64-bit segment, 66h, no rex.w
}

inline bool op32(void)          // is current operand size 32-bit?
{
  int p = cmd.auxpref & (aux_use32|aux_use64|aux_natop);
  return p == 0                                         // 16-bit segment, 66h
      || p == (aux_use32|aux_natop)                     // 32-bit segment, no prefixes
      || p == (aux_use64|aux_natop) && (cmd.rex & REX_W) == 0; // 64-bit segment, 66h, no rex.w
}

inline bool op64(void)          // is current operand size 64-bit?
{
  return mode64()
      && ((cmd.rex & REX_W) != 0
       || natop() && insn_default_opsize_64()); // 64-bit segment, rex.w or insns-64
}

inline int sib_base(const op_t &x)                    // get extended sib base
{
  int base = x.sib & 7;
  if ( cmd.rex & REX_B )
    base |= 8;
  return base;
}

inline regnum_t sib_index(const op_t &x)                   // get extended sib index
{
  regnum_t index = regnum_t((x.sib >> 3) & 7);
  if ( cmd.rex & REX_X )
    index |= 8;
  return index;
}

inline int sib_scale(const op_t &x)
{
  int scale = (x.sib >> 6) & 3;
  return scale;
}

// get the base register of the operand with a displacement
inline int x86_base(const op_t &x)
{
  return x.hasSIB ? sib_base(x) : x.phrase;
}

const int INDEX_NONE = 4;       // no index register is present
// get the index register of the operand with a displacement
inline int x86_index(const op_t &x)
{
  return x.hasSIB ? sib_index(x) : INDEX_NONE;
}

// get the scale factor of the operand with a displacement
inline int x86_scale(const op_t &x)
{
  return x.hasSIB ? sib_scale(x) : 1;
}

// does the operand have a displacement?
inline int has_displ(const op_t &x)
{
  return x.type == o_displ || x.type == o_mem && x.hasSIB;
}

// does the operand have a stack based displacement? (sp or bp based)
bool has_stack_displ(const op_t &x);

// return addressing width in form of dt_... constant
inline char address_dtyp(void)
{
  return char(ad64() ? dt_qword : ad32() ? dt_dword : dt_word);
}

// return operand width in form of dt_... constant
inline char operand_dtyp(void)
{
  return char(op64() ? dt_qword : op32() ? dt_dword : op16() ? dt_word : dt_byte);
}

inline bool is_io_insn(void)
{
  return cmd.itype == NN_ins
      || cmd.itype == NN_outs
      || cmd.itype == NN_out
      || cmd.itype == NN_in;
}

//---------------------------------
extern netnode intel_node;              // name: "$ vmm functions"
                                        // supvals -- for vmm functions
                                        // altvals -- for int ah values
                                        //           also for register values
                                        //           of indirect register calls
                                        // supvals('f') - frame info
                                        // charval('p') - postponed npurged info
                                        // blob('s') - push info
                                        // supval('b') - fbase register num and value
                                        // altval('r') - if 'ret' is not a function return
                                        // address of the jump target. This info is
                                        // useful for the 'push offset; ret' pairs.
                                        // If the jump target is unknown, use BADADDR.
                                        // charval('P') - is callee a ptr?

const char fbase_tag    = 'b';
const char frame_tag    = 'f';
const char purge_tag    = 'p';
const char ret_tag      = 'r';
const char pushinfo_tag = 's';
const char is_ptr_tag   = 'P';

struct fbase_reg_t
{
  ea_t value;
  ea_t minea;
  int16 reg;
  int16 unused;
};

// fbase reg is a register used to access data for the current function
// it is usually initialized by __i686_get_pc_thunk() function
bool get_fbase_reg(ea_t ea, fbase_reg_t *fbr=NULL);
void set_fbase_reg(ea_t ea, ea_t minea, int reg, ea_t value);

// Some 'ret' insns do not return from the function but are used for short jumps
// (for example: push off; ret). The following functions mark such 'ret' instructions.
inline bool get_ret_target(ea_t ea, ea_t *target)
{
  if ( intel_node.supval(ea, target, sizeof(ea_t), ret_tag) != sizeof(ea_t) )
    return false;
  if ( target != NULL )
    *target += ea;
  return true;
}

inline void set_ret_target(ea_t ea, ea_t target)
{
  intel_node.altset(ea, target-ea, ret_tag);
}

inline void del_ret_target(ea_t ea)
{
  intel_node.altdel(ea, ret_tag);
}

extern bgcolor_t prolog_color;
extern bgcolor_t epilog_color;
extern bgcolor_t switch_color;
extern uint32 idpflags;                  // name: "$ idpflags"

#define AFIDP_PUSH      0x0001          // push seg; push num; is converted to offset
#define AFIDP_NOP       0x0002          // db 90h after jmp is converted to nop

#define AFIDP_MOVOFF    0x0004          // mov     reg, numoff  <- convert to offset
                                        // mov     segreg, immseg

#define AFIDP_MOVOFF2   0x0008          // mov     z, numoff    <- convert to offset
                                        // mov     z, immseg
                                        // where z - o_mem, o_displ
#define AFIDP_ZEROINS   0x0010          // allow zero opcode instructions:
                                        //      add [bx+si], al  (16bit)
                                        //      add [eax], al    (32bit)

#define AFIDP_BRTTI     0x0020          // Advanced analysis of Borlands RTTI
#define AFIDP_UNKRTTI   0x0040          // -"- with 'unknown_libname'
#define AFIDP_EXPFUNC   0x0080          // for PE? bc(ms?) - expanding
                                        // function (exception subblock)
#define AFIDP_DIFBASE   0x0100          // Allow references with different segment bases
#define AFIDP_NOPREF    0x0200          // Don't display superfluous prefixes
#define AFIDP_NOVXD     0x0400          // Don't interpret int 20 as VxDcall
#define AFIDP_NOFPEMU   0x0800          // Disable FPU emulation instructions
#define AFIDP_SHOWRIP   0x1000          // Explicit RIP-addressing

inline bool should_af_push(void)   { return (idpflags & AFIDP_PUSH) != 0; }
inline bool should_af_nop(void)    { return (idpflags & AFIDP_NOP) != 0; }
inline bool should_af_movoff(void) { return (idpflags & AFIDP_MOVOFF) != 0; }
inline bool should_af_movoff2(void){ return (idpflags & AFIDP_MOVOFF2) != 0; }
inline bool should_af_zeroins(void){ return (idpflags & AFIDP_ZEROINS) != 0; }
inline bool should_af_brtti(void)  { return (idpflags & AFIDP_BRTTI) != 0; }
inline bool should_af_urtti(void)  { return (idpflags & AFIDP_UNKRTTI) != 0; }
inline bool should_af_fexp(void)   { return (idpflags & AFIDP_EXPFUNC) != 0; }
inline bool should_af_difbase(void){ return (idpflags & AFIDP_DIFBASE) != 0; }
inline bool should_af_nopref(void) { return (idpflags & AFIDP_NOPREF) != 0; }
inline bool should_af_vxd(void)    { return (idpflags & AFIDP_NOVXD) == 0; }
inline bool should_af_fpemu(void)  { return (idpflags & AFIDP_NOFPEMU) == 0; }
inline bool should_af_showrip(void){ return (idpflags & AFIDP_SHOWRIP) != 0; }

inline size_t indent_spaces(size_t sz) { ssize_t len = inf.indent - sz;
                                         return (len < 1) ? 1 : len; }

enum RegNo
{
  R_none = -1,
  R_ax = 0,
  R_cx = 1,
  R_dx = 2,
  R_bx = 3,
  R_sp = 4,
  R_bp = 5,
  R_si = 6,
  R_di = 7,
  R_r8 = 8,
  R_r9 = 9,
  R_r10 = 10,
  R_r11 = 11,
  R_r12 = 12,
  R_r13 = 13,
  R_r14 = 14,
  R_r15 = 15,

  R_al = 16,
  R_cl = 17,
  R_dl = 18,
  R_bl = 19,
  R_ah = 20,
  R_ch = 21,
  R_dh = 22,
  R_bh = 23,

  R_spl = 24,
  R_bpl = 25,
  R_sil = 26,
  R_dil = 27,

  R_ip = 28,

  R_es = 29,    // 0
  R_cs = 30,    // 1
  R_ss = 31,    // 2
  R_ds = 32,    // 3
  R_fs = 33,
  R_gs = 34,

  R_cf = 35,    // main cc's
  R_zf = 36,
  R_sf = 37,
  R_of = 38,

  R_pf = 39,    // additional cc's
  R_af = 40,
  R_tf = 41,
  R_if = 42,
  R_df = 43,

  R_efl = 44,   // eflags

  R_st0 = 45,   // floating point registers
  R_st1 = 46,
  R_st2 = 47,
  R_st3 = 48,
  R_st4 = 49,
  R_st5 = 50,
  R_st6 = 51,
  R_st7 = 52,
  R_fpctrl = 53,// fpu control register
  R_fpstat = 54,// fpu status register
  R_fptags = 55,// fpu tags register
};

inline bool is_segreg(int r) { return r >= R_es && r <= R_gs; }
int cvt_to_wholereg(int reg, bool allow_high_byte_regs); // byte reg -> whole reg

// the second operand of lea instruction should not be treated as memory reference
// unless there is cs: prefix or the user has specified 'offset' flag
// in other cases lea is used for arbirary calculations
inline bool is_arith_lea(const op_t &x)
{
  return cmd.itype == NN_lea && x.segrg != R_cs && !isOff(uFlag, x.n);
}

// the following operand types are ignored for imul's third operand
inline bool is_forbidden_imul_flag(const op_t &x, flags_t F)
{
  if ( x.n == 2 && cmd.Op1.showed() )
    return isOff1(F) || isStroff1(F) || isStkvar1(F);
  return false;
}

//------------------------------------------------------------------
inline sel_t getDS(ea_t EA) { return getSR(EA,R_ds); }
inline sel_t getES(ea_t EA) { return getSR(EA,R_es); }
inline sel_t getSS(ea_t EA) { return getSR(EA,R_ss); }
inline sel_t getFS(ea_t EA) { return getSR(EA,R_fs); }
inline sel_t getGS(ea_t EA) { return getSR(EA,R_gs); }

//------------------------------------------------------------------
void idaapi intel_header(void);
void idaapi intel_footer(void);

void idaapi intel_assumes(ea_t ea);
void idaapi intel_segstart(ea_t ea);
void idaapi intel_segend(ea_t ea);

void idaapi intel_out(void);
void idaapi gen_stkvar_def(char *buf, size_t bufsize, const member_t *mptr, sval_t v);
ssize_t idaapi get_type_name(flags_t flag, ea_t ea_or_id, char *buf, size_t bufsize);
int idaapi is_align_insn(ea_t ea);
ea_t get_segval(const op_t &x);
ea_t get_mem_ea(const op_t &x);
int get_imm_outf(const op_t &x);
int get_displ_outf(const op_t &x);

void idaapi pc_data(ea_t ea);
int  idaapi pc_ana(void);
int  idaapi pc_emu(void);
bool idaapi pc_outop(op_t &op);

struct pushreg_t
{
  ea_t     ea;    // instruction ea
  uval_t   off;   // offset from the frame top (sp delta)
  uval_t   width; // register width (or number of allocated bytes)
  regnum_t reg;   // register number (R_none means stack space allocation)
};

struct pushinfo_t
{
  enum { PUSHINFO_VERSION = 3 };
  int flags;
#define PINF_SEHCALL    0x0001  // call to SEH_prolog is present
#define PINF_SEHMAN     0x0002  // Manual SEH setup
#define PINF_COOKIE     0x0004  // Has security cookie
  qvector<pushreg_t> psi;       // stack allocation instructions
  ssize_t bpidx;                // index into psi
  uint32 spoiled;               // bitmask of spoiled registers at the end of prolog

  eavec_t prolog_insns;         // additional prolog instruction addresses
                                // (in addition to instructions from psi)

  typedef qvector<eavec_t> pop_info_t;
  pop_info_t pops;              // pop insns for pushs (indexes shifted by one)
                                // in other words, this is epilog instructions
                                // index 0: epilog insns not linked to a push insn
                                // 1..psi.size(): epilog insns for each push insn
                                // usually there will be only one pop for each push.
                                // but there might be several pops for each push.
                                // (because the function has several returns)

  pushinfo_t(void) : flags(0), bpidx(-1), spoiled(0) {}
  int verify(func_t *pfn);
  void save_to_idb(ea_t ea);
  bool restore_from_idb(ea_t ea);
  uchar *pack_eavec(ea_t ea, const eavec_t &insns, uchar *ptr, uchar *end);
  void unpack_eavec(ea_t ea, eavec_t &insns, const uchar **ptr, const uchar *end);
};

enum spec_func_type_t
{
  SF_NONE,
  SF_EH_PROLOG,
  SF_SEH_PROLOG,
  SF_SEH_EPILOG,
  SF_ALLOCA,
  SF_CHK,
  SF_SYSINIT,
  SF_EH_EPILOG,
};
int spoils(const uint32 *regs, int n);
inline bool spoils(int reg)
{
  uint32 r = reg;
  return spoils(&r, 1) != -1;
}
bool find_reg_value(int reg, sval_t *v);
bool idaapi is_switch(switch_info_ex_t *si);
bool idaapi equal_ops(const op_t &x, const op_t &y);
bool idaapi is_sp_based(const op_t &x);
bool idaapi create_func_frame(func_t *pfn);
int  idaapi is_jump_func(func_t *pfn, ea_t *jump_target, ea_t *func_pointer);
bool is_alloca_probe(const char *name);
void check_for_alloca_renaming(ea_t ea, const char *name);
bool is_stack_changing_func(ea_t ea);
bool verify_sp(func_t *pfn);
ea_t find_callee(bool *p_is_ptr=NULL);
int pc_calc_purged_from_type(const type_t *type);
int pc_calc_arglocs(const type_t *type, cm_t cc, uint32 *arglocs);
int pc_calc_retloc(const type_t *type, cm_t cc, uint32 *retloc);
bool pc_use_stkvar_type(ea_t ea, const type_t *type, const char *name);
int pc_use_regvar_type(
        ea_t ea,
        const type_t * const *types,
        const char * const *names,
        const uint32 *regs,
        int n);
int use_pc_arg_types(
        ea_t caller,
        const type_t * const *types,
        const char * const *names,
        const uint32 *arglocs,
        int n,
        const type_t **rtypes,
        const char **rnames,
        uint32 *rlocs,
        int rn);
int get_fastcall_regs(const int **pregs);
int get_thiscall_regs(const int **pregs);
int calc_cdecl_purged_bytes(ea_t ea);
sval_t calc_sp_delta(void);
uval_t analyze_frame(
        func_t *pfn,
        bool *p_bpused,
        uval_t *p_fpd,
        uval_t *p_preregs,
        uval_t *p_postregs,
        sval_t *p_argsize,
        sval_t sym_jmps[2]);
void del_additional_frame_info(func_t *pfn);
bool calc_func_call_delta(func_t *caller, ea_t callee, sval_t *p_delta, spec_func_type_t *p_functype);
sval_t calc_ebp_phrase(func_t *pfn, op_t &x);
bool is_pc_return(bool strict);
bool is_move_insn(void);
void setup_til(void);
bool is_userland_app(void);
bool is_userland_pe(void);
//------------------------------
struct vxd_info       // loaded from ida.int
{
  ushort sp_off;      // bytes purge upon return
  ushort prm_pos;     // offset in strings to params (0 if none)
  ushort cmt_pos;     // offset in strings to comment (0 if none)
  char   strings[MAXSTR]; // name [param] [comment]
};

bool is_vxd_interrupt(void);
bool vxd_information(vxd_info *vx);
void pc_move_segm(ea_t from, segment_t *s);

typedef const regval_t &idaapi getreg_t(const char *name, const regval_t *regvalues);

bool pc_get_operand_info(ea_t ea,
                         int n,
                         int tid,
                         getreg_t *getreg,
                         const regval_t *regvalues,
                         idd_opinfo_t *opinf);
const char *get_dbg_regname(int reg);
uval_t getr(int reg, char dtyp, getreg_t *getreg, const regval_t *rv);
//------------------------------
bool borland_template(va_list va);
int  borland_coagulate(va_list va);
void borland_signature(void);
//-------------------------------
ea_t get_codeseq_target(ea_t ea, ea_t eea);
void cover_func_finalize(func_t *pf);
void compiler_finalize(void);
bool is_sane_insn(int reason);
int  may_be_func(bool creating_chunks=false);
bool validate_flirt_func(ea_t ea);
bool might_change_sp(ea_t ea);
ssize_t pc_get_reg_name(int reg, size_t width, char *buf, size_t bufsize, int reghi);
ssize_t pc_get_one_reg_name(int reg, size_t width, char *outbuf, size_t bufsize);
//----------------------------------------------------------------------
bool is_segment_normal(ea_t ea);

#define INFO_TAG  'B'

//----------------------------------------------------------------------

#define IM_NONE   0
#define IM_PROLOG 1     // prolog instruction
#define IM_EPILOG 2     // epilog instruction
#define IM_SWITCH 3     // switch instruction

extern netnode ignore_micro; // name: "$ ignore micro"
inline char get_ignore_micro(ea_t ea) { return ignore_micro.charval(ea, 0); }
inline bool should_ignore_micro(ea_t ea) { return get_ignore_micro(ea) != IM_NONE; }
inline void set_ignore_micro(ea_t ea, uchar im_type) { ignore_micro.charset(ea, im_type, 0); }
inline void clr_ignore_micro(ea_t ea) { ignore_micro.chardel(ea, 0); }
inline void mark_prolog_insn(ea_t ea) { set_ignore_micro(ea, IM_PROLOG); }
inline void mark_epilog_insn(ea_t ea) { set_ignore_micro(ea, IM_EPILOG); }
inline void mark_switch_insn(ea_t ea) { set_ignore_micro(ea, IM_SWITCH); }
inline bool is_prolog_insn(ea_t ea) { return get_ignore_micro(ea) == IM_PROLOG; }
inline bool is_epilog_insn(ea_t ea) { return get_ignore_micro(ea) == IM_EPILOG; }
inline bool is_switch_insn(ea_t ea) { return get_ignore_micro(ea) == IM_SWITCH; }
inline ea_t next_marked_insn(ea_t ea) { return ignore_micro.charnxt(ea, 0); }


// The following events are supported by the PC module in the ph.notify() function
namespace pc_module_t
{
  enum event_codes_t
  {
    set_difbase = processor_t::loader,
                        // set AFIDP_DIFBASE flag
                        // in: int onoff
                        // Returns: nothing
    restore_pushinfo,   // Restore function prolog info from the database
                        // in: ea_t func_start
                        //     pushinfo_t *pi
                        // Returns: 2-ok, otherwise-failed
    save_pushinfo,      // Save function prolog info to the database
                        // in: ea_t func_start
                        //     pushinfo_t *pi
                        // Returns: 2-ok, otherwise-failed
    prolog_analyzed,    // This event is generated by the PC module
                        // at the end of prolog analysis. Plugins may
                        // hook to it and improve the analysis.
                        // in: ea_t first_past_prolog_insn
                        //     pushinfo_t *pi
                        // Returns: 1-ok, 2-ok but do not automatically verify epilog
    verify_epilog,      // Verify function epilog
                        // in: pushinfo_t *pi
                        //     int *answer
                        // cmd structure must be filled with the first epilog insn
                        // number of verified epilog instructions will be in the 'answer'
                        // returns: 2-ok, otherwise-failed
    find_reg_value,     // Find a register value by looking backwards from cmd.ea
                        // in: int regnum
                        //     sval_t *value
                        // returns: 2-found, 0-not found, otherwise not implemented
                        // This function spoils cmd
  };
}

//-------------------------------------------------------------------------

//
//      Don't use the following define's with underscores at the start!
//

extern int procnum;     // internal processor number
extern uint32 pflag;

#define _PT_486p        0x00000001
#define _PT_486r        0x00000002
#define _PT_386p        0x00000004
#define _PT_386r        0x00000008
#define _PT_286p        0x00000010
#define _PT_286r        0x00000020
#define _PT_086         0x00000040
#define _PT_586p        0x00000080      // Pentium real mode
#define _PT_586r        0x00000100      // Pentium protected mode
#define _PT_686r        0x00000200      // Pentium Pro real
#define _PT_686p        0x00000400      // Pentium Pro protected
#define _PT_mmx         0x00000800      // MMX extensions
#define _PT_pii         0x00001000      // Pentium II
#define _PT_3d          0x00002000      // 3DNow! extensions
#define _PT_piii        0x00004000      // Pentium III
#define _PT_k7          0x00008000      // AMD K7
#define _PT_p4          0x00010000      // Pentium 4
#define _PT_sse3        0x00020000      // SSE3 + SSSE3
#define _PT_sse4        0x00040000      // SSE4.1 + SSE4.2

//
//   The following values mean 'is XXX processor or better?'
//

#define PT_sse4          _PT_sse4
#define PT_sse3         (_PT_sse3 | _PT_sse4 )
#define PT_p4           ( PT_sse3 | _PT_p4   )
#define PT_k7           ( PT_p4   | _PT_k7   )
#define PT_piii         ( PT_k7   | _PT_piii )
#define PT_k62          ( PT_piii | _PT_3d   )
#define PT_3d            _PT_3d
#define PT_pii          ( PT_piii | _PT_pii  )
#define PT_mmx          (_PT_mmx  | _PT_3d   )
#define PT_686p         ( PT_pii  | _PT_686p )
#define PT_686r         ( PT_686p | _PT_686r )
#define PT_586p         ( PT_686r | _PT_586p )
#define PT_586r         ( PT_586p | _PT_586r )
#define PT_486p         ( PT_586r | _PT_486p )
#define PT_486r         ( PT_486p | _PT_486r )
#define PT_386p         ( PT_486r | _PT_386p )
#define PT_386r         ( PT_386p | _PT_386r )
#define PT_286p         ( PT_386r | _PT_286p )
#define PT_286r         ( PT_286p | _PT_286r )
#define PT_086          ( PT_286r | _PT_086  )

//
//   The following values mean 'is exactly XXX processor?'
//

#define PT_ismmx        ( _PT_mmx             )
#define PT_is686        ( _PT_686r | _PT_686p )
#define PT_is586        ( _PT_586r | _PT_586p )
#define PT_is486        ( _PT_486r | _PT_486p )
#define PT_is386        ( _PT_386r | _PT_386p )
#define PT_is286        ( _PT_286r | _PT_286p )
#define PT_is086        ( _PT_086 )

//---------------------------------------------------------------------
inline bool isProtected(uint32 type)
{
   return (type & (_PT_286p |
                   _PT_386p |
                   _PT_486p |
                   _PT_586p |
                   _PT_686p |
                   _PT_pii    )) != 0;
}

inline bool isAMD(uint32 type)   { return (type & PT_k7  ) != 0; }
inline bool isp4 (uint32 type)   { return (type & PT_p4  ) != 0; }
inline bool isp3 (uint32 type)   { return (type & PT_piii) != 0; }
inline bool is3dnow(uint32 type) { return (type & PT_3d  ) != 0; }
inline bool ismmx(uint32 type)   { return (type & PT_mmx ) != 0; }
inline bool isp2 (uint32 type)   { return (type & PT_pii ) != 0; }
inline bool is686(uint32 type)   { return (type & PT_686r) != 0; }
inline bool is586(uint32 type)   { return (type & PT_586r) != 0; }
inline bool is486(uint32 type)   { return (type & PT_486r) != 0; }
inline bool is386(uint32 type)   { return (type & PT_386r) != 0; } // is 386 or better ?
inline bool is286(uint32 type)   { return (type & PT_286r) != 0; } // is 286 or better ?

#pragma pack(pop)
#endif // _INTEL_HPP
