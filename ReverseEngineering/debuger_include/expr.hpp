/*
 *      Interactive disassembler (IDA).
 *      Copyright (c) 1990-2008 Hex-Rays
 *      ALL RIGHTS RESERVED.
 *
 */

#ifndef _EXPR_H
#define _EXPR_H
#pragma pack(push, 1)   // IDA uses 1 byte alignments!

/*
        This file contains functions that deal with C-like expressions
        and built-in IDC language.
*/

/*-------------------------------------------------------------------------*/

class idc_value_t;

// Convert IDC variable to a long (32/64bit) number
// Returns: v = 0 if impossible to convert to long

idaman error_t ida_export VarLong(idc_value_t *v);


// Convert IDC variable to a long number
// Returns: v = 0         if IDC variable = "false" string
//          v = 1         if IDC variable = "true" string
//          v = number    if IDC variable is number or string containing a number
//          eTypeConflict if IDC variable = empty string

idaman error_t ida_export VarNum(idc_value_t *v);


// Convert IDC variable to a text string

idaman error_t ida_export VarString(idc_value_t *v);


// Convert IDC variable to a floating point

idaman void ida_export VarFloat(idc_value_t *v);


// Free storage used by VT_STR type IDC variables

idaman void ida_export VarFree(idc_value_t *v);            // frees string value only


// Assign a2 to a1

idaman void ida_export VarAssign(idc_value_t *a1, const idc_value_t *a2);


//-------------------------------------------------------------------------
// Class to hold idc values

class idc_value_t
{
public:
  char vtype;                   // Type
#define  VT_STR         1
#define  VT_LONG        2
#define  VT_FLOAT       3
#define  VT_WILD        4       // VT_WILD means a function with arbitrary
                                // number of arguments. The actual number of
                                // arguments will be passed in 'num'

#ifndef SWIG
  union
  {
#endif //SWIG
    char *str;                  // VT_STR
    sval_t num;                 // VT_LONG
    ushort e[6];                // VT_FLOAT
#ifndef SWIG
  };
#endif // SWIG

  idc_value_t(void) : vtype(VT_LONG) {}
  idc_value_t(const idc_value_t &r) : vtype(VT_LONG)
  {
    VarAssign(this, &r);
  }
  ~idc_value_t(void)
  {
    if ( vtype == VT_STR )
      qfree(str);
  }
  void clear(void)
  {
    if ( vtype == VT_STR )
      qfree(str);
    vtype = VT_LONG;
  }
  idc_value_t &operator = (const idc_value_t &r)
  {
    VarAssign(this, &r);
    return *this;
  }
};

struct idc_global_t             // global idc variable
{
  qstring name;
  idc_value_t value;
  idc_global_t(void) { value.num = 0; }
  idc_global_t(const char *n) : name(n) { value.num = 0; }
};
typedef qvector<idc_global_t> idc_vars_t;

typedef error_t idaapi idc_func_t(idc_value_t *,idc_value_t *);

struct extfun_t                 /* Element of functions table */
{
  const char *name;             /* Name of function */
  idc_func_t *fp;               /* Pointer to the Function */
  const char *args;             /* Type of arguments. Terminated with 0 */
                                /* VT_WILD means a function with arbitrary
                                   number of arguments. Actual number of
                                   arguments will be passed in res->num */
  int flags;                    /* Function description flags           */
#define EXTFUN_BASE 0x0001      /*  - requires open database            */
};

struct funcset_t
{
  int qnty;                     /* Number of functions */
  extfun_t *f;                  /* Functions table */
  error_t (idaapi *startup)(void);
  error_t (idaapi *shutdown)(void);
};

/*-------------------------------------------------------------------------*/

// Array of built-in IDA functions

idaman funcset_t ida_export_data IDCFuncs; // external functions


// Add/remove a built-in IDC function
//      name - function name to modify
//      fp   - pointer to the function which will handle this IDC function
//             == NULL: remove the specified function
//      args - prototype of the function, zero terminated array of VT_...
// returns: success
// This function does not modify the predefined kernel functions
// Example:
//
//  static const char myfunc5_args[] = { VT_LONG, VT_STR, 0 };
//  static error_t idaapi myfunc5(idc_value_t *argv, idc_value_t *res)
//  {
//    msg("myfunc is called with arg0=%a and arg1=%s\n", argv[0].num, argv[1].str);
//    res->num = 5;     // let's return 5
//    return eOk;
//  }
//
//  after:
//      set_idc_func("MyFunc5", myfunc5, myfunc5_args);
//  there is a new IDC function which can be called like this:
//      MyFunc5(0x123, "test");

