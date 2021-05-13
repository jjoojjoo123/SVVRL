# 1 "pan.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "pan.c"






# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 8 "pan.c" 2
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/signum.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/signum.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4







typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 36 "/usr/include/signal.h" 2 3 4




typedef __pid_t pid_t;





typedef __uid_t uid_t;






# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4







struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 54 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;





    int __pad0;


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  SI_ASYNCNL = -60,
  SI_TKILL = -6,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 63 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
# 151 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 59 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 1 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 3 4
typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef union pthread_attr_t pthread_attr_t;




typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 3 4
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};
# 68 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 88 "/usr/include/signal.h" 3 4
extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 112 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 170 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 190 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 227 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));







extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 286 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[(64 + 1)];
extern const char *const sys_siglist[(64 + 1)];



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 123 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 292 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 302 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 2 3 4


typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 304 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;
# 46 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
typedef greg_t gregset_t[23];
# 101 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 307 "/usr/include/signal.h" 2 3 4







extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 3 4
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 318 "/usr/include/signal.h" 2 3 4



extern int sigaltstack (const stack_t *__restrict __ss,
   stack_t *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));




# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
# 328 "/usr/include/signal.h" 2 3 4







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 358 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
# 145 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};






typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 359 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 360 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));





# 9 "pan.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 128 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 157 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 178 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4





typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 198 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 1 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 2 3 4
# 71 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


extern unsigned int gnu_dev_major (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern unsigned int gnu_dev_minor (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __dev_t gnu_dev_makedev (unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 85 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 206 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 257 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 563 "/usr/include/stdlib.h" 3 4
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 567 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 644 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 817 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 837 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 869 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1006 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1016 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1017 "/usr/include/stdlib.h" 2 3 4
# 1026 "/usr/include/stdlib.h" 3 4

# 10 "pan.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 11 "pan.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 153 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 272 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 384 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 409 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 427 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 432 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 498 "/usr/include/string.h" 3 4

# 12 "pan.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));




extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));
# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 327 "/usr/include/ctype.h" 3 4

# 13 "pan.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 57 "/usr/include/errno.h" 3 4

# 14 "pan.c" 2



# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 229 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4
# 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 270 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 420 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 528 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 546 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 601 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 703 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 759 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 873 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 970 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 994 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1017 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1038 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1059 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1082 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1118 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1167 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) ;








# 18 "pan.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/times.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/times.h" 3 4



struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;

    clock_t tms_cutime;
    clock_t tms_cstime;
  };






extern clock_t times (struct tms *__buffer) __attribute__ ((__nothrow__ , __leaf__));


# 19 "pan.c" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 205 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 234 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 259 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 280 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 317 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 438 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 530 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 22 "pan.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 2 3 4
# 23 "pan.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 380 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 454 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 78 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 79 "/usr/include/fcntl.h" 2 3 4
# 147 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 157 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 181 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 203 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 249 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 293 "/usr/include/fcntl.h" 3 4

# 24 "pan.c" 2






# 29 "pan.c"
int Printf(const char *fmt, ...);

# 1 "pan.h" 1
# 135 "pan.h"
typedef struct S_F_MAP {
 char *fnm;
 int from;
 int upto;
} S_F_MAP;
# 156 "pan.h"
extern short src_ln2[];
extern short src_ln1[];
extern short src_ln0[];
extern S_F_MAP src_file2[];
extern S_F_MAP src_file1[];
extern S_F_MAP src_file0[];
# 180 "pan.h"
typedef struct P2 {
 unsigned _pid : 8;
 unsigned _t : 3;
 unsigned _p : 5;



} P2;



typedef struct P1 {
 unsigned _pid : 8;
 unsigned _t : 3;
 unsigned _p : 5;



} P1;



typedef struct P0 {
 unsigned _pid : 8;
 unsigned _t : 3;
 unsigned _p : 5;



} P0;


typedef struct P3 {
 unsigned _pid : 8;
 unsigned _t : 3;
 unsigned _p : 5;



} P3;
# 234 "pan.h"
typedef struct Trans {
 short atom;




 short tpe[2];
 short qu[6];
 unsigned char ty[6];



 char *tp;
 int st;
 int t_id;
 int forw;
 int back;
 struct Trans *nxt;
} Trans;
# 261 "pan.h"
extern unsigned char *Pptr(int);
extern unsigned char *Qptr(int);
# 334 "pan.h"
typedef struct _Stack {
# 343 "pan.h"
 short o_delta;

  short o_offset;
  short o_skip;

 short o_delqs;

 short o_boq;




 char *body;




 struct _Stack *nxt;
 struct _Stack *lst;
} _Stack;

typedef struct Svtack {




 short o_delta;
 short m_delta;





 char *body;
 struct Svtack *nxt;
 struct Svtack *lst;
} Svtack;

typedef struct State {
 unsigned char _nr_pr;
 unsigned char _nr_qs;
 unsigned char _a_t;

 unsigned char _cnt[2];



 unsigned short _vsz;
# 412 "pan.h"
 int x;




 unsigned char sv[1024];

} State;
# 478 "pan.h"
typedef struct Q0 {
 unsigned char Qlen;
 unsigned char _t;
} Q0;


char *emalloc(unsigned long);
char *Malloc(unsigned long);
int Boundcheck(int, int, int, int, Trans *);
int addqueue(int, int, int);


int close(int);
int delproc(int, int);
int endstate(void);
int find_claim(char *);
int h_store(char *, int);
int pan_rand(void);
int q_cond(short, Trans *);
int q_full(int);
int q_len(int);
int q_zero(int);
int qrecv(int, int, int, int);
int unsend(int);

void spin_assert(int, char *, int, int, Trans *);




void c_chandump(int);
void c_globals(void);
void c_locals(int, int);
void checkcycles(void);
void crack(int, int, Trans *, short *);
void d_sfh(unsigned char *, int);
void d_hash(unsigned char *, int);
void m_hash(unsigned char *, int);
void s_hash(unsigned char *, int);
void delq(int);
void dot_crack(int, int, Trans *);
void do_reach(void);
void pan_exit(int);
void exit(int);




 void sinit(void);



void imed(Trans *, int, int, int);
void new_state(void);
void p_restor(int);
void putpeg(int, int);
void putrail(void);
void q_restor(void);
void retrans(int, int, int, short *, unsigned char *, unsigned char *);
void select_claim(int);
void settable(void);
void setq_claim(int, int, char *, int, char *);
void sv_restor(void);
void sv_save(void);
void tagtable(int, int, int, short *, unsigned char *);
void do_dfs(int, int, int, short *, unsigned char *, unsigned char *);
void unrecv(int, int, int, int, int);
void usage(FILE *);
void wrap_stats(void);





 int onstack_now(void);
 void onstack_init(void);
 void onstack_put(void);
 void onstack_zap(void);
# 572 "pan.h"
typedef struct Trail Trail;
typedef struct H_el H_el;

struct H_el {
 H_el *nxt;

  unsigned int tagged;
# 587 "pan.h"
  unsigned int D;
# 617 "pan.h"
 unsigned long state;
};
# 642 "pan.h"
struct Trail {
 int st;
 int o_tt;




 unsigned char pr;
 unsigned char tau;
 unsigned char o_pm;
# 680 "pan.h"
  unsigned char o_n, o_ot;

 unsigned char o_m;
# 691 "pan.h"
  short o_To;
# 700 "pan.h"
  H_el *ostate;




 Trans *o_t;

  char *p_bup;
  char *q_bup;
# 725 "pan.h"
 union {
  int oval;
  int *ovals;
 } bup;
};
# 792 "pan.h"
void qsend(int, int, int);
# 32 "pan.c" 2
char *TrailFile = "example.pml";
char *trailfilename;



State A_Root;
State now;
# 65 "pan.c"
void
globinit(void)
{
}



 extern short

 *proc_offset, *q_offset;
void
locinit2(int h)
{
}
void
locinit1(int h)
{
}
void
locinit0(int h)
{
}
# 120 "pan.c"
H_el **H_tab, **S_Tab;

 H_el *Lstate;

Trail *trail, *trpt;
FILE *efd;
unsigned char *_this;
long maxdepth=10000;
long omaxdepth=10000;
# 137 "pan.c"
double quota;






unsigned char *SS, *LL;

unsigned char reversing = 0;
unsigned char HASH_NR = 0;

double memcnt = (double) 0;
double memlim = (double) (1<<30);





static char *have;
static long left = 0L;
static double fragment = (double) 0;
static unsigned long grow;

unsigned int HASH_CONST[] = {

 0x100d4e63, 0x0fc22f87, 0xa7155c77, 0x78f2c3b9,
 0xde32d207, 0xc27d305b, 0x1bb3fb2b, 0x2798c7a5,
 0x9c675ffd, 0x777d9081, 0x07aef2f1, 0xae08922f,
 0x5bd365b7, 0xed51c47b, 0x9b5aeea1, 0xbcc9d431,
 0x396d8fff, 0xa2fd1367, 0x08616521, 0x5e84991f,
 0x87495bc5, 0x2930039b, 0xceb6a593, 0xfe522d63,
 0x7ff60baf, 0xf89b1fbf, 0x74c01755, 0xe0c559bf,
 0x3669fc47, 0x8756d3bf, 0x14f78445, 0x24c41779,
 0x0af7b129, 0xde22368d, 0x3e1c01e3, 0xaf773e49,
 0x5b762459, 0x86d12911, 0x0953a3af, 0xb66dc23d,
 0x96b3bd4f, 0x19b1dd51, 0xd886fbc3, 0xa7f3a025,
 0xccb48e63, 0x87d8f027, 0x2bea270d, 0xdb0e9379,
 0x78c09f21, 0x0cbbfe07, 0xea4bc7c3, 0x5bfbc3c9,
 0x3c6e53fd, 0xab320cdd, 0x31041409, 0x416e7485,
 0xe41d75fd, 0xc3c5060f, 0x201a9dc1, 0x93dee72b,
 0x6461305f, 0xc571dec5, 0xa1fd21c5, 0xfb421ce1,
 0x7f024b05, 0xfa518819, 0x6c9777fb, 0x0d4d9351,
 0x08b33861, 0xccb9d0f3, 0x34112791, 0xe962d7c9,
 0x8d742211, 0xcd9c47a1, 0x64437b69, 0x5fe40feb,
 0x806113cb, 0x10e1d593, 0x821851b3, 0x057a1ff3,
 0x8ededc0b, 0x90dd5b31, 0x635ff359, 0x68dbcd35,
 0x1050ff4f, 0xdbb07257, 0x486336db, 0x83af1e75,
 0x432f1799, 0xc1d0e7e7, 0x21f4eb5b, 0x881ec2c1,
 0x23f3b539, 0x6cdfb80d, 0x71d474cf, 0x97d5d4a9,
 0xf721d2e5, 0xb5ff3711, 0x3f2e58cd, 0x4e06e3d9,
 0x7d711739, 0x927887df, 0x7d57ad71, 0x232eb767,
 0xe3f5cc51, 0x6576b443, 0xed17bf1f, 0x8828b637,
 0xc940f6ab, 0xc7b830ef, 0x11ed8a13, 0xaff20949,
 0xf28a8465, 0x0da10cf9, 0xb512497d, 0x44accae1,
 0x95e0929f, 0xe08c8901, 0xfd22d6c9, 0xb6a5c029,
 0xaadb428d, 0x6e8a453d, 0x3d5c0195, 0x8bf4ae39,
 0xbf83ab19, 0x3e9dac33, 0xc4df075d, 0x39472d71,
 0xb8647725, 0x1a6d4887, 0x78a03577, 0xafd76ef7,
 0xc1a1d6b3, 0x1afb33c5, 0x87896299, 0x5cc992ef,
 0x7f805d0d, 0x089a039b, 0xa353cc27, 0x57b296b3,
 0x52badec9, 0xc916e431, 0x09171957, 0x14996d51,
 0xe87e32c7, 0xb4fdbb5d, 0xdd216a03, 0x4ddd3fff,
 0x767d5c57, 0x79c97509, 0xab70543b, 0xc5feca4f,
 0x8eb37b89, 0x20a2cefd, 0xf4b00b91, 0xf166593d,
 0x7bf50f65, 0x753e6c8b, 0xfb5b81dd, 0xf2d45ef5,
 0x9741c04f, 0x300da48d, 0x01dc4121, 0xa112cd47,
 0x0223b24b, 0xa89fbce7, 0x681e1f7b, 0xe7c6aedf,
 0x1fd3d523, 0x561ba723, 0xf54042fb, 0x1a516751,
 0xcd085bd5, 0xe74246d5, 0x8b170b5d, 0x249985e9,
 0x5b4d9cf7, 0xe9912323, 0x5fc0f339, 0x41f8f051,
 0x8a296fb1, 0x62909f51, 0x2c05d695, 0x095efccb,
 0xa91574f1, 0x0f5cc6c3, 0x23a2ca2b, 0xc6053ec1,
 0xeb19e081, 0x3d1b3997, 0xb0c5f3cd, 0xe5d85b35,
 0x1cb1bdf1, 0x0c8f278f, 0x518249c3, 0x9f61b68d,
 0xade0919d, 0x779e29c3, 0xdbac9485, 0x2ce149a9,
 0x254c2409, 0x205b34fb, 0xc8ab1a89, 0x6b4a2585,
 0x2303d94b, 0x8fa186b9, 0x49826da5, 0xd23a37ad,
 0x680b18c9, 0xa46fbd7f, 0xe42c2cf9, 0xf7cfcb5f,
 0xb4842b8b, 0xe483780d, 0x66cf756b, 0x3eb73781,
 0x41ca17a5, 0x59f91b0f, 0x92fb67d9, 0x0a5c330f,
 0x46013fdb, 0x3b0634af, 0x9024f533, 0x96a001a7,
 0x15bcd793, 0x3a311fb1, 0x78913b8b, 0x9d4a5ddf,
 0x33189b31, 0xa99e8283, 0xf7cb29e9, 0x12d64a27,
 0xeda770ff, 0xa7320297, 0xbd3c14a5, 0x96d0156f,
 0x0115db95, 0x7f79f52b, 0xa6d52521, 0xa063d4bd,
 0x9cb5e039, 0x42cf8195, 0xcb716835, 0x1bc21273,
 0x5a67ad27, 0x4b3b0545, 0x162cda67, 0x0489166b,
 0x85fd06a9, 0x562b037d, 0x995bc1f3, 0xe144e78b,
 0x1e749f69, 0xa36df057, 0xcfee1667, 0x8c4116b7,
 0x94647fe3, 0xe6899df7, 0x6d218981, 0xf1069079,
 0xd1851a33, 0xf424fc83, 0x24467005, 0xad8caf59,
 0x1ae5da13, 0x497612f9, 0x10f6d1ef, 0xeaf4ff05,
 0x405f030b, 0x693b041d, 0x2065a645, 0x9fec71b3,
 0xc3bd1b0f, 0xf29217a3, 0x0f25e15d, 0xd48c2b97,
 0xce8acf2d, 0x0629489b, 0x1a5b0e01, 0x32d0c059,
 0x2d3664bf, 0xc45f3833, 0xd57f551b, 0xbdd991c5,
 0x9f97da9f, 0xa029c2a9, 0x5dd0cbdf, 0xe237ba41,
 0x62bb0b59, 0x93e7d037, 0x7e495619, 0x51b8282f,
 0x853e8ef3, 0x9b8abbeb, 0x055f66f9, 0x2736f7e5,
 0x8d7e6353, 0x143abb65, 0x4e2bb5b3, 0x872e1adf,
 0x8fcac853, 0xb7cf6e57, 0x12177f3d, 0x1d2da641,
 0x07856425, 0xc0ed53dd, 0x252271d9, 0x79874843,
 0x0aa8c9b5, 0x7e804f93, 0x2d080e09, 0x3929ddfd,
 0x36433dbd, 0xd6568c17, 0xe624e939, 0xb33189ef,
 0x29e68bff, 0x8aae2433, 0xe6335499, 0xc5facd9d,
 0xbd5afc65, 0x7a584fa7, 0xab191435, 0x64bbdeef,
 0x9f5cd8e1, 0xb3a1be05, 0xbd0c1753, 0xb00e2c7f,
 0x6a96e315, 0x96a31589, 0x660af5af, 0xc0438d43,
 0x17637373, 0x6460e8df, 0x7d458de9, 0xd76b923f,
 0x316f045f, 0x3ccbd035, 0x63f64d81, 0xd990d969,
 0x7c860a93, 0x99269ff7, 0x6fbcac8f, 0xd8cc562b,
 0x67141071, 0x09f85ea3, 0x1298f2dd, 0x41fa86e5,
 0xce1d7cf5, 0x6b232c9d, 0x8f093d4b, 0x3203ad4b,
 0x07d70d5f, 0x38c44c75, 0x0887c9ef, 0x1833acf5,
 0xa3607f85, 0x7d367573, 0x0ea4ffc3, 0xad2d09c1,
 0x7a1e664f, 0xef41dff5, 0x03563491, 0x67f30a1f,
 0x5ce5f9ef, 0xa2487a27, 0xe5077957, 0x9beb36fd,
 0x16e41251, 0x216799ef, 0x07181f8d, 0xc191c3cf,
 0xba21cab5, 0x73944eb7, 0xdf9eb69d, 0x5fef6cfd,
 0xd750a6f5, 0x04f3fa43, 0x7cb2d063, 0xd3bdb369,
 0x35f35981, 0x9f294633, 0x5e293517, 0x70e51d05,
 0xf8db618d, 0x66ee05db, 0x835eaa77, 0x166a02c3,
 0xb516f283, 0x94102293, 0x1ace50a5, 0x64072651,
 0x66df7b75, 0x02e1b261, 0x8e6a73b9, 0x19dddfe7,
 0xd551cf39, 0x391c17cb, 0xf4304de5, 0xcd67b8d1,
 0x25873e8d, 0x115b4c71, 0x36e062f3, 0xaec0c7c9,
 0xd929f79d, 0x935a661b, 0xda762b47, 0x170bd76b,
 0x1a955cb5, 0x341fb0ef, 0x7f366cef, 0xc98f60c7,
 0xa4181af3, 0xa94a8837, 0x5fa3bc43, 0x11c638c1,
 0x4e66fabb, 0x30ab85cf, 0x250704ef, 0x8bf3bc07,
 0x6d2cd5ab, 0x613ef9c3, 0xb8e62149, 0x0404fd91,
 0xa04fd9b1, 0xa5e389eb, 0x9543bd23, 0xad6ca1f9,
 0x210c49ab, 0xf8e9532b, 0x854fba89, 0xdc7fc6bb,
 0x48a051a7, 0x6b2f383b, 0x61a4b433, 0xd3af231b,
 0xc5023fc7, 0xa5aa85df, 0xa0cd1157, 0x4206f64d,
 0x3fea31c3, 0x62d510a1, 0x13988957, 0x6a11a033,
 0x46f2a3b7, 0x2784ef85, 0x229eb9eb, 0x9c0c3053,
 0x5b7ead39, 0x82ae9afb, 0xf99e9fb3, 0x914b6459,
 0xaf05edd7, 0xc82710dd, 0x8fc1ea1f, 0x7e0d7a8d,
 0x7c7592e9, 0x65321017, 0xea57553f, 0x4aeb49ff,
 0x5239ae4d, 0x4b4b4585, 0x94091c21, 0x7eaaf4cb,
 0x6b489d6f, 0xecb9c0c3, 0x29a7af63, 0xaf117a0d,
 0x969ea6cd, 0x7658a34d, 0x5fc0bba9, 0x26e99b7f,
 0x7a6f260f, 0xe37c34f1, 0x1a1569bb, 0xc3bc7371,
 0x8567543d, 0xad0c46a9, 0xa1264fd9, 0x16f10b29,
 0x5e00dd3b, 0xf85b6bcd, 0xa2d32d8b, 0x4a3c8d43,
 0x6b33b959, 0x4fd1e6c9, 0x7938b8a9, 0x1ec795c7,
 0xe2ef3409, 0x83c16b9d, 0x0d3fd9eb, 0xeb461ad7,
 0xb09c831d, 0xaf052001, 0x7911164d, 0x1a9dc191,
 0xb52a0815, 0x0f732157, 0xc68c4831, 0x12cf3cbb };




