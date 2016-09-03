/*
 *      Interactive disassembler (IDA).
 *      Copyright (c) 1990-2008 Hex-Rays
 *      ALL RIGHTS RESERVED.
 *
 */

#ifndef _ERR_H
#define _ERR_H
#pragma pack(push, 1)

#ifndef UNDER_CE
#include <errno.h>
#endif

//
//      This file contains error handling functions.
//      They are not used in IDA yet.
//

/*--------------------------------------------------*/
/* The 2 following functions use buffer 3 of the help system */
idaman void  ida_export vqperror( char *str, va_list va );
idaman char *ida_export qstrerror(int _qerrno, char *buf, size_t bufsize);

// Get error message for MS Windows error codes

idaman char *ida_export winerr(int code);

// errno or GetLastError() depending on the system
// on Windows CE there is no 'errno', so we use GetLastError()
idaman int ida_export qerrcode(int new_code=-1);

// get error string corresponding to qerrcode()
// if code == -1, then qerrcode() will be called
idaman const char *ida_export qerrstr(int code=-1);


#ifdef __cplusplus
inline void qperror( char *str, ... )
{
  va_list va;
  va_start(va, str);
  vqperror(str, va);
  va_end(va);
}

inline void set_errno(int code)
{
#ifdef UNDER_CE
  qerrno = code;
#else
  errno = code;
  qerrno = eOS;
#endif
}
#endif

#if defined(UNDER_CE) && (!defined(EBADF) || !defined(ENOMEM))
const int EBADF = 1513;
const int ENOMEM = 1514;
#endif

/*==================================================*/
/* error handlers */
/*--------------------------------------------------*/
/* Error handler function returns non-zero (true) if error is fatal */
typedef int (*errhndfun_t)( error_t myerrno, void *errdesc, void *data );
typedef struct
{
   errhndfun_t fun;
   void *data;
} errhnd_t;
/* Example of handler call:
   if( ErrHnd.fun( e..., ..., ErrHnd.data ))
   {
      ...fatal
      qerrno = e...;
      return -1;
   }
*/
/*--------------------------------------------------*/
/* This function returns previous error handler
   Example of module's set handler function:
static errhnd_t ErrHnd;
errhnd_t *<mod>SetErrHnd( errhndfun_t fun, void *data, errhnd_t *oldhnd )
{
   if( oldhnd )
      *oldhnd = ErrHnd;
   ErrHnd.fun = fun;
   ErrHnd.data = data;
   return oldhnd;
}
*/
/*--------------------------------------------------*/
/* standard error handler */
/* error always is fatal */
int StdErrHnd0( error_t _qerrno, void *errdesc, void *data );
/* always ignore error */
int StdErrHnd1( error_t _qerrno, void *errdesc, void *data );

/*
        Error parameters
*/

idaman char ida_export_data errprm1[MAXSTR];
idaman char ida_export_data errprm2[MAXSTR];
idaman char ida_export_data errprm3[MAXSTR];
idaman char ida_export_data errprm4[MAXSTR];

idaman ssize_t ida_export_data errval1;
idaman ssize_t ida_export_data errval2;
idaman ssize_t ida_export_data errval3;
idaman ssize_t ida_export_data errval4;

#define QPRM_TYPE(t,n,x)        ((errval ## n) = (t)(x))
#define QPRM_CHAR(n,x)          QPRM_TYPE(char,n,x)
#define QPRM_SHORT(n,x)         QPRM_TYPE(short,n,x)
#define QPRM_INT(n,x)           QPRM_TYPE(int,n,x)
#define QPRM_INT32(n,x)         QPRM_TYPE(int32,n,x)
#define QPRM_UCHAR(n,x)         QPRM_TYPE(uchar,n,x)
#define QPRM_USHORT(n,x)        QPRM_TYPE(ushort,n,x)
#define QPRM_UINT(n,x)          QPRM_TYPE(uint,n,x)
#define QPRM_UINT32(n,x)        QPRM_TYPE(uint32,n,x)
#define QPRM(n,x)               (errval ## n = size_t(errprm ## n),qstrncpy(errprm ## n,x, sizeof(errprm ## n)))

#pragma pack(pop)
#endif