idaman bool ida_export set_idc_func(
        const char *name,
        idc_func_t *fp,
        const char *args);

/*-------------------------------------------------------------------------*/
// Support for third party language interpreters

struct extlang_t                // External language
{
  size_t size;                  // Size of this structure
  uint32 flags;                 // Language features, currently 0
  const char *name;             // Language name

  bool (idaapi *compile)(       // Compile an expression
        const char *name,       // in: name of the function which will
                                //     hold the compiled expression
        ea_t current_ea,        // in: current address. if unknown then BADADDR
        const char *expr,       // in: expression to compile
        char *errbuf,           // out: error message if compilation fails
        size_t errbufsize);     // in: size of the error buffer
                                // Returns: success

  bool (idaapi *run)(           // Evaluate a previously compiled expression
        const char *name,       // in: function to run
        int nargs,              // in: number of input arguments
        const idc_value_t args[], // in: input arguments
        idc_value_t *result,    // out: function result
        char *errbuf,           // out: error message if evaluation fails
        size_t errbufsize);     // in: size of the error buffer
                                // Returns: success

  bool (idaapi *calcexpr)(      // Compile and evaluate expression
        ea_t current_ea,        // in: current address. if unknown then BADADDR
        const char *expr,       // in: expression to evaluation
        idc_value_t *rv,        // out: expression value
        char *errbuf,           // out: error message if evaluation fails
        size_t errbufsize);     // in: size of the error buffer
                                // Returns: success

  bool (idaapi *compile_file)(  // Compile (load) a file
        const char *file,       // file name
        char *errbuf,           // out: error message if compilation fails
        size_t errbufsize);     // in: size of the error buffer

  const char *fileext;          // File name extension for the language
};
idaman ida_export_data const extlang_t *extlang;

// Register an external language interpreter
// Any previously registered interpreter will be automatically unregistered
//      el - description of the new language. must point to static storage
//           NULL unregisters the current language interpreter
// The registered interpreter will be used to evaluate expressions entered in
// dialog boxes. It will also replace the calcexpr() and calcexpr_long() functions.

inline void idaapi register_extlang(const extlang_t *el)
{
  extlang = el;
}


// Get the file extension for the current language
inline const char *get_extlang_fileext(void)
{
  const extlang_t *el = extlang;
  if ( el != NULL && el->size > qoffsetof(extlang_t, fileext) )
    return el->fileext;
  return NULL;
}


/*-------------------------------------------------------------------------*/

// Get name of directory that contains IDC scripts.
// This directory is pointed by IDCPATH environment variable or
// it is in IDC subdirectory in IDA directory

idaman const char *ida_export get_idcpath(void);


// set or append a header path
//      path - list of directories to add (separated by ';')
//             may be NULL, in this case nothing is added
//      add  - true: append
//             false: remove old pathes
// return: true if success, false if no memory
// IDA looks for the include files in the appended header pathes
// then in the ida executable directory

idaman bool ida_export set_header_path(const char *path, bool add);


// Get full name of IDC file name.
// Search for file in list of include directories, IDCPATH directory
// and the current directory
//      buf - buffer for the answer
//      bufsize - its size
//      file - file name without full path
// Returns: NULL is file not found
//          otherwise returns pointer to buf

idaman char *ida_export get_idc_filename(char *buf, size_t bufsize, const char *file);


// Compile and execute "main" function from system file
//      file    - file name with IDC function(s)
//                The file will be searched in
//                      - the current directory
//                      - IDA.EXE directory
//                      - in PATH
//      flag    - 1: display warning if the file is not found
//                0: don't complain if file doesn't exist
// returns: 1-ok, file is compiled and executed
//          0-failure, compilation or execution error, warning is displayed

idaman bool ida_export dosysfile(bool complain_if_no_file, const char *file);