long mreached=0;
unsigned long errors=0;
int done=0, Nrun=1;
int c_init_done=0;
char *c_stack_start = (char *) 0;
double nstates=0, nlinks=0, truncs=0, truncs2=0;
double nlost=0, nShadow=0, hcmp=0, ngrabs=0;
# 315 "pan.c"
 int t_reverse = 0;




unsigned long nr_states=0;
long Fa=0, Fh=0, Zh=0, Zn=0;
long PUT=0, PROBE=0, ZAPS=0;
long Ccheck=0, Cholds=0;
int a_cycles=0, upto=1, strict=0, verbose = 0, signoff = 0;

int gui = 0, coltrace = 0, readtrail = 0;
int whichtrail = 0, whichclaim = -1, onlyproc = -1, silent = 0;
char *claimname;

int DFSdetail = 0;
int state_tables=0, fairness=0, no_rck=0, Nr_Trails=0, dodot=0;
char simvals[256];

int TstOnly=0;

unsigned long mask, nmask;

int ssize=27;



int hmax=0, svmax=0, smax=0;
int Maxbody=0, XX;
unsigned char *noptr, *noqptr;
# 361 "pan.c"
 State comp_now;






 State comp_msk;
 unsigned char *Mask = (unsigned char *) &comp_msk;






_Stack *stack;
Svtack *svtack;

static unsigned int hfns = 3;

static unsigned long j1_spin, j2_spin;
static unsigned long j3_spin, j4_spin;
unsigned long K1, K2;

long udmem;


static long A_depth = 0;

long depth = 0;
long depthfound = -1;



unsigned char warned = 0, iterative = 0, exclusive = 0, like_java = 0, every_error = 0;
unsigned char noasserts = 0, noends = 0, bounded = 0;
unsigned int s_rand = 12345;
# 411 "pan.c"
int (*b_store)(char *, int);
int bstore_reg(char *, int);
int bstore_mod(char *, int);


void dfs_uerror(char *);
void dfs_Uerror(char *);




void (*uerror)(char *);
void (*Uerror)(char *);
void (*hasher)(unsigned char *, int);
void (*o_hash)(unsigned char *, int, int);
void d_hash(unsigned char *, int);
void m_hash(unsigned char *, int);
void d_sfh(unsigned char *, int);
void o_hash32(unsigned char *, int, int);
void o_hash64(unsigned char *, int, int);

void active_procs(void);
void cleanup(void);
void do_the_search(void);
void find_shorter(int);
void iniglobals(int);
void stopped(int);
void wrapup(void);
int *grab_ints(int);
void ungrab_ints(int *, int);







Trans ***trans;
# 458 "pan.c"
 short P_o[255], P_o_tmp[255 +1];
 short Q_o[255], Q_o_tmp[255 +1];

 short *proc_offset = (short *) P_o;
 short *q_offset = (short *) Q_o;

unsigned char P_s[255 +1], P_s_tmp[255 +1];
unsigned char Q_s[255 +1], Q_s_tmp[255 +1];
unsigned char *proc_skip = (unsigned char *) P_s;
unsigned char *q_skip = (unsigned char *) Q_s;
# 477 "pan.c"
unsigned long vsize;



char *tprefix = "trail";
short boq = -1;
int _;
# 493 "pan.c"
short src_ln2 [] = {
   0, 23, 23, 24, 24, 22, 26, 28,
  28, 27, 30, 30, 0, };
S_F_MAP src_file2 [] = {
 { "-", 0, 0 },
 { "example.pml", 1, 11 },
 { "-", 12, 13 }
};
short *src_claim;
unsigned char reached2 [] = {
   0, 1, 1, 1, 1, 0, 1, 1,
   1, 0, 1, 0, 0, };
unsigned char *loopstate2;

short src_ln1 [] = {
   0, 16, 16, 15, 18, 15, 18, 0, };
S_F_MAP src_file1 [] = {
 { "-", 0, 0 },
 { "example.pml", 1, 6 },
 { "-", 7, 8 }
};
unsigned char reached1 [] = {
   0, 1, 0, 0, 1, 1, 0, 0, };
unsigned char *loopstate1;

short src_ln0 [] = {
   0, 9, 9, 8, 11, 8, 11, 0, };
S_F_MAP src_file0 [] = {
 { "-", 0, 0 },
 { "example.pml", 1, 6 },
 { "-", 7, 8 }
};
unsigned char reached0 [] = {
   0, 1, 0, 0, 1, 1, 0, 0, };
unsigned char *loopstate0;
unsigned char reached3[3];
unsigned char *loopstate3;
struct {
 int tp; short *src;
} src_all[] = {
 { 2, &src_ln2[0] },
 { 1, &src_ln1[0] },
 { 0, &src_ln0[0] },
 { 0, (short *) 0 }
};
S_F_MAP *flref[] = {
 src_file2,
 src_file1,
 src_file0
};

struct {
 char *c; char *t;
} code_lookup[] = {
 { (char *) 0, "" }
};

short Air[] = { (short) (sizeof(P0) - 2), (short) (sizeof(P1) - 2), (short) (sizeof(P2) - 2), (short) (sizeof(P3) - 2) };
char *procname[] = {
   "A",
   "B",
   "never_0",
   ":np_:",
 0
};

enum btypes { NONE=0, N_CLAIM=1, I_PROC=2, A_PROC=3, P_PROC=4, E_TRACE=5, N_TRACE=6 };

int Btypes[] = {
   3,
   3,
   1,
   0
};

unsigned char spin_c_typ[1];
unsigned char *accpstate[4];
unsigned char *progstate[4];
unsigned char *loopstate[4];
unsigned char *reached[4];
unsigned char *stopstate[4];
unsigned char *visstate[4];
short *mapstate[4];

 int NrStates[4];