// Compile and calculate an expression
//      where - the current linear address in the addressing space of the
//              program being disassembled. If will be used to resolve
//              names of local variables etc.
//              if not applicable, then should be BADADDR
//      line  - a text line with IDC expression
//      res   - pointer to result. The result will be converted
//              to 32/64bit number. Use calcexpr() if you
//              need the result of another type.
//      errbuf- buffer for the error message
//      errbufsize - size of errbuf
// returns: true-ok, false-error, see errbuf

idaman bool ida_export calcexpr_long(
        ea_t where,
        const char *line,
        sval_t *res,
        char *errbuf,
        size_t errbufsize);

inline bool idaapi calcexpr_long(
        ea_t where,
        const char *line,
        uval_t *res,
        char *errbuf,
        size_t errbufsize)
{
  return calcexpr_long(where, line, (sval_t *)res, errbuf, errbufsize);
}


// Compile and calculate an expression
//      where - the current linear address in the addressing space of the
//              program being disassembled. If will be used to resolve
//              names of local variables etc.
//              if not applicable, then should be BADADDR
//      line  - the expression to evaluate
//      rv    - pointer to the result
//      errbuf- buffer for the error message
//      errbufsize - size of errbuf
// returns: true-ok, false-error, see errbuf

idaman bool ida_export calcexpr(
        ea_t where,
        const char *line,
        idc_value_t *rv,
        char *errbuf,
        size_t errbufsize);


// The same as above but will always use the IDC interpreter regardless of the
// currently installed extlang. One subtle difference: the current value of rv
// will be discarded while calcexpr() frees it before storing the return value.

idaman bool ida_export calc_idc_expr(
        ea_t where,
        const char *buf,
        idc_value_t *rv,
        char *errbuf,
        size_t errbufsize);


// Compile and execute IDC expression.
//      line  - a text line with IDC expression
// returns: 1-ok
//          0-failure, a warning message is disaplayed

idaman bool ida_export execute(const char *line);


// Compile a text file with IDC function(s)
//      file       - name of file to compile
//                   if NULL, then "File not found" is returned.
//      del_macros - true to delete macros at the end of compilation.
//      errbuf     - buffer for the error message
//      errbufsize - size of errbuf
// returns: true-ok, false-error, see errbuf

idaman bool ida_export CompileEx(
        const char *file,
        bool del_macros,
        char *errbuf,
        size_t errbufsize);

inline bool idaapi Compile(
        const char *file,
        char *errbuf,
        size_t errbufsize)
{
  return CompileEx(file, true, errbuf, errbufsize);
}


inline bool compile_script_file(
        const char *file,
        char *errbuf,
        size_t errbufsize)
{
  const extlang_t *el = extlang;
  if ( el != NULL
    && el->size > qoffsetof(extlang_t, compile_file)
    && el->compile_file != NULL )
  {
    return el->compile_file(file, errbuf, errbufsize);
  }
  return Compile(file, errbuf, errbufsize);
}


// Compile one text line with IDC function(s)
//      line     - line with IDC function(s) (can't be NULL!)
//      errbuf   - buffer for the error message
//      errbufsize - size of errbuf
//      _getname - callback function to get values of undefined variables
//                 This function will be called if IDC function contains
//                 references to undefined variables. May be NULL.
// returns: true-ok, false-error, see errbuf

idaman bool ida_export CompileLine(
        const char *line,
        char *errbuf,
        size_t errbufsize,
        uval_t (idaapi*_getname)(const char *name)=NULL);


// compile idc or extlang function
idaman bool ida_export compile_script_func(
        const char *name,
        ea_t current_ea,
        const char *expr,
        char *errbuf,
        size_t errbufsize);


// Execute an IDC function.
//      fname   - function name. User-defined functions, built-in functions,
//                and plugin-defined functions are accepted.
//      argsnum - number of parameters to pass to 'fname'
//                This number should be equal to number of parameters
//                the function expects.
//      args    - array of parameters
//      result  - pointer to idc_value_t to hold the return value of the function.
//                Any value aready held by 'result' will be discarded
//                (e.g. a string buffer in VT_STR will not be freed).
//                Can be NULL if return value is not required.
//      errbuf  - buffer for the error message
//      errbufsize - size of errbuf
// returns: true-ok, false-error, see errbuf