# 710 "pan.c"
int
addproc(int calling_pid, int priority, int n)
{ int j = 0, h = now._nr_pr;



 unsigned char *o_this = _this;


 if (TstOnly) return (h < 255);






 if (h >= 255)
  Uerror("too many processes");



 switch (n) {
 case 0: j = sizeof(P0); break;
 case 1: j = sizeof(P1); break;
 case 2: j = sizeof(P2); break;
 case 3: j = sizeof(P3); break;
 default: Uerror("bad proc - addproc");
 }






 if (vsize%8)
  proc_skip[h] = 8 -(vsize%8);
 else
  proc_skip[h] = 0;




 vsize += (int) proc_skip[h];
 proc_offset[h] = vsize;
 vsize += j;
# 771 "pan.c"
 now._nr_pr += 1;







 if (fairness && ((int) now._nr_pr + 1 >= (8*2)/2))
 { printf("pan: error: too many processes -- current");
  printf(" max is %d procs (-DNFAIR=%d)\n",
   (8*2)/2 - 2, 2);
  printf("\trecompile with -DNFAIR=%d\n",
   2 +1);
  pan_exit(1);
 }

 now._vsz = vsize;

 hmax = (((hmax)<(vsize)) ? (vsize) : (hmax));
# 814 "pan.c"
 if (vsize >= 1024)
 { printf("pan: error, VECTORSZ too small, recompile pan.c");
  printf(" with -DVECTORSZ=N with N>%d\n", (int) vsize);
  Uerror("aborting");
 }

 memset((char *)(((unsigned char *)&now)+(int)proc_offset[h]), 0, j);
 _this = (((unsigned char *)&now)+(int)proc_offset[h]);
 if (1 > 0 && h > 0)
 { ((P0 *)_this)->_pid = h-1;
 } else
 { ((P0 *)_this)->_pid = h;
 }
 switch (n) {
 case 3:
  ((P3 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 3;
  ((P3 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 0;



  reached3[0] = 1;
  accpstate[3][1] = 1;
  break;
 case 2:
  ((P2 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 2;
  ((P2 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 5;



  reached2[5]=1;
  src_claim = src_ln2;





  locinit2(h);

  break;
 case 1:
  ((P1 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 1;
  ((P1 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 3;



  reached1[3]=1;





  locinit1(h);

  break;
 case 0:
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 0;
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 3;



  reached0[3]=1;





  locinit0(h);

  break;
 }
 _this = o_this;



 return h-1;




}
# 964 "pan.c"
void
run(void)
{



 memset((char *)&now, 0, sizeof(State));

 vsize = (unsigned long) (sizeof(State) - 1024);

 now._vsz = vsize;
# 988 "pan.c"
 settable();
 Maxbody = (((Maxbody)<(((int) sizeof(P0)))) ? (((int) sizeof(P0))) : (Maxbody));
 Maxbody = (((Maxbody)<(((int) sizeof(P1)))) ? (((int) sizeof(P1))) : (Maxbody));
 Maxbody = (((Maxbody)<(((int) sizeof(P2)))) ? (((int) sizeof(P2))) : (Maxbody));
 Maxbody = (((Maxbody)<(((int) sizeof(P3)))) ? (((int) sizeof(P3))) : (Maxbody));
 reached[0] = reached0;
 reached[1] = reached1;
 reached[2] = reached2;
 reached[3] = reached3;
 accpstate[0] = (unsigned char *) emalloc(7);
 accpstate[1] = (unsigned char *) emalloc(7);
 accpstate[2] = (unsigned char *) emalloc(12);
 accpstate[3] = (unsigned char *) emalloc(3);
 progstate[0] = (unsigned char *) emalloc(7);
 progstate[1] = (unsigned char *) emalloc(7);
 progstate[2] = (unsigned char *) emalloc(12);
 progstate[3] = (unsigned char *) emalloc(3);
 loopstate0 = loopstate[0] = (unsigned char *) emalloc(7);
 loopstate1 = loopstate[1] = (unsigned char *) emalloc(7);
 loopstate2 = loopstate[2] = (unsigned char *) emalloc(12);
 loopstate3 = loopstate[3] = (unsigned char *) emalloc(3);
 stopstate[0] = (unsigned char *) emalloc(7);
 stopstate[1] = (unsigned char *) emalloc(7);
 stopstate[2] = (unsigned char *) emalloc(12);
 stopstate[3] = (unsigned char *) emalloc(3);
 visstate[0] = (unsigned char *) emalloc(7);
 visstate[1] = (unsigned char *) emalloc(7);
 visstate[2] = (unsigned char *) emalloc(12);
 visstate[3] = (unsigned char *) emalloc(3);
 mapstate[0] = (short *) emalloc(7 * sizeof(short));
 mapstate[1] = (short *) emalloc(7 * sizeof(short));
 mapstate[2] = (short *) emalloc(12 * sizeof(short));
 mapstate[3] = (short *) emalloc(3 * sizeof(short));
 stopstate[0][6] = 1;
 stopstate[1][6] = 1;
 stopstate[2][11] = 1;
 stopstate[3][2] = 1;

 NrStates[0] = 7;
 NrStates[1] = 7;
 NrStates[2] = 12;
 NrStates[3] = 3;


 Maxbody = (((Maxbody)<(sizeof(State)-1024)) ? (sizeof(State)-1024) : (Maxbody));
 if ((Maxbody % 8) != 0)
  Maxbody += 8 - (Maxbody % 8);

 accpstate[2][9] = 1;
 retrans(0, 7, 3, src_ln0, reached0, loopstate0);
 retrans(1, 7, 3, src_ln1, reached1, loopstate1);
 retrans(2, 12, 5, src_ln2, reached2, loopstate2);
 if (state_tables)
 { if (dodot) exit(0);
   printf("\nTransition Type: ");
   printf("A=atomic; D=d_step; L=local; G=global\n");
   printf("Source-State Labels: ");
   printf("p=progress; e=end; a=accept;\n");

   printf("Note: statement merging was used. Only the first\n");
   printf("      stmnt executed in each merge sequence is shown\n");
   printf("      (use spin -a -o3 to disable statement merging)\n");

   pan_exit(0);
 }
# 1075 "pan.c"
 iniglobals(258);
# 1091 "pan.c"
 ;

 sinit();




 onstack_init();




 stack = (_Stack *) emalloc(sizeof(_Stack));
 svtack = (Svtack *) emalloc(sizeof(Svtack));

 noqptr = noptr = (unsigned char *) emalloc(Maxbody * sizeof(char));





 addproc(256, 1, 2);







 active_procs();





 globinit();


go_again:

 do_the_search();

 if (--Nrun > 0 && HASH_CONST[++HASH_NR])
 { printf("Run %d:\n", HASH_NR);
  wrap_stats();
  printf("\n");
  if (udmem)
  { memset(SS, 0, udmem);
  } else
  { memset(SS, 0, (1L)<<(ssize-3));
  }




  memset((unsigned char *) S_Tab, 0,
  maxdepth*sizeof(H_el *));

  nstates=nlinks=truncs=truncs2=ngrabs = 0;
  nlost=nShadow=hcmp = 0;
  Fa=Fh=Zh=Zn = 0;
  PUT=PROBE=ZAPS=Ccheck=Cholds = 0;
  goto go_again;
 }

}
# 1177 "pan.c"
int
spin_join(int p, void **unused)
{
 return (now._nr_pr <= p);
}

int
spin_mutex_free(int *m)
{ return (*m == 0);
}

int
spin_mutex_lock(int *m)
{ *m = 1;
 return 1;
}
void
spin_mutex_destroy(int *m)
{ *m = 0;
}
void
spin_mutex_unlock(int *m)
{ *m = 0;
}
void
spin_mutex_init(int *m, void *val)
{
 if (!val)
 { *m = 0;
 } else
 { Uerror("pthread_mutex_init: unsupported non-default init");
 }
}

int
spin_cond_wait(int *cond, int *lck)
{
 if (((P0 *)_this)->_pid + 1 >= 8*8)
 { Uerror("pid exceeds range supported by pthread_cond_wait");
 }
 if (((*cond)&1) == 0)
 { spin_mutex_unlock(lck);
  *cond |= (1<<(((P0 *)_this)->_pid + 1));
  return 0;
 } else
 {

  if (((*cond)&(~(1 | (1<<(((P0 *)_this)->_pid + 1))))) != 0)
  { spin_mutex_unlock(lck);
   return 0;
  }
  *cond &= ~1;
  *cond &= ~(1<<(((P0 *)_this)->_pid + 1));
  return 1;
 }
}
void
spin_cond_signal(int *cond)
{
 if ( ((*cond)&(~1)) != 0 )
 { *cond |= 1;
 }
}
# 1299 "pan.c"
 int
 cpu_printf(const char *fmt, ...)
 { va_list args;
  
# 1302 "pan.c" 3 4
 __builtin_va_start(
# 1302 "pan.c"
 args
# 1302 "pan.c" 3 4
 ,
# 1302 "pan.c"
 fmt
# 1302 "pan.c" 3 4
 )
# 1302 "pan.c"
                    ;
  vprintf(fmt, args);
  
# 1304 "pan.c" 3 4
 __builtin_va_end(
# 1304 "pan.c"
 args
# 1304 "pan.c" 3 4
 )
# 1304 "pan.c"
             ;
  return 1;
 }

int
Printf(const char *fmt, ...)
{
# 1321 "pan.c"
 if (readtrail)
 { va_list args;
  
# 1323 "pan.c" 3 4
 __builtin_va_start(
# 1323 "pan.c"
 args
# 1323 "pan.c" 3 4
 ,
# 1323 "pan.c"
 fmt
# 1323 "pan.c" 3 4
 )
# 1323 "pan.c"
                    ;
  vprintf(fmt, args);
  
# 1325 "pan.c" 3 4
 __builtin_va_end(
# 1325 "pan.c"
 args
# 1325 "pan.c" 3 4
 )
# 1325 "pan.c"
             ;
  return 1;
 }







 return 1;
}
extern void printm(int, char *);
# 1372 "pan.c"
void
pan_exit(int val)
{ void stop_timer(int);




 if (signoff)
 { printf("--end of output--\n");
 }
# 1401 "pan.c"
 if (val == 2)
 { val = 0;
 }



 stop_timer(1);




 exit(val);
}

static char tbuf[2][2048];

char *
transmognify(char *s)
{ char *v, *w;
 int i, toggle = 0;
 if (!s || strlen(s) > 2047) return s;
 memset(tbuf[0], 0, 2048);
 memset(tbuf[1], 0, 2048);
 strcpy(tbuf[toggle], s);
 while ((v = strstr(tbuf[toggle], "{c_code")))
 { *v = '\0'; v++;
  strcpy(tbuf[1-toggle], tbuf[toggle]);
  for (w = v; *w != '}' && *w != '\0'; w++) ;
  if (*w != '}') return s;
  *w = '\0'; w++;
  for (i = 0; code_lookup[i].c; i++)
   if (strcmp(v, code_lookup[i].c) == 0
   && strlen(v) == strlen(code_lookup[i].c))
   { if (strlen(tbuf[1-toggle])
     + strlen(code_lookup[i].t)
     + strlen(w) > 2047)
     return s;
    strcat(tbuf[1-toggle], code_lookup[i].t);
    break;
   }
  strcat(tbuf[1-toggle], w);
  toggle = 1 - toggle;
 }
 tbuf[toggle][2047] = '\0';
 return tbuf[toggle];
}



char o_cmdline[512];
char o_cmdname[128];

void
add_src_txt(int ot, int tt)
{ Trans *t;
 char *q;

 for (t = trans[ot][tt]; t; t = t->nxt)
 { printf("\t\t");
  q = transmognify(t->tp);
  for ( ; q && *q; q++)
   if (*q == '\n')
    printf("\\n");
   else
    putchar(*q);
  printf("\n");
 }
}

char *
find_source(int tp, int s)
{
 if (s >= flref[tp]->from
 && s <= flref[tp]->upto)
 { return flref[tp]->fnm;
 }
 return "example.pml";
}

void
wrap_trail(void)
{ static int wrap_in_progress = 0;
 int i; short II;
 P0 *z;

 if (wrap_in_progress++) return;

 printf("spin: trail ends after %ld steps\n", depth);
 if (onlyproc >= 0)
 { if (onlyproc >= now._nr_pr) { pan_exit(0); }
  II = onlyproc;
  z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  printf("%3ld:	proc %d (%s) ",
   depth, II, procname[z->_t]);
  for (i = 0; src_all[i].src; i++)
   if (src_all[i].tp == (int) z->_t)
   { printf(" %s:%d",
     find_source((int) z->_t, (int) z->_p),
     src_all[i].src[z->_p]);
    break;
   }
  printf(" (state %2d)", z->_p);
  if (!stopstate[z->_t][z->_p])
   printf(" (invalid end state)");
  printf("\n");
  add_src_txt(z->_t, z->_p);
  pan_exit(0);
 }
 printf("#processes %d:\n", now._nr_pr);
 if (depth < 0) depth = 0;
 for (II = 0; II < now._nr_pr; II++)
 { z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  printf("%3ld:	proc %d (%s) ",
   depth, II, procname[z->_t]);
  for (i = 0; src_all[i].src; i++)
   if (src_all[i].tp == (int) z->_t)
   { printf(" %s:%d",
     find_source((int) z->_t, (int) z->_p),
     src_all[i].src[z->_p]);
    break;
   }
  printf(" (state %2d)", z->_p);
  if (!stopstate[z->_t][z->_p])
   printf(" (invalid end state)");
  printf("\n");
  add_src_txt(z->_t, z->_p);
 }
 c_globals();
 for (II = 0; II < now._nr_pr; II++)
 { z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  c_locals(II, z->_t);
 }



 pan_exit(0);
}
FILE *
findtrail(void)
{ FILE *fd;
 char fnm[512], *q;
 char MyFile[512];
 char MySuffix[16];
 int try_core;
 int candidate_files;

 if (trailfilename != 
# 1547 "pan.c" 3 4
                     ((void *)0)
# 1547 "pan.c"
                         )
 { fd = fopen(trailfilename, "r");
  if (fd == 
# 1549 "pan.c" 3 4
           ((void *)0)
# 1549 "pan.c"
               )
  { printf("pan: cannot find %s\n", trailfilename);
   pan_exit(1);
  }
  goto success;
 }
talk:
 try_core = 1;
 candidate_files = 0;
 tprefix = "trail";
 strcpy(MyFile, TrailFile);
 do {
  if (whichtrail)
  { sprintf(fnm, "%s%d.%s",
    MyFile, whichtrail, tprefix);
   fd = fopen(fnm, "r");
   if (fd != 
# 1565 "pan.c" 3 4
            ((void *)0)
# 1565 "pan.c"
                )
   { candidate_files++;
    if (verbose==100)
     printf("trail%d: %s\n",
      candidate_files, fnm);
    fclose(fd);
   }
   if ((q = strchr(MyFile, '.')) != 
# 1572 "pan.c" 3 4
                                   ((void *)0)
# 1572 "pan.c"
                                       )
   { *q = '\0';
    sprintf(fnm, "%s%d.%s",
     MyFile, whichtrail, tprefix);
    *q = '.';
    fd = fopen(fnm, "r");
    if (fd != 
# 1578 "pan.c" 3 4
             ((void *)0)
# 1578 "pan.c"
                 )
    { candidate_files++;
     if (verbose==100)
      printf("trail%d: %s\n",
       candidate_files, fnm);
     fclose(fd);
   } }
  } else
  { sprintf(fnm, "%s.%s", MyFile, tprefix);
   fd = fopen(fnm, "r");
   if (fd != 
# 1588 "pan.c" 3 4
            ((void *)0)
# 1588 "pan.c"
                )
   { candidate_files++;
    if (verbose==100)
     printf("trail%d: %s\n",
      candidate_files, fnm);
    fclose(fd);
   }
   if ((q = strchr(MyFile, '.')) != 
# 1595 "pan.c" 3 4
                                   ((void *)0)
# 1595 "pan.c"
                                       )
   { *q = '\0';
    sprintf(fnm, "%s.%s", MyFile, tprefix);
    *q = '.';
    fd = fopen(fnm, "r");
    if (fd != 
# 1600 "pan.c" 3 4
             ((void *)0)
# 1600 "pan.c"
                 )
    { candidate_files++;
     if (verbose==100)
      printf("trail%d: %s\n",
       candidate_files, fnm);
     fclose(fd);
  } } }
  tprefix = MySuffix;
  sprintf(tprefix, "cpu%d_trail", try_core++);
 } while (try_core <= 1);

 if (candidate_files != 1)
 { if (verbose != 100)
  { printf("error: there are %d trail files:\n",
    candidate_files);
   verbose = 100;
   goto talk;
  } else
  { printf("pan: rm or mv all except one\n");
   exit(1);
 } }
 try_core = 1;
 strcpy(MyFile, TrailFile);
 tprefix = "trail";
try_again:
 if (whichtrail)
 { sprintf(fnm, "%s%d.%s", MyFile, whichtrail, tprefix);
  fd = fopen(fnm, "r");
  if (fd == 
# 1628 "pan.c" 3 4
           ((void *)0) 
# 1628 "pan.c"
                && (q = strchr(MyFile, '.')))
  { *q = '\0';
   sprintf(fnm, "%s%d.%s",
    MyFile, whichtrail, tprefix);
   *q = '.';
   fd = fopen(fnm, "r");
  }
 } else
 { sprintf(fnm, "%s.%s", MyFile, tprefix);
  fd = fopen(fnm, "r");
  if (fd == 
# 1638 "pan.c" 3 4
           ((void *)0) 
# 1638 "pan.c"
                && (q = strchr(MyFile, '.')))
  { *q = '\0';
   sprintf(fnm, "%s.%s", MyFile, tprefix);
   *q = '.';
   fd = fopen(fnm, "r");
 } }
 if (fd == 
# 1644 "pan.c" 3 4
          ((void *)0)
# 1644 "pan.c"
              )
 { if (try_core < 1)
  { tprefix = MySuffix;
   sprintf(tprefix, "cpu%d_trail", try_core++);
   goto try_again;
  }
  printf("pan: cannot find trailfile %s\n", fnm);
  pan_exit(1);
 }
success:





 return fd;
}

unsigned char do_transit(Trans *, short);
# 1672 "pan.c"
void
getrail(void)
{ FILE *fd;
 char *q, *pnm;
 int i, t_id, lastnever = -1; short II;
 Trans *t;
 P0 *z;




 fd = findtrail();
 while (fscanf(fd, "%ld:%d:%d\n", &depth, &i, &t_id) == 3)
 { if (depth == -1)
  { printf("<<<<<START OF CYCLE>>>>>\n");
  }
# 1727 "pan.c"
  if (depth < 0)
  { continue;
  }
# 1743 "pan.c"
  if (i > now._nr_pr)
  { printf("pan: Error, proc %d invalid pid ", i);
   printf("transition %d\n", t_id);
   break;
  }
  II = i;
  z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  for (t = trans[z->_t][z->_p]; t; t = t->nxt)
   if (t->t_id == (unsigned char) t_id)
    break;
  if (!t)
  { for (i = 0; i < NrStates[z->_t]; i++)
   { t = trans[z->_t][i];
    if (t && t->t_id == (unsigned char) t_id)
    { printf("\tRecovered at state %d\n", i);
     z->_p = i;
     goto recovered;
   } }
   printf("pan: Error, proc %d type %d state %d: ",
    II, z->_t, z->_p);
   printf("transition %d not found\n", t_id);
   printf("pan: list of possible transitions in this process:\n");
   if (z->_t >= 0 && z->_t <= 3)
   for (t = trans[z->_t][z->_p]; t; t = t->nxt)
    printf("	t_id %d -- case %d, [%s]\n",
     t->t_id, t->forw, t->tp);
   break;
  }
recovered:
  q = transmognify(t->tp);
  if (gui) simvals[0] = '\0';
  pnm = procname[z->_t];
  _this = (((unsigned char *)&now)+(int)proc_offset[II]);
  trpt->tau |= 1;
  if (!do_transit(t, II))
  { if (onlyproc >= 0 && II != onlyproc)
    goto moveon;
   if (!verbose) break;
   printf("pan: error, next transition UNEXECUTABLE on replay\n");
   printf("     most likely causes: missing c_track statements\n");
   printf("       or illegal side-effects in c_expr statements\n");
  }
  if (onlyproc >= 0 && II != onlyproc)
   goto moveon;
  if (verbose)
  { printf("%3ld: proc %2d (%s) ", depth, II, pnm);
   for (i = 0; src_all[i].src; i++)
    if (src_all[i].tp == (int) z->_t)
    { printf(" %s:%d ",
      find_source((int) z->_t, (int) z->_p),
      src_all[i].src[z->_p]);
     break;
    }
   printf("(state %d) trans {%d,%d} [%s]\n",
    z->_p, t_id, t->forw, q?q:"");
   c_globals();
   for (i = 0; i < now._nr_pr; i++)
   { c_locals(i, ((P0 *)(((unsigned char *)&now)+(int)proc_offset[i]))->_t);
   }
  } else if (Btypes[z->_t] == N_CLAIM)
  { if (lastnever != (int) z->_p)
   { for (i = 0; src_all[i].src; i++)
     if (src_all[i].tp == (int) z->_t)
     { printf("MSC: ~G %d\n",
       src_all[i].src[z->_p]);
      break;
     }
    if (!src_all[i].src)
     printf("MSC: ~R %d\n", z->_p);
   }
   lastnever = z->_p;
   goto sameas;
  } else if (Btypes[z->_t] != 0)
  {
sameas: if (no_rck) goto moveon;
   if (coltrace)
   { printf("%ld: ", depth);
    for (i = 0; i < II; i++)
     printf("\t\t");
    printf("%s(%d):", pnm, II);
    printf("[%s]\n", q?q:"");
   } else if (!silent)
   {



    if (strlen(simvals) > 0) {
    printf("%3ld:	proc %2d (%s)",
     depth, II, pnm);
    for (i = 0; src_all[i].src; i++)
     if (src_all[i].tp == (int) z->_t)
     { printf(" %s:%d ",
       find_source((int) z->_t, (int) z->_p),
       src_all[i].src[z->_p]);
      break;
     }
    printf("(state %d)	[values: %s]\n", z->_p, simvals);
    }
    printf("%3ld:	proc %2d (%s)",
     depth, II, pnm);
    for (i = 0; src_all[i].src; i++)
     if (src_all[i].tp == (int) z->_t)
     { printf(" %s:%d ",
       find_source((int) z->_t, (int) z->_p),
       src_all[i].src[z->_p]);
      break;
     }
    printf("(state %d)	[%s]\n", z->_p, q?q:"");

  } }
moveon: z->_p = t->st;
 }
 wrap_trail();
}

int
f_pid(int pt)
{ int i;
 P0 *z;
 for (i = 0; i < now._nr_pr; i++)
 { z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[i]);
  if (z->_t == (unsigned) pt)
   return 1 +z->_pid;
 }
 return -1;
}






int
bstore_mod(char *v, int n)
{ unsigned long x, y;
 unsigned int i = 1;



 d_hash((unsigned char *) v, n);

 x = K1; y = j3_spin;
 for (;;)
 { if (!(SS[x%udmem]&(1<<y))) break;
  if (i == hfns) {



   return 1;
  }
  x = (x + K2 + i);
  y = (y + j4_spin) & 7;
  i++;
 }



 for (;;)
 { SS[x%udmem] |= (1<<y);
  if (i == hfns) break;
  x = (x + K2 + i);
  y = (y + j4_spin) & 7;
  i++;
 }



 if (now._a_t&1)
 { nShadow++;
 }
 return 0;
}
int
bstore_reg(char *v, int n)
{ unsigned long x, y;
 unsigned int i = 1;



 d_hash((unsigned char *) v, n);

 x = j2_spin; y = j3_spin;
 for (;;)
 { if (!(SS[x]&(1<<y))) break;
  if (i == hfns) {



   return 1;
  }
  x = (x + j1_spin + i) & nmask;
  y = (y + j4_spin) & 7;
  i++;
 }



 for (;;)
 { SS[x] |= (1<<y);
  if (i == hfns) break;
  x = (x + j1_spin + i) & nmask;
  y = (y + j4_spin) & 7;
  i++;
 }



 if (now._a_t&1)
 { nShadow++;
 }
 return 0;
}

unsigned long TMODE = 0666;

int trcnt=1;
char snap[64], fnm[512];

int
make_trail(void)
{ int fd;
 char *q;
 char MyFile[512];
 int w_flags = 
# 1966 "pan.c" 3 4
              0100
# 1966 "pan.c"
                     |
# 1966 "pan.c" 3 4
                      01
# 1966 "pan.c"
                              |
# 1966 "pan.c" 3 4
                               01000
# 1966 "pan.c"
                                      ;

 if (exclusive == 1 && iterative == 0)
 { w_flags |= 
# 1969 "pan.c" 3 4
             0200
# 1969 "pan.c"
                   ;
 }

 q = strrchr(TrailFile, '/');
 if (q == 
# 1973 "pan.c" 3 4
         ((void *)0)
# 1973 "pan.c"
             ) q = TrailFile; else q++;
 strcpy(MyFile, q);

 if (iterative == 0 && Nr_Trails++ > 0)
 {




  sprintf(fnm, "%s%d.%s",
   MyFile, Nr_Trails-1, tprefix);

 } else
 {



  sprintf(fnm, "%s.%s", MyFile, tprefix);

 }
 if ((fd = open(fnm, w_flags, TMODE)) < 0)
 { if ((q = strchr(MyFile, '.')))
  { *q = '\0';
   if (iterative == 0 && Nr_Trails-1 > 0)
    sprintf(fnm, "%s%d.%s",
     MyFile, Nr_Trails-1, tprefix);
   else
    sprintf(fnm, "%s.%s", MyFile, tprefix);
   *q = '.';
   fd = open(fnm, w_flags, TMODE);
 } }
 if (fd < 0)
 { printf("pan: cannot create %s\n", fnm);
  perror("cause");
 } else
 {




  printf("pan: wrote %s\n", fnm);

 }
 return fd;
}




double freq = (double) (1000000);
# 5704 "pan.c"
clock_t start_time;




struct tms start_tm;







void
start_timer(void)
{



 start_time = times(&start_tm);

}

double delta_time;

void
report_time(void)
{
 printf("\npan: elapsed time %.3g seconds\n", delta_time);
 if (delta_time > 0.01)
 { printf("pan: rate %9.8g states/second\n", nstates/delta_time);
  if (verbose)
  { printf("pan: avg transition delay %.5g usec\n",
    delta_time/(nstates+truncs));
 } }
}

void
stop_timer(int report)
{ clock_t stop_time;

 struct tms stop_tm;
 stop_time = times(&stop_tm);
 delta_time = ((double) (stop_time - start_time)) / ((double) sysconf(
# 5747 "pan.c" 3 4
                                                                     _SC_CLK_TCK
# 5747 "pan.c"
                                                                                ));




 if (readtrail || delta_time < 0.00) return;
# 5764 "pan.c"
 if (report)
 { report_time();
 }

}
# 5837 "pan.c"
void
do_the_search(void)
{ int i;
 depth = mreached = 0;
 trpt = &trail[0];

 trpt->tau |= 4;

 for (i = 0; i < (int) now._nr_pr; i++)
 { P0 *ptr = (P0 *) (((unsigned char *)&now)+(int)proc_offset[i]);

  if (!(trpt->o_pm&2)
  && accpstate[ptr->_t][ptr->_p])
  { trpt->o_pm |= 2;
   break;
  }







 }
# 5888 "pan.c"
 if (fairness
 && (a_cycles && (trpt->o_pm&2)))
 { now._a_t = 2;
  now._cnt[0] = now._nr_pr + 1;




 }

 c_stack_start = (char *) &i;
# 5908 "pan.c"
 if (readtrail) getrail();


 start_timer();
# 5930 "pan.c"
  new_state();


}
# 5947 "pan.c"
unsigned char
do_transit(Trans *t, short II)
{ unsigned char _m = 0;
 int tt = (int) ((P0 *)_this)->_p;
# 5965 "pan.c"
# 1 "pan.m" 1
# 10 "pan.m"
 
 
 switch (t->forw) {
 default: Uerror("bad forward move");
 case 0:
  return 0;
 case 1: if(DFSdetail) printf("generic 'goto' or 'skip'\n");
  
  _m = 3; goto P999;
 case 2: if(DFSdetail) printf("generic 'else'\n");
  
  if (trpt->o_pm&1) return 0;
  _m = 3; goto P999;


 case 3: if(DFSdetail) printf("CLAIM never_0, STATE 1 - example.pml:23 - [((x<4))]\n");
# 36 "pan.m"
  { static int reported1 = 0;
   if (verbose && !reported1)
   { printf("depth %d: Claim, state %d (line %d)\n",
     (int) depth, (int) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p, src_claim[ (int) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p ]);
    reported1 = 1;
    fflush(
# 41 "pan.m" 3 4
          stdout
# 41 "pan.m"
                );
  } }


  reached[2][1] = 1;
  if (!((now.x<4)))
   {
    return 0;}
  _m = 3; goto P999;
 case 4: if(DFSdetail) printf("CLAIM never_0, STATE 7 - example.pml:28 - [((x<4))]\n");
# 62 "pan.m"
  { static int reported7 = 0;
   if (verbose && !reported7)
   { printf("depth %d: Claim, state %d (line %d)\n",
     (int) depth, (int) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p, src_claim[ (int) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p ]);
    reported7 = 1;
    fflush(
# 67 "pan.m" 3 4
          stdout
# 67 "pan.m"
                );
  } }


  reached[2][7] = 1;
  if (!((now.x<4)))
   return 0;
  _m = 3; goto P999;
 case 5: if(DFSdetail) printf("CLAIM never_0, STATE 11 - example.pml:30 - [-end-]\n");
# 88 "pan.m"
  { static int reported11 = 0;
   if (verbose && !reported11)
   { printf("depth %d: Claim, state %d (line %d)\n",
     (int) depth, (int) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p, src_claim[ (int) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p ]);
    reported11 = 1;
    fflush(
# 93 "pan.m" 3 4
          stdout
# 93 "pan.m"
                );
  } }


  reached[2][11] = 1;
  if (!delproc(1, II)) return 0;
  _m = 3; goto P999;


 case 6: if(DFSdetail) printf("PROC B, STATE 1 - example.pml:16 - [(!((x%%2)))]\n");
 
  reached[1][1] = 1;
  if (!( !((now.x%2))))
   return 0;
  _m = 3; goto P999;
 case 7: if(DFSdetail) printf("PROC B, STATE 2 - example.pml:16 - [x = (x/2)]\n");
 
  reached[1][2] = 1;
  (trpt+1)->bup.oval = now.x;
  now.x = (now.x/2);



  ;
  _m = 3; goto P999;
 case 8: if(DFSdetail) printf("PROC B, STATE 6 - example.pml:18 - [-end-]\n");
 
  reached[1][6] = 1;
  if (!delproc(1, II)) return 0;
  _m = 3; goto P999;


 case 9: if(DFSdetail) printf("PROC A, STATE 1 - example.pml:9 - [((x%%2))]\n");
 
  reached[0][1] = 1;
  if (!((now.x%2)))
   return 0;
  _m = 3; goto P999;
 case 10: if(DFSdetail) printf("PROC A, STATE 2 - example.pml:9 - [x = ((3*x)+1)]\n");
 
  reached[0][2] = 1;
  (trpt+1)->bup.oval = now.x;
  now.x = ((3*now.x)+1);



  ;
  _m = 3; goto P999;
 case 11: if(DFSdetail) printf("PROC A, STATE 2 - example.pml:9 - [x = ((3*x)+1)]\n");
 
  reached[0][6] = 1;
  if (!delproc(1, II)) return 0;
  _m = 3; goto P999;
 case 12: if(DFSdetail) printf("np_ \n");
  if (!((!(trpt->o_pm&4) && !(trpt->tau&128))))
   return 0;

 case 13: if(DFSdetail) printf("true \n");
  _m = 3; goto P999;

 }
# 5966 "pan.c" 2
P999:


 return _m;

}
# 6034 "pan.c"
int
enabled(int iam, int pid)
{ Trans *t; unsigned char *othis = _this;
 int res = 0; int tt; unsigned char ot;

 pid += 1;
 if (pid == iam)
  Uerror("used: enabled(pid=thisproc)");
 if (pid < 0 || pid >= (int) now._nr_pr)
  return 0;
 _this = (((unsigned char *)&now)+(int)proc_offset[pid]);
 TstOnly = 1;
 tt = (int) ((P0 *)_this)->_p;
 ot = (unsigned char) ((P0 *)_this)->_t;
 for (t = trans[ot][tt]; t; t = t->nxt)
  if (do_transit(t, (short) pid))
  { res = 1;
   break;
  }
 TstOnly = 0;
 _this = othis;
 return res;
}
# 6124 "pan.c"
void
snap_time(void)
{ clock_t stop_time;
 double delta_time;

 struct tms stop_tm;
 stop_time = times(&stop_tm);
 delta_time = ((double) (stop_time - start_time)) / ((double) sysconf(
# 6131 "pan.c" 3 4
                                                                     _SC_CLK_TCK
# 6131 "pan.c"
                                                                                ));




 if (delta_time > 0.01)
 { printf("t= %8.3g ", delta_time);
  printf("R= %7.0g", nstates/delta_time);
 }
 printf("\n");
 if (quota > 0.1 && delta_time > quota)
 { printf("Time limit of %6.3g minutes exceeded\n", quota/60.0);






  wrapup();
 }
}
void
snapshot(void)
{
# 6163 "pan.c"
 printf("Depth= %7ld States= %8.3g ",



  mreached, nstates);
 printf("Transitions= %8.3g ", nstates+truncs);



 printf("Memory= %9.3f\t", memcnt/1048576.);
 snap_time();
 fflush(
# 6174 "pan.c" 3 4
       stdout
# 6174 "pan.c"
             );






}
# 6221 "pan.c"
unsigned char *
Pptr(int x)
{ if (x < 0 || x >= 255



 || !proc_offset[x])

  return noptr;
 else
  return (unsigned char *) (((unsigned char *)&now)+(int)proc_offset[x]);
}

unsigned char *
Qptr(int x)
{ if (x < 0 || x >= 255



 || !q_offset[x])

  return noqptr;
 else
  return (unsigned char *) (((unsigned char *)&now)+(int)q_offset[x]);
}
# 6278 "pan.c"
void
select_claim(int n)
{ if (n != 0) uerror("non-existing claim");
}

int qs_empty(void);
# 6432 "pan.c"
void
new_state(void)
{ Trans *t;
 unsigned char _n, _m, ot;
# 6445 "pan.c"
 short II, JJ = 0, kk;
 int tt;
 short From = (now._nr_pr-1), To = (1);



Down:

# 6472 "pan.c"
 trpt->tau &= ~(16|32|64);
# 6496 "pan.c"
 if (depth >= maxdepth)
 { if (!warned)
  { warned = 1;
    printf("error: max search depth too small\n");
  }
  if (bounded)
  { uerror("depth limit reached");
  }
  truncs++;




  (trpt-1)->tau |= 16;






  goto Up;
 }
AllOver:


 trpt->ostate = (trpt-1)->ostate;


 if ((trpt->tau&4) || ((trpt-1)->tau&128))

 if (boq == -1) {

  if ((now._a_t&1) && depth > A_depth)
  { int delta = 0 + 2;
   if (!memcmp((char *)&A_Root + delta,
    (char *)&now + delta, vsize - delta))
   {

      if (fairness && now._cnt[1] != 1)
      {




      } else

      { depthfound = A_depth;






    uerror("acceptance cycle");






    goto Up;
   } }






  }

  if (!(trpt->tau&8))
  {
# 6604 "pan.c"
   JJ = onstack_now();
   II = b_store((char *)&now, vsize);
# 6640 "pan.c"
   kk = (II == 1 || II == 2);





   if (II == 2 && ((trpt->o_pm&2) || ((trpt-1)->o_pm&2)))

   if (a_cycles && !fairness)

   if (depth > A_depth)
   {
    II = 3;



    goto same_case;
   }


   if (!JJ && (now._a_t&1) && depth > A_depth)
   { int oj1 = j1_spin;
    unsigned char o_a_t = now._a_t;
    now._a_t &= ~(1|16|32);
    if (onstack_now())
    { II = 3;



    }
    now._a_t = o_a_t;
    j1_spin = oj1;
   }

   if (II == 3 && a_cycles && (now._a_t&1))
   {

      if (fairness && now._cnt[1] != 1)
      {



    II = 0;
      } else

      {



same_case: if (Lstate) depthfound = Lstate->D;



    uerror("acceptance cycle");






    goto Up;
      }
   }
# 6739 "pan.c"
   if (II)
   { truncs++;







    goto Up;
   }
   if (!kk)
   { static long sdone = (long) 0; long ndone;
    nstates++;



    ndone = (unsigned long) (nstates/(freq));
    if (ndone != sdone)
    { snapshot();
     sdone = ndone;
# 6774 "pan.c"
    }
# 6799 "pan.c"
   }

   onstack_put();
# 6816 "pan.c"
 } }
 if (depth > mreached)
  mreached = depth;

 if (trpt->tau&4)

 trpt->tau &= ~(1|2);
 _n = 0;




 if (now._nr_pr == 0)
 { uerror("end state in claim reached");
 }
 if (stopstate[((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_t][((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_p])
 { uerror("end state in claim reached");
 }
Stutter:
 if (trpt->tau&4)
 {

  if ((now._a_t&2)
  && now._cnt[now._a_t&1] == 1)
  { now._a_t &= ~2;
   now._cnt[now._a_t&1] = 0;
   trpt->o_pm |= 16;



  }
  II = 0;
  goto Veri0;
 }
# 6938 "pan.c"
 trpt->o_pm &= ~(8|16|32|64);

 if (fairness && boq == -1

 && (!(trpt->tau&4) && !((trpt-1)->tau&128))

 && !(trpt->tau&8))
 {
  if (!(now._a_t&2))
  { if (a_cycles && (trpt->o_pm&2))
   {
    now._a_t |= 2;
    now._cnt[now._a_t&1] = now._nr_pr + 1;
    trpt->o_pm |= 8;




   }
  } else
  {
   if (now._cnt[now._a_t&1] == 1)
   { now._a_t &= ~2;
    now._cnt[now._a_t&1] = 0;
    trpt->o_pm |= 16;




 } } }
# 7000 "pan.c"
 for (II = From; II >= To; II--) {
# 7071 "pan.c"
Veri0:
  _this = (((unsigned char *)&now)+(int)proc_offset[II]);
  tt = (int) ((P0 *)_this)->_p;
  ot = (unsigned char) ((P0 *)_this)->_t;
# 7095 "pan.c"
  trpt->o_pm &= ~1;





  trpt->o_pm &= ~64;
  if (fairness
  && boq == -1
  && !(trpt->o_pm&32)
  && (now._a_t&2)
  && now._cnt[now._a_t&1] == II+2)
  { now._cnt[now._a_t&1] -= 1;


   if (II == 1)
    now._cnt[now._a_t&1] = 1;






   trpt->o_pm |= (32|64);
  }
# 7136 "pan.c"
  (trpt+1)->pr = (unsigned char) II;
  (trpt+1)->st = tt;
# 7163 "pan.c"
  for (t = trans[ot][tt]; t; t = t->nxt)

  {
# 7183 "pan.c"
   (trpt+1)->o_t = t;


   if (DFSdetail)
   {
      printf("--------------------------------------------------------------\n");
      printf("depth= %ld\n", depth);
   }
   
   if (!(_m = do_transit(t, II)))
   {
    if (DFSdetail)
    {
      printf("Move failed.\n"); 
      printf("x = %d\n", now.x);
    }
    continue;
   }

   if (DFSdetail)
   {
      printf("Move success.\n");
      printf("x = %d\n", now.x);
      printf("--------------------------------------------------------------\n");
   }
   

# 7216 "pan.c"
   if (boq == -1)
# 7225 "pan.c"
    trpt->o_pm |= 1;
# 7267 "pan.c"
  
   depth++; trpt++;
   trpt->pr = (unsigned char) II;
   trpt->st = tt;
   trpt->o_pm &= ~(2|4);
   if (t->st > 0)
   { ((P0 *)_this)->_p = t->st;

   }

   if (a_cycles)
   {

    int ii;
# 7288 "pan.c"
    for (ii = 0; ii < (int) now._nr_pr; ii++)
    { if (accpstate[((P0 *)(((unsigned char *)&now)+(int)proc_offset[ii]))->_t][((P0 *)(((unsigned char *)&now)+(int)proc_offset[ii]))->_p])
      { trpt->o_pm |= 2;
     break;
       } }
# 7303 "pan.c"
   }

   trpt->o_t = t; trpt->o_n = _n;
   trpt->o_ot = ot; trpt->o_tt = tt;
   trpt->o_To = To; trpt->o_m = _m;
   trpt->tau = 0;
# 7318 "pan.c"
   if (boq != -1 || (t->atom&2))
   { trpt->tau |= 8;


    if((trpt-1)->tau&4)
     trpt->tau |= 4;
    else
     trpt->tau &= ~4;
   } else
   { if ((trpt-1)->tau&4)
     trpt->tau &= ~4;
    else
     trpt->tau |= 4;
   }


   if (((trpt-1)->tau&1) && !(trpt->tau&4))
    trpt->tau |= 1;




   if (boq == -1 && (t->atom&2))
   { From = To = II; nlinks++;
   } else
   { From = (now._nr_pr-1); To = (1);
   }
# 7361 "pan.c"
   goto Down;
Up:
# 7409 "pan.c"
   if ((now._a_t&1) && depth <= A_depth)
    return;


   if (trpt->o_pm&128)
   { now._cnt[now._a_t&1] = trpt->bup.oval;
    _n = 1; trpt->o_pm &= ~128;
    depth--; trpt--;


    goto Q999;
   }
# 7440 "pan.c"
   t = trpt->o_t; _n = trpt->o_n;
   ot = trpt->o_ot; II = trpt->pr;
   tt = trpt->o_tt; _this = Pptr(II);
   To = trpt->o_To; _m = trpt->o_m;
# 7456 "pan.c"
# 1 "pan.b" 1
 switch (t->back) {
 default: Uerror("bad return move");
 case 0: goto R999;


;
  ;
  ;
  ;

 case 5:
  ;
  p_restor(II);
  ;
  ;
  goto R999;


;
  ;

 case 7:
  ;
  now.x = trpt->bup.oval;
  ;
  goto R999;

 case 8:
  ;
  p_restor(II);
  ;
  ;
  goto R999;


;
  ;

 case 10:
  ;
  now.x = trpt->bup.oval;
  ;
  goto R999;

 case 11:
  ;
  p_restor(II);
  ;
  ;
  goto R999;
 }
# 7457 "pan.c" 2
R999:
# 7481 "pan.c"
   depth--; trpt--;
   if(DFSdetail)
    printf("trpt--, depth= %ld\n", depth);
# 7490 "pan.c"
   if (_m)
   { reached[ot][t->st] = 1;
    reached[ot][tt] = 1;
   }



   if (_m>_n||(_n>3&&_m!=0)) _n=_m;
   ((P0 *)_this)->_p = tt;
  }
# 7515 "pan.c"
  if ((trpt->o_pm&32)
  && (trpt->o_pm&64))
  { if (trpt->o_pm&1)
   {

    if (now._cnt[now._a_t&1] == 1)
     now._cnt[now._a_t&1] = 2;

    now._cnt[now._a_t&1] += 1;





    trpt->o_pm &= ~(32|64);
   } else
   { if (_n > 0)
    {
     trpt->o_pm &= ~64;
     II = (From+1);
  } } }

  if (II == 0)
  { 
    break;
  }

  { 
    continue; };
 }
# 7586 "pan.c"
 if (trpt->o_pm&32)
 {

  if (now._cnt[now._a_t&1] == 1)
   now._cnt[now._a_t&1] = 2;

  now._cnt[now._a_t&1] += 1;





  trpt->o_pm &= ~32;
 }

 if (fairness
 && _n == 0

 && !(trpt->tau&4)

 && !(trpt->tau&8)







 && now._cnt[now._a_t&1] > 0)
 { depth++; trpt++;
  trpt->o_pm |= 128 | ((trpt-1)->o_pm&(2|4));
  trpt->bup.oval = now._cnt[now._a_t&1];
  now._cnt[now._a_t&1] = 1;

  trpt->tau = 4;



  From = (now._nr_pr-1); To = (1);




  goto Down;
 }

Q999: ;
 if (trpt->o_pm&8)
 { now._a_t &= ~2;
  now._cnt[now._a_t&1] = 0;
  trpt->o_pm &= ~8;




 }
 if (trpt->o_pm&16)
 { now._a_t |= 2;
  now._cnt[now._a_t&1] = 1;
  trpt->o_pm &= ~16;




 }
# 7725 "pan.c"
 if (_n == 0 || ((trpt->tau&4) && (trpt->tau&2)))
 {
# 7736 "pan.c"
  if ((now._nr_pr == 0 && (!strict || qs_empty()))
  || depth >= maxdepth-1) goto Done;
  if ((trpt->tau&8) && !(trpt->tau&4))
  { trpt->tau &= ~(1|8);

   From = (now._nr_pr-1); To = (1);




   trpt->tau |= 4;

   goto AllOver;
  }
# 7793 "pan.c"
BreakOut:
  if (!(trpt->tau&4))
  { trpt->tau |= 4;
   trpt->tau |= 128;



   goto Stutter;
  }
# 7820 "pan.c"
 }
Done: 
 if (!(trpt->tau&8))
 {



  if (boq == -1
  && (((trpt->tau&4) && !(trpt->tau&128))
  || ( (trpt-1)->tau&128)))



  {







   onstack_zap();
  }
# 7864 "pan.c"
  if (_n != 0



  && (trpt->tau&4)


  && ((now._nr_pr > 1) || (trpt->o_pm&2))

  && !(now._a_t&1))
  {

   if (fairness)
   {




    if ((now._a_t&2)
    && (now._cnt[0] == 1))
     checkcycles();
   } else

   if (a_cycles && (trpt->o_pm&2))
    checkcycles();
  }

 }
 if (depth > 0)
 {




  goto Up;
 }
}





void
spin_assert(int a, char *s, int ii, int tt, Trans *t)
{
 if (!a && !noasserts)
 { char bad[1024];
  strcpy(bad, "assertion violated ");
  if (strlen(s) > 1000)
  { strncpy(&bad[19], (const char *) s, 1000);
   bad[1019] = '\0';
  } else
   strcpy(&bad[19], s);
  uerror(bad);
 }
}

int
Boundcheck(int x, int y, int a1, int a2, Trans *a3)
{
 spin_assert((x >= 0 && x < y), "- invalid array index",
  a1, a2, a3);
 return x;
}

int do_hashgen = 0;
void
wrap_stats(void)
{
 if (nShadow>0)
   printf("%9.8g states, stored (%g visited)\n",
   nstates - nShadow, nstates);
 else
   printf("%9.8g states, stored\n", nstates);
# 7956 "pan.c"
 printf("%9.8g states, matched\n", truncs);



 if (nShadow>0)
 printf("%9.8g transitions (= visited+matched)\n",
  nstates+truncs);
 else
 printf("%9.8g transitions (= stored+matched)\n",
  nstates+truncs);
 printf("%9.8g atomic steps\n", nlinks);
 if (nlost) printf("%g lost messages\n", (double) nlost);
# 7996 "pan.c"
 if (udmem)
 printf("\nhash factor: %4g (best if > 100.)\n\n",
  (double)(((double) udmem) * 8.0) / (double) nstates);
 else
 printf("\nhash factor: %4g (best if > 100.)\n\n",
  ((double)(((unsigned long)1)<<(ssize-10)) / (double) nstates) * 1024.0);
       printf("bits set per state: %u (-k%u)\n", hfns, hfns);
 if (do_hashgen)
 printf("hash polynomial used: 0x%.8x\n", HASH_CONST[HASH_NR]);
 if (s_rand != 12345)
 printf("random seed used: %u\n", (unsigned int) (s_rand-1));
# 8015 "pan.c"
}

void
wrapup(void)
{ double nr1, nr2, nr3 = 0.0, nr4, nr5 = 0.0;
# 8040 "pan.c"
 signal(
# 8040 "pan.c" 3 4
       2
# 8040 "pan.c"
             , 
# 8040 "pan.c" 3 4
               ((__sighandler_t) 0)
# 8040 "pan.c"
                      );

 printf("\n(%s)\n", "Spin Version 6.5.1 -- 20 December 2019");
 if (!done) printf("Warning: Search not completed\n");
# 8078 "pan.c"
 if (t_reverse)
 printf("	+ Reverse Transition Ordering\n");
# 8125 "pan.c"
 printf("\nBit statespace search for:\n");
# 8141 "pan.c"
 printf("	never claim         	+");
 printf(" (%s)\n", procname[((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_t]);
 printf("	assertion violations	");
 if (noasserts)
  printf("- (disabled by -A flag)\n");
 else
  printf("+ (if within scope of claim)\n");
# 8164 "pan.c"
 printf("	acceptance   cycles 	");

 if (a_cycles)
  printf("+ (fairness %sabled)\n",
   fairness?"en":"dis");
 else printf("- (not selected)\n");
# 8178 "pan.c"
 printf("	invalid end states	- ");
 printf("(disabled by ");
 if (noends)
  printf("-E flag)\n\n");
 else
  printf("never claim)\n\n");







 printf("State-vector %d byte, depth reached %ld", hmax,



     mreached);
 printf(", errors: %lu\n", errors);
 fflush(
# 8197 "pan.c" 3 4
       stdout
# 8197 "pan.c"
             );
# 8207 "pan.c"
 wrap_stats();
# 8216 "pan.c"
 printf("\n");







 nr1 = (nstates-nShadow)*
       (double)(hmax+sizeof(H_el)-sizeof(unsigned));



 nr2 = (double) ((maxdepth+3)*sizeof(Trail));






 if (udmem)
  nr3 = (double) (udmem);
 else
  nr3 = (double) ((1L)<<(ssize-3));




 nr5 = (double) (maxdepth*sizeof(H_el *));


 nr4 = (double) (svmax * (sizeof(Svtack) + hmax))
     + (double) (smax * (sizeof(_Stack) + Maxbody * sizeof(char)));

 if (1 )

 { double remainder = memcnt;
   double tmp_nr = memcnt-nr3-nr4-(nr2-fragment)-nr5;




  if (tmp_nr < 0.0) tmp_nr = 0.;
  printf("Stats on memory usage (in Megabytes):\n");
  printf("%9.3f	equivalent memory usage for states",
   nr1/1048576.);
  printf(" (stored*(State-vector + overhead))\n");
# 8273 "pan.c"
  if (udmem)
   printf("%9.3f	memory used for hash array (-M%ld)\n",
   nr3/1048576., udmem/(1024L*1024L));
  else
   printf("%9.3f	memory used for hash array (-w%d)\n",
   nr3/1048576., ssize);
  if (nr5 > 0.0)
  printf("%9.3f	memory used for bit stack\n",
   nr5/1048576.);
  remainder = remainder - nr3 - nr5;
# 8320 "pan.c"
  printf("%9.3f	memory used for DFS stack (-m%ld)\n",
   nr2/1048576., maxdepth);
  remainder -= nr2;
# 8337 "pan.c"
  if (remainder - fragment > 1048576.)
  { printf("%9.3f	other (proc and chan stacks)\n",
   (remainder-fragment)/1048576.);
  }
  if (fragment > 1048576.)
  { printf("%9.3f	memory lost to fragmentation\n",
   fragment/1048576.);
  }




  printf("%9.3f	total actual memory usage\n\n",
   memcnt/1048576.);

 }

 else






 printf("%9.3f	memory usage (Mbyte)\n",
  memcnt/1048576.);




 printf("\n");
# 8397 "pan.c"
 if ((done || verbose) && !no_rck) do_reach();
# 8421 "pan.c"
 pan_exit(0);

}

void
stopped(int arg)
{



 printf("Interrupted\n");



 wrapup();
 pan_exit(0);
}





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4

# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 68 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 81 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 100 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 111 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h" 2 3 4
# 8444 "pan.c" 2
# 8452 "pan.c"

# 8452 "pan.c"
void
d_sfh(unsigned char *s, int len)
{ uint32_t h = len, tmp;
 int rem;

 rem = len & 3;
 len >>= 2;

 for ( ; len > 0; len--)
 { h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
         tmp = (((((uint32_t)(((const uint8_t *)(s+2))[1])) << 8) +(uint32_t)(((const uint8_t *)(s+2))[0]) ) << 11) ^ h;
         h = (h << 16) ^ tmp;
         s += 2*sizeof(uint16_t);
  h += h >> 11;
 }
 switch (rem) {
 case 3: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
  h ^= h << 16;
  h ^= s[sizeof(uint16_t)] << 18;
  h += h >> 11;
  break;
 case 2: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
  h ^= h << 11;
  h += h >> 17;
  break;
 case 1: h += *s;
  h ^= h << 10;
  h += h >> 1;
  break;
 }
 h ^= h << 3;
 h += h >> 5;
 h ^= h << 4;
 h += h >> 17;
 h ^= h << 25;
 h += h >> 6;

 K1 = h;
}
# 8536 "pan.c"
void
d_hash(unsigned char *kb, int nbytes)
{ uint8_t *bp;

 uint64_t a = 0, b, c, n;
 const uint64_t *k = (uint64_t *) kb;




 n = nbytes/8;

 a = 8 - (nbytes % 8);
 if (a > 0 && a < 8)
 { n++;
  bp = kb + nbytes;
  switch (a) {

  case 7: *bp++ = 0;
  case 6: *bp++ = 0;
  case 5: *bp++ = 0;
  case 4: *bp++ = 0;

  case 3: *bp++ = 0;
  case 2: *bp++ = 0;
  case 1: *bp = 0;
  case 0: break;
 } }

 b = HASH_CONST[HASH_NR];
 c = 0x9e3779b97f4a7c13LL;
 while (n >= 3)
 { a += k[0];
  b += k[1];
  c += k[2];
  { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
  n -= 3;
  k += 3;
 }
 c += (((uint64_t) nbytes)<<3);
 switch (n) {
 case 2: b += k[1];
 case 1: a += k[0];
 case 0: break;
 }
 { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
# 8601 "pan.c"
 j1_spin = c&nmask; j3_spin = a&7;
 j2_spin = b&nmask; j4_spin = (a>>3)&7;
 K1 = c; K2 = b;
}
# 8722 "pan.c"
void
s_hash(unsigned char *cp, int om)
{
 hasher(cp, om);

 if (S_Tab == H_tab)
  j1_spin = K1 % omaxdepth;
 else

 if (ssize < 8*8)
  j1_spin = K1&mask;
 else
  j1_spin = K1;
}

int *prerand;
void
inirand(void)
{ int i;
 srand(s_rand+HASH_NR);
 prerand = (int *) emalloc((omaxdepth+3)*sizeof(int));
 for (i = 0; i < omaxdepth+3; i++)
 { prerand[i] = rand();
 }
}
int
pan_rand(void)
{ if (!prerand) inirand();
 return prerand[depth];
}


void
set_masks(void)
{
 if (8 == 4 && ssize >= 32)
 { mask = 0xffffffff;

  switch (ssize) {
  case 34: nmask = (mask>>1); break;
  case 33: nmask = (mask>>2); break;
  default: nmask = (mask>>3); break;
  }



 } else if (8 == 8)
 { mask = (((1L)<<ssize)-1);

  nmask = mask>>3;



 } else if (8 != 4)
 { fprintf(
# 8776 "pan.c" 3 4
          stderr
# 8776 "pan.c"
                , "pan: wordsize %ld not supported\n", (long int) 8);
  exit(1);
 } else
 { mask = (((1L)<<ssize)-1);
  nmask = (mask>>3);
 }
}
# 8871 "pan.c"
unsigned int pp[33];

unsigned int
mul(unsigned int a, unsigned int b, unsigned int p)
{ int c = 0;
 while (a)
 { if (a&1)
  { a ^= 1;
   c ^= b;
  }
  a = (a>>1);
  if (b & 0x80000000)
  { b += b;
   b ^= p;
  } else
  { b += b;
 } }
 return c;
}

unsigned int
ppow(int n, unsigned int p)
{ unsigned int t = 1; int i;
 for (i = 0; i < 32; i++)
 { if (n & (1<<i))
  { t = mul(t, pp[i], p);
 } }
 return t;
}

void
hashgen(void)
{ unsigned int x, y, p; int i, cnt;
 int ff[5] = { 3, 5, 17, 257, 65537 };
 int nn[5];

 srand(s_rand);
 nn[0] = ff[1]*ff[2]*ff[3]*ff[4];
 nn[1] = ff[0]*ff[2]*ff[3]*ff[4];
 nn[2] = ff[0]*ff[1]*ff[3]*ff[4];
 nn[3] = ff[0]*ff[1]*ff[2]*ff[4];
 nn[4] = ff[0]*ff[1]*ff[2]*ff[3];
 for (cnt = 0; cnt < 5000; cnt++)
 { x = 2;
  p = ((rand()<<13)^rand()) | 1;
  pp[0] = x;
  for (i = 0; i < 32; i++)
  { pp[i+1] = mul(pp[i], pp[i], p);
  }
  if (pp[32] == x)
  { for (i = 0; i < 5; i++)
   { y = ppow(nn[i], p);
    if (y == 1)
    { break;
   } }
   if (y != 1)
   { HASH_CONST[0] = p;
    if (verbose)
    { printf("polynomial: 0x%.8x (%d tries)\n",
      p, cnt);
    }
    return;
 } } }
 fprintf(efd, "pan: could not find a polynomial in %d tries\n", cnt);
 fprintf(efd, "pan: try a different seed with -RSn\n");
 exit(1);
}

int
main(int argc, char *argv[])
{ void to_compile(void);

 efd = 
# 8943 "pan.c" 3 4
      stderr
# 8943 "pan.c"
            ;



 if (8 != sizeof(long)
 || 4 != sizeof(int))
 { printf("spin: error, the version of spin ");
  printf("that generated this pan.c assumed a different ");
  printf("wordsize (%d iso %d)\n", 8, (int) sizeof(long));
  exit(1);
 }
# 8975 "pan.c"
 b_store = bstore_reg;

 { int j;
  strcpy(o_cmdline, "");
  if (strlen(argv[0]) < sizeof(o_cmdname))
  { strcpy(o_cmdname, argv[0]);
  }
  for (j = 1; j < argc; j++)
  { strcat(o_cmdline, argv[j]);
   strcat(o_cmdline, " ");
  }

  if (strlen(o_cmdline) >= sizeof(o_cmdline))
  { Uerror("option list too long");
 } }
 while (argc > 1 && argv[1][0] == '-')
 { switch (argv[1][1]) {





  case 'a': a_cycles = 1; break;
# 9010 "pan.c"
  case 'A': noasserts = 1; break;
  case 'b': bounded = 1; break;


  case 'C': coltrace = 1; goto samething;


  case 'c': upto = atoi(&argv[1][2]); break;
  case 'D': dodot++; state_tables++; break;
  case 'd': state_tables++; break;
  case 'e': every_error = 1; upto = 0; Nr_Trails = 1; break;
  case 'E': noends = 1; break;






  case 'f': fairness = 1; break;



  case 'g': gui = 1; goto samething;


  case 'h':
     if (strncmp(&argv[1][1], "hash", strlen("hash")) == 0)
     { do_hashgen = 1;
    break;
     }
     if (!argv[1][2] || !
# 9040 "pan.c" 3 4
                        ((*__ctype_b_loc ())[(int) ((
# 9040 "pan.c"
                        (int) argv[1][2]
# 9040 "pan.c" 3 4
                        ))] & (unsigned short int) _ISdigit)
# 9040 "pan.c"
                                                 )
     { usage(efd);
     }
     HASH_NR = atoi(&argv[1][2])%(sizeof(HASH_CONST)/sizeof(unsigned int));
     break;
  case 'I': iterative = 2; every_error = 1; break;
  case 'i':
     if (strncmp(&argv[1][1], "i_reverse", strlen("i_reverse")) == 0)
     { reversing |= 1;
     } else
     { iterative = 1;
      every_error = 1;
     }
     break;
  case 'J': like_java = 1; break;

  case 'k': hfns = atoi(&argv[1][2]); break;
# 9077 "pan.c"
  case 'l': fprintf(efd, "error: -l not available (compile with -DNP)");
     usage(efd); break;



  case 'M': udmem = atoi(&argv[1][2]); break;
  case 'G': udmem = atoi(&argv[1][2]); udmem *= 1024; break;





  case 'm': maxdepth = atoi(&argv[1][2]); break;

  case 'N':
# 9103 "pan.c"
     fprintf(
# 9103 "pan.c" 3 4
            stderr
# 9103 "pan.c"
                  , "warning: only one claim defined, -N ignored\n");



     if (!
# 9107 "pan.c" 3 4
         ((*__ctype_b_loc ())[(int) ((
# 9107 "pan.c"
         (int)argv[1][2]
# 9107 "pan.c" 3 4
         ))] & (unsigned short int) _ISdigit) 
# 9107 "pan.c"
                                  && argc > 2 && argv[2][0] != '-')
     { argc--; argv++;
     }


     break;

  case 'n': no_rck = 1; break;

  case 'P':
     if (!readtrail
     && 
# 9118 "pan.c" 3 4
        ((*__ctype_b_loc ())[(int) ((
# 9118 "pan.c"
        (int) argv[1][2]
# 9118 "pan.c" 3 4
        ))] & (unsigned short int) _ISdigit)
# 9118 "pan.c"
                                 )
     { int x = atoi(&argv[1][2]);
    if (x != 0 && x != 1)
    { fprintf(efd, "pan: bad option -P[01], ignored\n");
    }
    if (x == 0)
    { reversing &= ~1;
     break;
    }
    if (x == 1)
    { reversing |= 1;
     break;
    }
    if (verbose)
    fprintf(efd, "pan: reversed *active* process creation %s\n",
     reversing&1?"on":"off");
    break;
     }


     readtrail = 1; onlyproc = atoi(&argv[1][2]);
     if (argc > 2 && argv[2][0] != '-')
     { trailfilename = argv[2];
    argc--; argv++;
     }






     break;

  case 'p':
# 9181 "pan.c"
     if (strncmp(&argv[1][1], "p_permute", strlen("p_permute")) == 0
     || strncmp(&argv[1][1], "p_rotate", strlen("p_rotate")) == 0
     || strncmp(&argv[1][1], "p_randrot", strlen("p_randrot")) == 0
     || strncmp(&argv[1][1], "p_reverse", strlen("p_reverse")) == 0)
     { fprintf(efd, "option %s required compilation with -DPERMUTED\n",
     argv[1]);
    exit(1);
     }





     fprintf(efd, "invalid option '%s' -- ignored\n", argv[1]);

     break;

  case 'Q': quota = (double) 60.0 * (double) atoi(&argv[1][2]);



     break;

  case 'q': strict = 1; break;
  case 'R':
   if (argv[1][2] == 'S')
   { s_rand = atoi(&argv[1][3]);
    break;
   }

   Nrun = atoi(&argv[1][2]);
   if (Nrun > 100)
   { Nrun = 100;
   } else if (Nrun < 1)
   { Nrun = 1;
   }




  case 'r':
     if (strncmp(&argv[1][1], "rhash", strlen("rhash")) == 0)
     { if (s_rand == 12345)
    {



     struct tms dummy_tm;
     s_rand = (unsigned int) times(&dummy_tm);

    }
    srand(s_rand++);
# 9258 "pan.c"
    fprintf(efd, "option -rhash requires compilation with -DPERMUTED\n");
    exit(1);

     }

samething: readtrail = 1;
     if (
# 9264 "pan.c" 3 4
        ((*__ctype_b_loc ())[(int) ((
# 9264 "pan.c"
        (int)argv[1][2]
# 9264 "pan.c" 3 4
        ))] & (unsigned short int) _ISdigit)
# 9264 "pan.c"
                                )
    whichtrail = atoi(&argv[1][2]);
     else if (argc > 2 && argv[2][0] != '-')
     { trailfilename = argv[2];
    argc--; argv++;
     }
     break;
  case 'S': silent = 1; goto samething;




  case 'T':
     if (
# 9277 "pan.c" 3 4
        ((*__ctype_b_loc ())[(int) ((
# 9277 "pan.c"
        (int) argv[1][2]
# 9277 "pan.c" 3 4
        ))] & (unsigned short int) _ISdigit)
# 9277 "pan.c"
                                 )
     { t_reverse = atoi(&argv[1][2]);
    if (verbose)
    printf("pan: reverse transition ordering %s\n",
     t_reverse?"on":"off");
    break;
     }
     TMODE = 0444;
     break;
  case 't':
     if (strncmp(&argv[1][1], "t_reverse", strlen("t_reverse")) == 0)
     { t_reverse = 1;
    break;
     }
     if (argv[1][2])
     { tprefix = &argv[1][2];
     }
     break;
  case 'u':



     break;
  case 'V': start_timer(); printf("Generated by %s\n", "Spin Version 6.5.1 -- 20 December 2019");
     to_compile(); pan_exit(2); break;
  case 'v': verbose++; break;
  case 'w': ssize = atoi(&argv[1][2]);



     break;
  case 'Y': signoff = 1; break;
  case 'X': efd = 
# 9309 "pan.c" 3 4
                 stdout
# 9309 "pan.c"
                       ; break;
  case 'x': exclusive = 1; break;
# 9328 "pan.c"
  case 'z': break;

  case 'Z':DFSdetail = 1; break;

  default : fprintf(efd, "saw option -%c\n",
    argv[1][1]); usage(efd); break;
  }
  argc--; argv++;
 }
# 9343 "pan.c"
 if (do_hashgen)
 { hashgen();
 }

 if (fairness && !a_cycles)
 { fprintf(efd, "error: -f requires the use of -a or -l\n");
  usage(efd);
 }
# 9364 "pan.c"
 uerror = dfs_uerror;
 Uerror = dfs_Uerror;

 if (ssize <= 32)
 { hasher = d_sfh;



 } else
 { hasher = d_hash;



 }
 if (iterative && TMODE != 0666)
 { TMODE = 0666;
  fprintf(efd, "warning: -T ignored when -i or -I is used\n");
 }
# 9427 "pan.c"
 if (hfns <= 0)
 { hfns = 1;
  fprintf(efd, "warning: using -k%d as minimal usable value\n", hfns);
 }

 omaxdepth = maxdepth;

 if (8 == 4 && ssize > 34)
 { ssize = 34;
  fprintf(efd, "warning: using -w%d as max usable value\n", ssize);




 }
# 9468 "pan.c"
 if (iterative && a_cycles)
 fprintf(efd, "warning: -i or -I work for safety properties only\n");
# 9557 "pan.c"
 if (maxdepth <= 0 || ssize <= 1) usage(efd);
# 9633 "pan.c"
   if (!a_cycles

   && !readtrail




   && !state_tables)




   { fprintf(efd, "warning: never claim + accept labels ");
     fprintf(efd, "requires -a flag to fully verify\n");

   }
# 9689 "pan.c"
 signal(
# 9689 "pan.c" 3 4
       2
# 9689 "pan.c"
             , stopped);
 set_masks();




 trail = (Trail *) emalloc((maxdepth+3)*sizeof(Trail));
 trail++;

 trpt = &trail[0];
# 9717 "pan.c"
 run();
 done = 1;
 wrapup();
 return 0;
}

void
usage(FILE *fd)
{
 fprintf(fd, "%s\n", "Spin Version 6.5.1 -- 20 December 2019");
 fprintf(fd, "Valid Options are:\n");





 fprintf(fd, "	-a  find acceptance cycles\n");




 fprintf(fd, "	-A  ignore assert() violations\n");
 fprintf(fd, "	-b  consider it an error to exceed the depth-limit\n");
 fprintf(fd, "	-cN stop at Nth error ");
 fprintf(fd, "(defaults to -c1)\n");
 fprintf(fd, "	-D  print state tables in dot-format and stop\n");
 fprintf(fd, "	-d  print state tables and stop\n");
 fprintf(fd, "	-e  create trails for all errors\n");
 fprintf(fd, "	-E  ignore invalid end states\n");




 fprintf(fd, "	-f  add weak fairness (to -a or -l)\n");

 fprintf(fd, "	-hN use different hash-seed N:0..499 (defaults to -h0)\n");
 fprintf(fd, "	-hash generate a random hash-polynomial for -h0 (see also -rhash)\n");
 fprintf(fd, "	      using a seed set with -RSn (default %u)\n", s_rand);
 fprintf(fd, "	-i  search for shortest path to error\n");
 fprintf(fd, "	-I  like -i, but approximate and faster\n");
 fprintf(fd, "	-J  reverse eval order of nested unlesses\n");

 fprintf(fd, "	-kN set N bits per state (defaults to 3)\n");
# 9768 "pan.c"
 fprintf(fd, "	-l  find non-progress cycles -> ");
 fprintf(fd, "disabled, requires ");
 fprintf(fd, "compilation with -DNP\n");



 fprintf(fd, "	-MN use N Megabytes for bitstate hash array\n");
 fprintf(fd, "	-GN use N Gigabytes for bitstate hash array\n");

 fprintf(fd, "	-mN max depth N steps (default=10k)\n");




 fprintf(fd, "	-n  no listing of unreached states\n");
# 9791 "pan.c"
 fprintf(fd, "	-QN set time-limit on execution of N minutes\n");
 fprintf(fd, "	-q  require empty chans in valid end states\n");

 fprintf(fd, "	-r  read and execute trail - can add -v,-n,-PN,-g,-C\n");
 fprintf(fd, "	-r trailfilename  read and execute trail in file\n");
 fprintf(fd, "	-rN read and execute N-th error trail\n");
 fprintf(fd, "	-C  read and execute trail - columnated output (can add -v,-n)\n");
 fprintf(fd, "	-r -PN read and execute trail - restrict trail output to proc N\n");
 fprintf(fd, "	-g  read and execute trail + msc gui support\n");
 fprintf(fd, "	-S  silent replay: only user defined printfs show\n");

 fprintf(fd, "	-RSn use randomization seed n\n");
 fprintf(fd, "	-rhash use random hash-polynomial and randomly choose -p_rotateN, -p_permute, or p_reverse\n");

 fprintf(fd, "	-Rn run n times n: [1..100] using n ");
 fprintf(fd, " different hash functions\n");

 fprintf(fd, "	-T  create trail files in read-only mode\n");
 fprintf(fd, "	-t_reverse  reverse order in which transitions are explored\n");
 fprintf(fd, "	-tsuf replace .trail with .suf on trailfiles\n");
 fprintf(fd, "	-V  print SPIN version number\n");
 fprintf(fd, "	-v  verbose -- filenames in unreached state listing\n");
 fprintf(fd, "	-wN hashtable of 2^N entries ");
 fprintf(fd, "(defaults to -w%d)\n", ssize);
 fprintf(fd, "	-x  do not overwrite an existing trail file\n");




 fprintf(fd, "\n	options -r, -C, -PN, -g, and -S can optionally be followed by\n");
 fprintf(fd, "	a filename argument, as in '-r filename', naming the trailfile\n");




 exit(1);
}

char *
Malloc(unsigned long n)
{ char *tmp;






 tmp = (char *) malloc(n);
 if (!tmp)
 {



  printf("pan: out of memory\n");
# 9879 "pan.c"
  wrapup();
 }
 memcnt += (double) n;
 return tmp;
}



char *
emalloc(unsigned long n)
{ char *tmp;
 if (n == 0)
         return (char *) 
# 9891 "pan.c" 3 4
                        ((void *)0)
# 9891 "pan.c"
                            ;
 if (n&(sizeof(void *)-1))
         n += sizeof(void *)-(n&(sizeof(void *)-1));
 if ((unsigned long) left < n)
 { grow = (n < (100*1024)) ? (100*1024) : n;
         have = Malloc(grow);
         fragment += (double) left;
         left = grow;
 }
 tmp = have;
 have += (long) n;
 left -= (long) n;
 memset(tmp, 0, n);
 return tmp;
}
void
dfs_Uerror(char *str)
{
 uerror(str);






 wrapup();
}
# 10025 "pan.c"
static char unwinding;
void
dfs_uerror(char *str)
{ static char laststr[256];
 int is_cycle;

 if (unwinding) return;
 if (strncmp(str, laststr, 254))



 printf("pan:%lu: %s (at depth %ld)\n", errors+1, str,




  ((depthfound == -1)?depth:depthfound));
 strncpy(laststr, str, 254);
 errors++;

 if (readtrail) { wrap_trail(); return; }

 is_cycle = (strstr(str, " cycle") != (char *) 0);
 if (!is_cycle)
 { depth++; trpt++;
 }
 if ((every_error != 0)
 || errors == upto)
 {
# 10071 "pan.c"
  putrail();
# 10086 "pan.c"
 }
 if (!is_cycle)
 { depth--; trpt--;
 }

 if (iterative != 0 && maxdepth > 0)
 { if (maxdepth > depth)
  { maxdepth = (iterative == 1)?(depth+1):(depth/2);
  }
  warned = 1;
  printf("pan: reducing search depth to %ld\n",
   maxdepth);
 } else

 if (errors >= upto && upto != 0)
 {






  wrapup();
 }
 depthfound = -1;
}

int
xrefsrc(int lno, S_F_MAP *mp, int M, int i)
{ Trans *T; int j, retval=1;
 for (T = trans[M][i]; T; T = T->nxt)
 if (T && T->tp)
 { if (strcmp(T->tp, ".(goto)") == 0
  || strncmp(T->tp, "goto :", 6) == 0)
   return 1;

  for (j = 0; j < sizeof(mp); j++)
   if (i >= mp[j].from && i <= mp[j].upto)
   { printf("\t%s:%d", mp[j].fnm, lno);
    break;
   }
  if (j >= sizeof(mp))
  { printf("\t%s:%d", "example.pml", lno);
  }
  printf(", state %d", i);
  if (strcmp(T->tp, "") != 0)
  { char *q;
   q = transmognify(T->tp);
   printf(", \"%s\"", q?q:"");
  } else if (stopstate[M][i])
   printf(", -end state-");
  printf("\n");
  retval = 0;
 }
 return retval;
}

void
r_ck(unsigned char *which, int N, int M, short *src, S_F_MAP *mp)
{ int i, m=0;

 if ((enum btypes) Btypes[M] == N_CLAIM
 && claimname != 
# 10148 "pan.c" 3 4
                ((void *)0) 
# 10148 "pan.c"
                     && strcmp(claimname, procname[M]) != 0)
 { return;
 }

 switch ((enum btypes) Btypes[M]) {
 case P_PROC:
 case A_PROC:
  printf("unreached in proctype %s\n", procname[M]);
  break;
 case I_PROC:
  printf("unreached in init\n");
  break;
 case E_TRACE:
 case N_TRACE:
 case N_CLAIM:
 default:
  printf("unreached in claim %s\n", procname[M]);
  break;
 }
 for (i = 1; i < N; i++)
 { if (which[i] == 0
  && (mapstate[M][i] == 0
  || which[mapstate[M][i]] == 0))
  { m += xrefsrc((int) src[i], mp, M, i);
  } else
  { m++;
 } }
 printf("	(%d of %d states)\n", N-1-m, N-1);
}
# 10211 "pan.c"
void
putrail(void)
{ int fd;

 char snap[64];


 long i, j;
 Trail *trl;

 fd = make_trail();
 if (fd < 0) return;

 sprintf(snap, "-2:%d:-2\n", (unsigned char) ((P0 *)(((unsigned char *)&now)+(int)proc_offset[0]))->_t);
 if (write(fd, snap, strlen(snap)) < 0) return;


 sprintf(snap, "-4:-4:-4\n");
 if (write(fd, snap, strlen(snap)) < 0) return;
# 10250 "pan.c"
 i = 1;



 for ( ; i <= depth; i++)
 { if (i == depthfound+1)
  { if (write(fd, "-1:-1:-1\n", 9) != 9)
   { goto notgood;
  } }
  trl = &trail[i];;
  if (!trl->o_t) continue;
  if (trl->o_pm&128) continue;
  sprintf(snap, "%ld:%d:%d\n",
   i, trl->pr, trl->o_t->t_id);
  j = strlen(snap);
  if (write(fd, snap, j) != j)
  {
notgood: printf("pan: error writing trailfile\n");
   close(fd);
   wrapup();
 } }

 close(fd);



}

void
sv_save(void)
{ if (!svtack->nxt)
 { svtack->nxt = (Svtack *) emalloc(sizeof(Svtack));
    svtack->nxt->body = emalloc(vsize*sizeof(char));
    svtack->nxt->lst = svtack;
    svtack->nxt->m_delta = vsize;
    svmax++;
 } else if (vsize > svtack->nxt->m_delta)
 { svtack->nxt->body = emalloc(vsize*sizeof(char));
    svtack->nxt->lst = svtack;
    svtack->nxt->m_delta = vsize;
    svmax++;
 }
 svtack = svtack->nxt;






 svtack->o_delta = vsize;
 memcpy((char *)(svtack->body), (char *) &now, vsize);






}

void
sv_restor(void)
{
 memcpy((char *)&now, svtack->body, svtack->o_delta);
# 10325 "pan.c"
 if (vsize != svtack->o_delta)
  Uerror("sv_restor");
 if (!svtack->lst)
  Uerror("error: sv_restor");
 svtack = svtack->lst;



}

void
p_restor(int h)
{ int i;
 char *z = (char *) &now;






 proc_offset[h] = stack->o_offset;
 proc_skip[h] = (unsigned char) stack->o_skip;
# 10376 "pan.c"
 vsize += stack->o_skip;
 memcpy(z+vsize, stack->body, stack->o_delta);
 vsize += stack->o_delta;





 if (1 > 0 && h > 0)
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_pid = h-1;
 else
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_pid = h;




 now._nr_pr += 1;

 now._vsz = vsize;

 i = stack->o_delqs;
 if (!stack->lst)
  Uerror("error: p_restor");
 stack = stack->lst;
 _this = (((unsigned char *)&now)+(int)proc_offset[h]);
 while (i-- > 0)
  q_restor();




}

void
q_restor(void)
{ int h = now._nr_qs;
# 10431 "pan.c"
 char *z = (char *) &now;






 q_offset[h] = stack->o_offset;
 q_skip[h] = (unsigned char) stack->o_skip;
 vsize += stack->o_skip;
 memcpy(z+vsize, stack->body, stack->o_delta);
 vsize += stack->o_delta;





 now._vsz = vsize;

 now._nr_qs += 1;
# 10467 "pan.c"
 if (!stack->lst)
  Uerror("error: q_restor");
 stack = stack->lst;
}
typedef struct IntChunks {
 int *ptr;
 struct IntChunks *nxt;
} IntChunks;
IntChunks *filled_chunks[512];
IntChunks *empty_chunks[512];
int *
grab_ints(int nr)
{ IntChunks *z;
 if (nr >= 512) Uerror("cannot happen grab_int");
 if (filled_chunks[nr])
 { z = filled_chunks[nr];
  filled_chunks[nr] = filled_chunks[nr]->nxt;
 } else
 { z = (IntChunks *) emalloc(sizeof(IntChunks));
  z->ptr = (int *) emalloc(nr * sizeof(int));
 }
 z->nxt = empty_chunks[nr];
 empty_chunks[nr] = z;
 return z->ptr;
}
void
ungrab_ints(int *p, int nr)
{ IntChunks *z;
 if (!empty_chunks[nr]) Uerror("cannot happen ungrab_int");
 z = empty_chunks[nr];
 empty_chunks[nr] = empty_chunks[nr]->nxt;
 z->ptr = p;
 z->nxt = filled_chunks[nr];
 filled_chunks[nr] = z;
}
int
delproc(int sav, int h)
{ int d, i=0;



 if (h+1 != (int) now._nr_pr)
 { return 0;
 }
# 10548 "pan.c"
 while (now._nr_qs
 && q_offset[now._nr_qs-1] > proc_offset[h])
 { delq(sav);
  i++;
 }
 d = vsize - proc_offset[h];
 if (sav)
 { if (!stack->nxt)
  { stack->nxt = (_Stack *) emalloc(sizeof(_Stack));
   stack->nxt->body = emalloc(Maxbody * sizeof(char));
   stack->nxt->lst = stack;
   smax++;
  }
  stack = stack->nxt;
  stack->o_offset = proc_offset[h];



  stack->o_skip = (short) proc_skip[h];




  stack->o_delta = d;
  stack->o_delqs = i;
  memcpy(stack->body, (char *)(((unsigned char *)&now)+(int)proc_offset[h]), d);
 }
 vsize = proc_offset[h];
 now._nr_pr -= 1;
 memset((char *)(((unsigned char *)&now)+(int)proc_offset[h]), 0, d);
 vsize -= (int) proc_skip[h];
# 10591 "pan.c"
 now._vsz = vsize;

 return 1;
}

void
delq(int sav)
{ int h = now._nr_qs - 1;



 int d = vsize - q_offset[now._nr_qs - 1];




 if (sav)
 { if (!stack->nxt)
  { stack->nxt = (_Stack *) emalloc(sizeof(_Stack));

   stack->nxt->body = emalloc(Maxbody * sizeof(char));

   stack->nxt->lst = stack;
   smax++;
  }
  stack = stack->nxt;




  stack->o_offset = q_offset[h];



  stack->o_skip = (short) q_skip[h];





  stack->o_delta = d;

  memcpy(stack->body, (char *)(((unsigned char *)&now)+(int)q_offset[h]), d);

 }






 vsize = q_offset[h];
 vsize -= (int) q_skip[h];
# 10655 "pan.c"
 now._nr_qs -= 1;
 memset((char *)(((unsigned char *)&now)+(int)q_offset[h]), 0, d);
# 10665 "pan.c"
 now._vsz = vsize;

}

int
qs_empty(void)
{ int i;
 for (i = 0; i < (int) now._nr_qs; i++)
 { if ((((Q0 *)(((unsigned char *)&now)+(int)q_offset[i]))->Qlen) > 0)
   return 0;
 }
 return 1;
}

int
endstate(void)
{ int i; P0 *ptr;
 for (i = 1; i < (int) now._nr_pr; i++)
 { ptr = (P0 *) (((unsigned char *)&now)+(int)proc_offset[i]);
  if (!stopstate[ptr->_t][ptr->_p])
   return 0;
 }
 if (strict) return qs_empty();






 return 1;
}


void
checkcycles(void)
{ unsigned char o_a_t = now._a_t;

  unsigned char o_cnt = now._cnt[1];

  

   H_el *sv = trpt->ostate;
# 10724 "pan.c"
 now._a_t |= (1|16|32);


  now._cnt[1] = now._cnt[0];

 memcpy((char *)&A_Root, (char *)&now, vsize);
 A_depth = depthfound = depth;

if (DFSdetail)
{
  printf("--------------------------------------------------------------\n");
  printf("checkcycles(2nd DFS) start, A_depth= %ld\n", A_depth);
}
 

  new_state();

 now._a_t = o_a_t;

  now._cnt[1] = o_cnt;

 A_depth = 0; depthfound = -1;





 trpt->ostate = sv;
 if (DFSdetail)
 {
   printf("checkcycles return\n");
 }
  


}



H_el *Free_list = (H_el *) 0;
void
onstack_init(void)
{ S_Tab = (H_el **) emalloc(maxdepth*sizeof(H_el *));
}



H_el *
grab_state(int n)
{ H_el *v, *last = 0;
 if (H_tab == S_Tab)
 { for (v = Free_list; v && ((int) v->tagged >= n); v=v->nxt)
  { if ((int) v->tagged == n)
   { if (last)
     last->nxt = v->nxt;
    else
gotcha: Free_list = v->nxt;
    v->tagged = 0;
    v->nxt = 0;



    return v;
   }
   Fh++; last=v;
  }

  v = Free_list;
  if (v && ((int) v->tagged >= n))
   goto gotcha;
  ngrabs++;
 }
 return (H_el *) emalloc(sizeof(H_el)+n-sizeof(unsigned));
}
# 11170 "pan.c"
int compact_stack(char *, int);
void
onstack_zap(void)
{ H_el *v, *w, *last = 0;
 H_el **tmp = H_tab;
 char *nv; int n, m;
 static char warned = 0;





 H_tab = S_Tab;
# 11191 "pan.c"
 nv = (char *) &now;
 n = vsize;



 s_hash((unsigned char *)nv, n);

 H_tab = tmp;
 for (v = S_Tab[j1_spin]; v; Zh++, last=v, v=v->nxt)
 { m = memcmp(&(v->state), nv, n);
  if (m == 0)
   goto Found;
  if (m < 0)
   break;
 }



 if (warned == 0)
 {
  cpu_printf("pan: warning, stack incomplete\n");
  warned = 1;
 }

 goto done;
Found:
 ZAPS++;
 if (last)
  last->nxt = v->nxt;
 else
  S_Tab[j1_spin] = v->nxt;
 v->tagged = (unsigned) n;



 v->nxt = last = (H_el *) 0;
 for (w = Free_list; w; Fa++, last=w, w = w->nxt)
 { if ((int) w->tagged <= n)
  { if (last)
   { v->nxt = w;
    last->nxt = v;
   } else
   { v->nxt = Free_list;
    Free_list = v;
   }
   goto done;
  }
  if (!w->nxt)
  { w->nxt = v;
   goto done;
 } }
 Free_list = v;
done:



 return;
}


 void
 onstack_put(void)
 { H_el **tmp = H_tab;




  H_tab = S_Tab;
  if (h_store((char *)&now, vsize) != 0)




   Uerror("cannot happen - unstack_put");


  H_tab = tmp;
  trpt->ostate = Lstate;
  PUT++;



 }
 int
 onstack_now(void)
 { H_el *tmp;
  H_el **tmp2 = H_tab;
  char *v; int n, m = 1;





  H_tab = S_Tab;





   v = (char *) &now;
   n = vsize;






  s_hash((unsigned char *)v, n);

  H_tab = tmp2;
  for (tmp = S_Tab[j1_spin]; tmp; Zn++, tmp = tmp->nxt)
  { m = memcmp(((char *)&(tmp->state)),v,n);
   if (m <= 0)
   { Lstate = (H_el *) tmp;
    break;
  } }
  PROBE++;



  return (m == 0);
 }




void init_SS(unsigned long);

void
sinit(void)
{
 if (udmem)
 { udmem *= 1024L*1024L;
# 11332 "pan.c"
  SS = (unsigned char *) emalloc(udmem);

  b_store = bstore_mod;
 } else
 {






   SS = (unsigned char *) emalloc((1L)<<(ssize-3));


 }
}
# 11628 "pan.c"
int
h_store(char *vin, int nin)
{ H_el *ntmp;
 H_el *tmp, *olst = (H_el *) 0;
 char *v; int n, m=0;
# 11648 "pan.c"
 v = vin; n = nin;
# 11673 "pan.c"
 s_hash((unsigned char *)v, n);
# 11683 "pan.c"
 tmp = H_tab[j1_spin];
 if (!tmp)
 { tmp = grab_state(n);
# 11697 "pan.c"
    H_tab[j1_spin] = tmp;
 } else
 { for (;; hcmp++, olst = tmp, tmp = tmp->nxt)
    {






  m = memcmp(((char *)&(tmp->state)) + 0,
   v + 0, n - 0);
  if (m == 0) {



  int wasnew = 0;
# 11750 "pan.c"
  if (wasnew)
  { Lstate = (H_el *) tmp;
   tmp->tagged |= 0;
   if ((now._a_t&1)
   && (tmp->tagged&0)
   && depth > A_depth)
   {
intersect:
# 11771 "pan.c"
    return 3;
   }
# 11788 "pan.c"
   return 0;
  } else

  if ((0)?(tmp->tagged&0):tmp->tagged)
  { Lstate = (H_el *) tmp;



   if ((now._a_t&1)
   && (tmp->tagged&0)
   && depth > A_depth

   && (!fairness || now._cnt[1] <= 1)

   )
    goto intersect;
# 11820 "pan.c"
   return 2;
  }
# 11919 "pan.c"
  return 1;
        } else if (m < 0)
        {
   ntmp = grab_state(n);
# 11932 "pan.c"
   ntmp->nxt = tmp;
   if (!olst)
    H_tab[j1_spin] = ntmp;
   else
    olst->nxt = ntmp;
   tmp = ntmp;
   break;
        } else if (!tmp->nxt)
        {



   tmp->nxt = grab_state(n);
# 11954 "pan.c"
   tmp = tmp->nxt;
   break;
    } }
 }
# 11976 "pan.c"
 tmp->D = depth;
# 11998 "pan.c"
 memcpy(((char *)&(tmp->state)), v, n);

 tmp->tagged = (0)?0:(depth+1);



 Lstate = (H_el *) tmp;
# 12024 "pan.c"
 return 0;
}


void
o_hash32(unsigned char *s, int len, int h)
{ uint32_t tmp;
        int rem;

        rem = len & 3;
        len >>= 2;

        for ( ; len > 0; len--)
        { h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
                tmp = (((((uint32_t)(((const uint8_t *)(s+2))[1])) << 8) +(uint32_t)(((const uint8_t *)(s+2))[0]) ) << 11) ^ h;
                h = (h << 16) ^ tmp;
                s += 2*sizeof(uint16_t);
                h += h >> 11;
        }
        switch (rem) {
        case 3: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
                h ^= h << 16;
                h ^= s[sizeof(uint16_t)] << 18;
                h += h >> 11;
                break;
        case 2: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
                h ^= h << 11;
                h += h >> 17;
                break;
        case 1: h += *s;
                h ^= h << 10;
                h += h >> 1;
                break;
        }
        h ^= h << 3;
        h += h >> 5;
        h ^= h << 4;
        h += h >> 17;
        h ^= h << 25;
        h += h >> 6;

        K1 = h;
}
void
o_hash64(unsigned char *kb, int nbytes, int seed)
{ uint8_t *bp;
 uint64_t a, b, c, n;
 const uint64_t *k = (uint64_t *) kb;
 n = nbytes/8;

 a = 8 - (nbytes % 8);
 if (a > 0 && a < 8)
 { n++;
  bp = kb + nbytes;
  switch (a) {
  case 7: *bp++ = 0;
  case 6: *bp++ = 0;
  case 5: *bp++ = 0;
  case 4: *bp++ = 0;
  case 3: *bp++ = 0;
  case 2: *bp++ = 0;
  case 1: *bp = 0;
  case 0: break;
 } }
 a = (uint64_t) seed;
 b = HASH_CONST[HASH_NR];
 c = 0x9e3779b97f4a7c13LL;
 while (n >= 3)
 { a += k[0];
  b += k[1];
  c += k[2];
  { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
  n -= 3;
  k += 3;
 }
 c += (((uint64_t) nbytes)<<3);
 switch (n) {
 case 2: b += k[1];
 case 1: a += k[0];
 case 0: break;
 }
 { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };

 K1 = a;
}
# 12377 "pan.c"
# 1 "pan.t" 1
# 20 "pan.t"
void
settable(void)
{ Trans *T;
 Trans *settr(int, int, int, int, int, char *, int, int, int);

 trans = (Trans ***) emalloc(4*sizeof(Trans **));



 trans[2] = (Trans **) emalloc(12*sizeof(Trans *));

 T = trans[2][5] = settr(16,0,0,0,0,"IF", 0, 2, 0);
 T = T->nxt = settr(16,0,1,0,0,"IF", 0, 2, 0);
     T->nxt = settr(16,0,3,0,0,"IF", 0, 2, 0);
 trans[2][1] = settr(12,0,9,3,0,"((x<4))", 1, 2, 0);
 trans[2][2] = settr(13,0,9,1,0,"goto accept_S4", 0, 2, 0);
 trans[2][6] = settr(17,0,9,1,0,".(goto)", 0, 2, 0);
 trans[2][3] = settr(14,0,5,1,0,"(1)", 0, 2, 0);
 trans[2][4] = settr(15,0,5,1,0,"goto T0_init", 0, 2, 0);
 T = trans[2][9] = settr(20,0,0,0,0,"IF", 0, 2, 0);
     T->nxt = settr(20,0,7,0,0,"IF", 0, 2, 0);
 trans[2][7] = settr(18,0,9,4,0,"((x<4))", 1, 2, 0);
 trans[2][8] = settr(19,0,9,1,0,"goto accept_S4", 0, 2, 0);
 trans[2][10] = settr(21,0,11,1,0,".(goto)", 0, 2, 0);
 trans[2][11] = settr(22,0,0,5,5,"-end-", 0, 3500, 0);



 trans[1] = (Trans **) emalloc(7*sizeof(Trans *));

 trans[1][4] = settr(9,0,3,1,0,".(goto)", 0, 2, 0);
 T = trans[1][3] = settr(8,0,0,0,0,"DO", 0, 2, 0);
     T->nxt = settr(8,0,1,0,0,"DO", 0, 2, 0);
 trans[1][1] = settr(6,0,2,6,0,"(!((x%2)))", 1, 2, 0);
 trans[1][2] = settr(7,0,3,7,7,"x = (x/2)", 1, 2, 0);
 trans[1][5] = settr(10,0,6,1,0,"break", 0, 2, 0);
 trans[1][6] = settr(11,0,0,8,8,"-end-", 0, 3500, 0);



 trans[0] = (Trans **) emalloc(7*sizeof(Trans *));

 trans[0][4] = settr(3,0,3,1,0,".(goto)", 0, 2, 0);
 T = trans[0][3] = settr(2,0,0,0,0,"DO", 0, 2, 0);
     T->nxt = settr(2,0,1,0,0,"DO", 0, 2, 0);
 trans[0][1] = settr(0,0,2,9,0,"((x%2))", 1, 2, 0);
 trans[0][2] = settr(1,0,3,10,10,"x = ((3*x)+1)", 1, 2, 0);
 trans[0][5] = settr(4,0,6,1,0,"break", 0, 2, 0);
 trans[0][6] = settr(5,0,0,11,11,"-end-", 0, 3500, 0);

 trans[3] = (Trans **) emalloc(3*sizeof(Trans *));
 T = trans[3][0] = settr(9997,0,1,12,0,"(np_)", 1,2,0);
     T->nxt = settr(9998,0,0,13,0,"(1)", 0,2,0);
 T = trans[3][1] = settr(9999,0,1,12,0,"(np_)", 1,2,0);
}

Trans *
settr( int t_id, int a, int b, int c, int d,
 char *t, int g, int tpe0, int tpe1)
{ Trans *tmp = (Trans *) emalloc(sizeof(Trans));

 tmp->atom = a&(6|32);
 if (!g) tmp->atom |= 8;
 tmp->st = b;
 tmp->tpe[0] = tpe0;
 tmp->tpe[1] = tpe1;
 tmp->tp = t;
 tmp->t_id = t_id;
 tmp->forw = c;
 tmp->back = d;
 return tmp;
}

Trans *
cpytr(Trans *a)
{ Trans *tmp = (Trans *) emalloc(sizeof(Trans));

 int i;
 tmp->atom = a->atom;
 tmp->st = a->st;





 tmp->tpe[0] = a->tpe[0];
 tmp->tpe[1] = a->tpe[1];
 for (i = 0; i < 6; i++)
 { tmp->qu[i] = a->qu[i];
  tmp->ty[i] = a->ty[i];
 }
 tmp->tp = (char *) emalloc(strlen(a->tp)+1);
 strcpy(tmp->tp, a->tp);
 tmp->t_id = a->t_id;
 tmp->forw = a->forw;
 tmp->back = a->back;
 return tmp;
}
# 147 "pan.t"
int cnt;
# 183 "pan.t"
void
retrans(int n, int m, int is, short srcln[], unsigned char reach[], unsigned char lpstate[])

{ Trans *T0, *T1, *T2, *T3;
 Trans *T4, *T5;
 int i;
# 198 "pan.t"
 if (state_tables >= 4)
 { printf("STEP 1 %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
  return;
 }
 do {
  for (i = 1, cnt = 0; i < m; i++)
  { T2 = trans[n][i];
   T1 = T2?T2->nxt:(Trans *)0;
                for (T0 = T1; T0; T0 = T0->nxt)
                       { if (T0->st && trans[n][T0->st]
    && trans[n][T0->st]->nxt)
     break;
   }





   if (T0)
   for (T0 = T1; T0; T0 = T0->nxt)
   { T3 = trans[n][T0->st];
    if (!T3->nxt)
    { T2->nxt = cpytr(T0);
     T2 = T2->nxt;
     imed(T2, T0->st, n, i);
     continue;
    }
    do { T3 = T3->nxt;
     T2->nxt = cpytr(T3);
     T2 = T2->nxt;
     imed(T2, T0->st, n, i);
    } while (T3->nxt);
    cnt++;
   }
  }
 } while (cnt);
 if (state_tables >= 3)
 { printf("STEP 2 %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
  return;
 }
 for (i = 1; i < m; i++)
 { if (trans[n][i] && trans[n][i]->nxt)
  { T1 = trans[n][i]->nxt;




   srcln[i] = srcln[T1->st];

   if (!trans[n][T1->st]) continue;
   T0 = cpytr(trans[n][T1->st]);
   trans[n][i] = T0;
   reach[T1->st] = 1;
   imed(T0, T1->st, n, i);
   for (T1 = T1->nxt; T1; T1 = T1->nxt)
   {





    if (!trans[n][T1->st]) continue;
    T0->nxt = cpytr(trans[n][T1->st]);
    T0 = T0->nxt;
    reach[T1->st] = 1;
    imed(T0, T1->st, n, i);
 } } }
 if (state_tables >= 2)
 { printf("STEP 3 %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
  return;
 }
# 418 "pan.t"
 for (i = 1; i < m; i++)
 { T2 = trans[n][i];
  if (!T2
  || T2->nxt
  || strncmp(T2->tp, ".(goto)", 7)
  || !stopstate[n][i])
   continue;
  stopstate[n][T2->st] = 1;
 }
 if (state_tables && !verbose)
 { if (dodot)
  { char buf[256], *q = buf, *p = procname[n];
   while (*p != '\0')
   { if (*p != ':')
    { *q++ = *p;
    }
    p++;
   }
   *q = '\0';
   printf("digraph ");
   switch (Btypes[n]) {
   case I_PROC: printf("init {\n"); break;
   case N_CLAIM: printf("claim_%s {\n", buf); break;
   case E_TRACE: printf("notrace {\n"); break;
   case N_TRACE: printf("trace {\n"); break;
   default: printf("p_%s {\n", buf); break;
   }
   printf("size=\"8,10\";\n");
   printf("  GT [shape=box,style=dotted,label=\"%s\"];\n", buf);
   printf("  GT -> S%d;\n", is);
  } else
  { switch (Btypes[n]) {
   case I_PROC: printf("init\n"); break;
   case N_CLAIM: printf("claim %s\n", procname[n]); break;
   case E_TRACE: printf("notrace assertion\n"); break;
   case N_TRACE: printf("trace assertion\n"); break;
   default: printf("proctype %s\n", procname[n]); break;
  } }
  for (i = 1; i < m; i++)
  { reach[i] = 1;
  }
  tagtable(n, m, is, srcln, reach);
  if (dodot) printf("}\n");
 } else
 for (i = 1; i < m; i++)
 { int nrelse;
  if (Btypes[n] != N_CLAIM)
  { for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   { if (T0->st == i
    && strcmp(T0->tp, "(1)") == 0)
    { printf("error: proctype '%s' ",
      procname[n]);
       printf("line %d, state %d: has un",
      srcln[i], i);
     printf("conditional self-loop\n");
     pan_exit(1);
  } } }
  nrelse = 0;
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
  { if (strcmp(T0->tp, "else") == 0)
    nrelse++;
  }
  if (nrelse > 1)
  { printf("error: proctype '%s' state",
    procname[n]);
     printf(" %d, inherits %d", i, nrelse);
     printf(" 'else' stmnts\n");
   pan_exit(1);
 } }

 if (state_tables)

 do_dfs(n, m, is, srcln, reach, lpstate);

 if (!t_reverse)
 { return;
 }

 if (!state_tables && Btypes[n] != N_CLAIM)
 { for (i = 1; i < m; i++)
  { Trans *Tx = (Trans *) 0;
   Trans *Ty = (Trans *) 0;
   T1 = (Trans *) 0;
   T2 = (Trans *) 0;
   T3 = (Trans *) 0;


   T4 = T5 = T0 = trans[n][i];







   if (T4 != T0)
   { T3 = T5->nxt;
    T5->nxt = (Trans *) 0;
    Tx = T0;
    Ty = T5;
    T0 = T3;
   }



   T3 = (Trans *) 0;
   for (T5 = T0; T5; T5 = T4)
   { T4 = T5->nxt;






    if (strcmp(T5->tp, "else") == 0)
    { T3 = T5;
     T5->nxt = (Trans *) 0;
    } else
    { T5->nxt = T1;
     if (!T1) { T2 = T5; }
     T1 = T5;
   } }



   if (T2 && T3)
   { T2->nxt = T3;
   } else
   { if (T3)
    { if (!T1)
     { T1 = T3;
     } else
     { T1->nxt = T3;
   } } }


   if (Tx && Ty) { Ty->nxt = T1; T1 = Tx; }

   trans[n][i] = T1;

 } }
 if (state_tables && verbose)
 { printf("FINAL proctype %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
 }
}
void
imed(Trans *T, int v, int n, int j)
{ progstate[n][T->st] |= progstate[n][v];
 accpstate[n][T->st] |= accpstate[n][v];
 stopstate[n][T->st] |= stopstate[n][v];
 mapstate[n][j] = T->st;
}
void
tagtable(int n, int m, int is, short srcln[], unsigned char reach[])
{ Trans *z;

 if (is >= m || !trans[n][is]
 || is <= 0 || reach[is] == 0)
  return;
 reach[is] = 0;
 if (state_tables)
 for (z = trans[n][is]; z; z = z->nxt)
 { if (dodot)
   dot_crack(n, is, z);
  else
   crack(n, is, z, srcln);
 }

 for (z = trans[n][is]; z; z = z->nxt)
 {



  tagtable(n, m, z->st, srcln, reach);







 }
}

extern Trans *t_id_lkup[];

void
dfs_table(int n, int m, int is, short srcln[], unsigned char reach[], unsigned char lpstate[])
{ Trans *z;

 if (is >= m || is <= 0 || !trans[n][is])
  return;
 if ((reach[is] & (4|8|16)) != 0)
 { if ((reach[is] & (8|16)) == 16)
  { lpstate[is] = 1;
   reach[is] |= 8;
   if (state_tables && verbose)
   { printf("state %d line %d is a loopstate\n", is, srcln[is]);
  } }
  return;
 }
 reach[is] |= (4|16);
 for (z = trans[n][is]; z; z = z->nxt)
 { t_id_lkup[z->t_id] = z;



  dfs_table(n, m, z->st, srcln, reach, lpstate);







 }
 reach[is] &= ~16;
}
void
do_dfs(int n, int m, int is, short srcln[], unsigned char reach[], unsigned char lpstate[])
{ int i;
 dfs_table(n, m, is, srcln, reach, lpstate);
 for (i = 0; i < m; i++)
  reach[i] &= ~(4|8|16);
}
void
crack(int n, int j, Trans *z, short srcln[])
{ int i;

 if (!z) return;
 printf("	state %3d -(tr %3d)-> state %3d  ",
  j, z->forw, z->st);
 printf("[id %3d tp %3d", z->t_id, z->tpe[0]);
 if (z->tpe[1]) printf(",%d", z->tpe[1]);
# 665 "pan.t"
 printf("]");
 printf(" [%s%s%s%s%s] %s:%d => ",
  z->atom&6?"A":z->atom&32?"D":"-",
  accpstate[n][j]?"a" :"-",
  stopstate[n][j]?"e" : "-",
  progstate[n][j]?"p" : "-",
  z->atom & 8 ?"L":"G",
  "example.pml", srcln[j]);
 for (i = 0; z->tp[i]; i++)
  if (z->tp[i] == '\n')
   printf("\\n");
  else
   putchar(z->tp[i]);
 if (verbose && z->qu[0])
 { printf("\t[");
  for (i = 0; i < 6; i++)
   if (z->qu[i])
    printf("(%d,%d)",
    z->qu[i], z->ty[i]);
  printf("]");
 }
 printf("\n");
 fflush(
# 687 "pan.t" 3 4
       stdout
# 687 "pan.t"
             );
}

void
dot_crack(int n, int j, Trans *z)
{ int i;

 if (!z) return;
 printf("	S%d -> S%d  [color=black", j, z->st);

 if (z->atom&6) printf(",style=dashed");
 else if (z->atom&32) printf(",style=dotted");
 else if (z->atom&8) printf(",style=solid");
 else printf(",style=bold");

 printf(",label=\"");
 for (i = 0; z->tp[i]; i++)
 { if (z->tp[i] == '\\'
  && z->tp[i+1] == 'n')
  { i++; printf(" ");
  } else
  { putchar(z->tp[i]);
 } }
 printf("\"];\n");
 if (accpstate[n][j]) printf("  S%d [color=red,style=bold];\n", j);
 else if (progstate[n][j]) printf("  S%d [color=green,style=bold];\n", j);
 if (stopstate[n][j]) printf("  S%d [color=blue,style=bold,shape=box];\n", j);
}
# 12378 "pan.c" 2
void
do_reach(void)
{
 r_ck(reached0, 7, 0, src_ln0, src_file0);
 r_ck(reached1, 7, 1, src_ln1, src_file1);
 r_ck(reached2, 12, 2, src_ln2, src_file2);
}

void
iniglobals(int calling_pid)
{
  now.x = 4;



}


int
addqueue(int calling_pid, int n, int is_rv)
{ int j=0, i = now._nr_qs;



 if (i >= 255)
  Uerror("too many queues");



 switch (n) {
 default: Uerror("bad queue - addqueue");
 }






 if (vsize%8)
  q_skip[i] = 8 -(vsize%8);
 else
  q_skip[i] = 0;
# 12428 "pan.c"
 vsize += (int) q_skip[i];
 q_offset[i] = vsize;
 vsize += j;




 now._nr_qs += 1;

 now._vsz = vsize;

 hmax = (((hmax)<(vsize)) ? (vsize) : (hmax));
# 12455 "pan.c"
 if (vsize >= 1024)
  Uerror("VECTORSZ is too small, edit pan.h");

 if (j > 0)
 { memset((char *)(((unsigned char *)&now)+(int)q_offset[i]), 0, j);
 }
 ((Q0 *)(((unsigned char *)&now)+(int)q_offset[i]))->_t = n;
 return i+1;
}
# 12625 "pan.c"
int
q_len(int x)
{ if (!x--)
 uerror("ref to uninitialized chan name (len)");
 return ((Q0 *)(((unsigned char *)&now)+(int)q_offset[x]))->Qlen;
}

int
q_full(int from)
{ if (!from--)
 uerror("ref to uninitialized chan name (qfull)");
 switch(((Q0 *)(((unsigned char *)&now)+(int)q_offset[from]))->_t) {
 case 0: printf("queue %d was deleted\n", from+1);
 }
 Uerror("bad queue - q_full");
 return 0;
}
# 12718 "pan.c"
int
unsend(int into)
{ int _m=0, j; unsigned char *z;




 if (!into--)
  uerror("ref to uninitialized chan (unsend)");
# 12741 "pan.c"
 z = (((unsigned char *)&now)+(int)q_offset[into]);
 j = ((Q0 *)z)->Qlen;
 ((Q0 *)z)->Qlen = --j;
 switch (((Q0 *)(((unsigned char *)&now)+(int)q_offset[into]))->_t) {
 default: Uerror("bad queue - unsend");
 }
 return _m;
}

void
unrecv(int from, int slot, int fld, int fldvar, int strt)
{ int j; unsigned char *z;

 if (!from--)
  uerror("ref to uninitialized chan (unrecv)");
# 12770 "pan.c"
 z = (((unsigned char *)&now)+(int)q_offset[from]);
 j = ((Q0 *)z)->Qlen;
 if (strt) ((Q0 *)z)->Qlen = j+1;
 switch (((Q0 *)(((unsigned char *)&now)+(int)q_offset[from]))->_t) {
 default: Uerror("bad queue - qrecv");
 }
}
int
q_cond(short II, Trans *t)
{ int i = 0;
 for (i = 0; i < 6; i++)
 { if (t->ty[i] == 6) return 1;
  if (t->ty[i] == 9)



   return (II+1 == (short) now._nr_pr && II+1 < 255);

  switch (t->qu[i]) {
  case 0: break;
  default: Uerror("unknown qid - q_cond");
    return 0;
  }
 }
 return 1;
}
void
to_compile(void)
{ char ctd[2048], carg[128];

 strcpy(ctd, "-DBITSTATE ");
# 12865 "pan.c"
 if (2 != 2)
 { sprintf(carg, "-DNFAIR=%d ", 2);
  strcat(ctd, carg);
 }




 strcat(ctd, "-DNOREDUCE ");
# 12926 "pan.c"
 if (1024 != 1024)
 { sprintf(carg, "-DVECTORSZ=%d ", 1024);
  strcat(ctd, carg);
 }
# 12966 "pan.c"
 printf("Compiled as: cc -o pan %span.c\n", ctd);
}
void
active_procs(void)
{
 if (reversing == 0) {
  addproc(256, 1, 0);
  addproc(256, 1, 1);
 } else {
  addproc(256, 1, 1);
  addproc(256, 1, 0);
 }
}
# 14087 "pan.c"
void
c_globals(void)
{
 printf("global vars:\n");
 printf("	int    x:	%d\n", now.x);
}
void
c_locals(int pid, int tp)
{
 switch(tp) {
 case 2:

  break;
 case 1:

  break;
 case 0:

  break;
 }
}
void
printm(int x, char *s)
{
 if (!s) { s = "_unnamed_"; }
}
void
c_chandump(int unused)
{ unused++;
}

Trans *t_id_lkup[23];