idaman bool ida_export Run(
                const char *fname,
                int argsnum,
                const idc_value_t args[],
                idc_value_t *result,
                char *errbuf,
                size_t errbufsize);


// execute idc or extlang function
inline bool run_script_func(
                const char *fname,
                int argsnum,
                const idc_value_t args[],
                idc_value_t *result,
                char *errbuf,
                size_t errbufsize)
{
  if ( extlang != NULL )
    return extlang->run(fname, argsnum, args, result, errbuf, errbufsize);
  else
    return Run(fname, argsnum, args, result, errbuf, errbufsize);
}


// Compile and execute IDC function(s) on one line of text
//      line     - text of IDC functions
//      func     - function name to execute
//      getname  - callback function to get values of undefined variables
//                 This function will be called if IDC function contains
//                 references to a undefined variable. May be NULL.
//      argsnum  - number of parameters to pass to 'fname'
//                 This number should be equal to the number of parameters
//                 the function expects.
//      args     - array of parameters
//      result   - ptr to idc_value_t to hold result of the function.
//                 'result' should not have VT_STR type, otherwise its
//                 value will be discarded and the string won't be freed.
//                 You may pass NULL if you are not interested in the returned
//                 value.
//      errbuf   - buffer for the error message
//      errbufsize - size of errbuf
// returns: true-ok, false-error, see errbuf

idaman bool ida_export ExecuteLine(
                const char *line,
                const char *func,
                uval_t (idaapi*getname)(const char *name),
                int argsnum,
                const idc_value_t args[],
                idc_value_t *result,                // may be NULL. Any previous
                                                // value is DISCARDED (not freed)
                char *errbuf,
                size_t errbufsize);


// Compile and execute IDC function(s) from file
//      file     - text file containing text of IDC functions
//      func     - function name to execute
//      getname  - callback function to get values of undefined variables
//                 This function will be called if IDC function contains
//                 references to a undefined variable. May be NULL.
//      argsnum - number of parameters to pass to 'fname'
//                This number should be equal to number of parameters
//                the function expects.
//      args    - array of parameters
//      result  - ptr to idc_value_t to hold result of the function.
//                'result' should not have VT_STR type, otherwise its
//                value will be discarded and the string won't be freed.
//                You may pass NULL if you are not interested in the returned
//                value.
//      errbuf  - buffer for the error message
//      errbufsize - size of errbuf
// returns: true-ok, false-error, see errbuf

idaman bool ida_export ExecuteFile(
                const char *file,
                const char *func,
                int argsnum,
                const idc_value_t args[],
                idc_value_t *result,                // may be NULL. Any previous
                                                // value is DISCARDED (not freed)
                char *errbuf,
                size_t errbufsize);


// Add a compiled IDC function to the pool of compiled functions.
// This function makes the input function available to be executed.
//      name - name of the function
//      narg - number of the function parameteres
//      body - compiled body of the function
//      len  - length of the function body in bytes.

idaman void ida_export set_idc_func_body(
                const char *name,
                int narg,
                const uchar *body,
                size_t len);


// Get the body of a compiled IDC function
//      name - name of the function
//      narg - pointer to the number of the function parameteres (out)
//      len  - out: length of the function body (may be NULL)
// returns: pointer to the buffer with the function body
//             buffer will be allocated using qalloc()
//          NULL - failed (no such defined function)

idaman uchar *ida_export get_idc_func_body(
                const char *name,
                int *narg,
                size_t *len);


/*-------------------------------------------------------------------------*/

extern int idc_stacksize;       // Total number of local variables
extern int idc_calldepth;       // Maximal function call depth

int expr_printf(idc_value_t *argv, idc_value_t *r);
int expr_sprintf(idc_value_t *argv, idc_value_t *r);
int expr_printfer(int (*outer)(void *,char), void *ud, idc_value_t *argv, idc_value_t *r);


void idaapi init_idc(void);
void idaapi term_idc(void);
void del_idc_userdefs(void);

extfun_t *find_builtin_idc_func(const char *name);

extern class lexer_t *idc_lx;
extern idc_vars_t idc_vars;

#ifndef NO_OBSOLETE_FUNCS
typedef idc_value_t value_t;
#endif

#pragma pack(pop)
#endif /* _EXPR_H */
