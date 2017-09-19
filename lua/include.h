typedef signed char int8_t;
typedef short int int16_t;
//typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;

typedef signed char int_least8_t;
//typedef short int int_least16_t;
//typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;

typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;

typedef long int intptr_t;


typedef unsigned long int uintptr_t;

typedef long int intmax_t;
typedef unsigned long int uintmax_t;




















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
//typedef struct { int __val[2]; } __fsid_t;
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
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;


typedef __loff_t loff_t;



typedef __ino_t ino_t;

typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;

typedef __pid_t pid_t;

typedef __ssize_t ssize_t;



typedef __time_t time_t;

typedef __clockid_t clockid_t;

typedef __timer_t timer_t;




typedef long unsigned int size_t;

/*
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
*/
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;


typedef uint32_t socklen_t;

















//extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));













//typedef __builtin_va_list va_list;

//typedef __builtin_va_list __gnuc_va_list;






struct _IO_FILE;



typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;













typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;

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


struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;




/*
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;

};
*/
/*
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
* */
/*
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

  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};

*/
typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;

typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);

extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);

extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
//extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
//extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));

extern int _IO_peekc_locked (_IO_FILE *__fp);




/*
extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));

extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ ));


typedef _G_fpos_t fpos_t;
*/





extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






/*
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));

extern FILE *tmpfile (void) ;

extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;

extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));

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

extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));

extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));

extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));

extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))



     __attribute__ ((__format__ (__scanf__, 2, 0)));

extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;

extern char *gets (char *__s) __attribute__ ((__deprecated__));

extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);

extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern void perror (const char *__s);
*/











struct mbuf;



struct pl {
 const char *p;
 size_t l;
};

extern const struct pl pl_null;

void pl_set_str(struct pl *pl, const char *str);
void pl_set_mbuf(struct pl *pl, const struct mbuf *mb);
uint32_t pl_u32(const struct pl *pl);
uint32_t pl_x32(const struct pl *pl);
uint64_t pl_u64(const struct pl *pl);
uint64_t pl_x64(const struct pl *pl);
double pl_float(const struct pl *pl);
signed char pl_isset(const struct pl *pl);
int pl_strcpy(const struct pl *pl, char *str, size_t size);
int pl_strdup(char **dst, const struct pl *src);
int pl_dup(struct pl *dst, const struct pl *src);
int pl_strcmp(const struct pl *pl, const char *str);
int pl_strcasecmp(const struct pl *pl, const char *str);
int pl_cmp(const struct pl *pl1, const struct pl *pl2);
int pl_casecmp(const struct pl *pl1, const struct pl *pl2);
const char *pl_strchr(const struct pl *pl, char c);

typedef int(re_vprintf_h)(const char *p, size_t size, void *arg);


struct re_printf {
 re_vprintf_h *vph;
 void *arg;
};


typedef int(re_printf_h)(struct re_printf *pf, void *arg);
/*
int re_vhprintf(const char *fmt, va_list ap, re_vprintf_h *vph, void *arg);
int re_vfprintf(FILE *stream, const char *fmt, va_list ap);
int re_vprintf(const char *fmt, va_list ap);
int re_vsnprintf(char *str, size_t size, const char *fmt, va_list ap);
int re_vsdprintf(char **strp, const char *fmt, va_list ap);
*/
int re_hprintf(struct re_printf *pf, const char *fmt, ...);
int re_fprintf(FILE *stream, const char *fmt, ...);
int re_printf(const char *fmt, ...);
int re_snprintf(char *str, size_t size, const char *fmt, ...);
int re_sdprintf(char **strp, const char *fmt, ...);



int re_regex(const char *ptr, size_t len, const char *expr, ...);



uint8_t ch_hex(char ch);



int str_hex(uint8_t *hex, size_t len, const char *str);
void str_ncpy(char *dst, const char *src, size_t n);
int str_dup(char **dst, const char *src);
int str_cmp(const char *s1, const char *s2);
int str_casecmp(const char *s1, const char *s2);
size_t str_len(const char *s);
const char *str_error(int errnum, char *buf, size_t sz);

int fmt_gmtime(struct re_printf *pf, void *ts);
int fmt_human_time(struct re_printf *pf, const uint32_t *seconds);


void hexdump(FILE *f, const void *p, size_t len);



typedef void (fmt_param_h)(const struct pl *name, const struct pl *val,
      void *arg);

signed char fmt_param_exists(const struct pl *pl, const char *pname);
signed char fmt_param_get(const struct pl *pl, const char *pname, struct pl *val);
void fmt_param_apply(const struct pl *pl, fmt_param_h *ph, void *arg);



int utf8_encode(struct re_printf *pf, const char *str);
int utf8_decode(struct re_printf *pf, const struct pl *pl);



struct mbuf {
 uint8_t *buf;
 size_t size;
 size_t pos;
 size_t end;
};

struct mbuf *mbuf_alloc(size_t size);
struct mbuf *mbuf_alloc_ref(struct mbuf *mbr);
void mbuf_init(struct mbuf *mb);
void mbuf_reset(struct mbuf *mb);
int mbuf_resize(struct mbuf *mb, size_t size);
void mbuf_trim(struct mbuf *mb);
int mbuf_shift(struct mbuf *mb, ssize_t shift);
int mbuf_write_mem(struct mbuf *mb, const uint8_t *buf, size_t size);
int mbuf_write_u8(struct mbuf *mb, uint8_t v);
int mbuf_write_u16(struct mbuf *mb, uint16_t v);
int mbuf_write_u32(struct mbuf *mb, uint32_t v);
int mbuf_write_u64(struct mbuf *mb, uint64_t v);
int mbuf_write_str(struct mbuf *mb, const char *str);
int mbuf_write_pl(struct mbuf *mb, const struct pl *pl);
int mbuf_read_mem(struct mbuf *mb, uint8_t *buf, size_t size);
uint8_t mbuf_read_u8(struct mbuf *mb);
uint16_t mbuf_read_u16(struct mbuf *mb);
uint32_t mbuf_read_u32(struct mbuf *mb);
uint64_t mbuf_read_u64(struct mbuf *mb);
int mbuf_read_str(struct mbuf *mb, char *str, size_t size);
int mbuf_strdup(struct mbuf *mb, char **strp, size_t len);
//int mbuf_vprintf(struct mbuf *mb, const char *fmt, va_list ap);
int mbuf_printf(struct mbuf *mb, const char *fmt, ...);
int mbuf_write_pl_skip(struct mbuf *mb, const struct pl *pl,
       const struct pl *skip);
int mbuf_fill(struct mbuf *mb, uint8_t c, size_t n);
int mbuf_debug(struct re_printf *pf, const struct mbuf *mb);

struct msg_ctype {
 struct pl type;
 struct pl subtype;
 struct pl params;
};


int msg_ctype_decode(struct msg_ctype *ctype, const struct pl *pl);
signed char msg_ctype_cmp(const struct msg_ctype *ctype,
     const char *type, const char *subtype);

int msg_param_decode(const struct pl *pl, const char *name, struct pl *val);
int msg_param_exists(const struct pl *pl, const char *name, struct pl *end);










struct le {
 struct le *prev;
 struct le *next;
 struct list *list;
 void *data;
};






struct list {
 struct le *head;
 struct le *tail;
};

typedef signed char (list_apply_h)(struct le *le, void *arg);

typedef signed char (list_sort_h)(struct le *le1, struct le *le2, void *arg);


void list_init(struct list *list);
void list_flush(struct list *list);
void list_clear(struct list *list);
void list_append(struct list *list, struct le *le, void *data);
void list_prepend(struct list *list, struct le *le, void *data);
void list_insert_before(struct list *list, struct le *le, struct le *ile,
   void *data);
void list_insert_after(struct list *list, struct le *le, struct le *ile,
         void *data);
void list_unlink(struct le *le);
void list_sort(struct list *list, list_sort_h *sh, void *arg);
struct le *list_apply(const struct list *list, signed char fwd, list_apply_h *ah,
        void *arg);
struct le *list_head(const struct list *list);
struct le *list_tail(const struct list *list);
uint32_t list_count(const struct list *list);
/*
static inline void *list_ledata(const struct le *le)
{
 return le ? le->data : ((void*)0);
}


static inline signed char list_contains(const struct list *list, const struct le *le)
{
 return le ? le->list == list : 0;
}


static inline signed char list_isempty(const struct list *list)
{
 return list ? list->head == ((void*)0) : 1;
}

*/







struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };


extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
       ;

extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
       ;














typedef __socklen_t socklen_t;







enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};




typedef unsigned short int sa_family_t;



struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
/*
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };
*/


enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    /*__extension__*/ unsigned char __cmsg_data [];

  };

//extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
//          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ ));

enum
  {
    SCM_RIGHTS = 0x01





  };













struct linger
  {
    int l_onoff;
    int l_linger;
  };


enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
/*
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ ));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ ));


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__ ));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));

extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);

extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);

extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);

extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ ));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ ));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ ));

extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);

extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ ));







*/




typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };







enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };

struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];




      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;

struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };

struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };
/*
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
*/

























//struct pl;


enum sa_flag {
 SA_ADDR = 1,
 SA_PORT = 2,
 SA_ALL = 3
};


struct sa {
 union {
  struct sockaddr sa;
  struct sockaddr_in in;



  uint8_t padding[28];
 } u;
 socklen_t len;
};


void sa_init(struct sa *sa, int af);
int sa_set(struct sa *sa, const struct pl *addr, uint16_t port);
int sa_set_str(struct sa *sa, const char *addr, uint16_t port);
void sa_set_in(struct sa *sa, uint32_t addr, uint16_t port);
void sa_set_in6(struct sa *sa, const uint8_t *addr, uint16_t port);
int sa_set_sa(struct sa *sa, const struct sockaddr *s);
void sa_set_port(struct sa *sa, uint16_t port);
int sa_decode(struct sa *sa, const char *str, size_t len);

int sa_af(const struct sa *sa);
uint32_t sa_in(const struct sa *sa);
void sa_in6(const struct sa *sa, uint8_t *addr);
int sa_ntop(const struct sa *sa, char *buf, int size);
uint16_t sa_port(const struct sa *sa);
signed char sa_isset(const struct sa *sa, int flag);
uint32_t sa_hash(const struct sa *sa, int flag);

void sa_cpy(struct sa *dst, const struct sa *src);
signed char sa_cmp(const struct sa *l, const struct sa *r, int flag);

signed char sa_is_linklocal(const struct sa *sa);
signed char sa_is_loopback(const struct sa *sa);
signed char sa_is_any(const struct sa *sa);

//struct re_printf;
int sa_print_addr(struct re_printf *pf, const struct sa *sa);





enum aes_mode {
 AES_MODE_CTR
};

struct aes;

int aes_alloc(struct aes **stp, enum aes_mode mode,
        const uint8_t *key, size_t key_bits,
        const uint8_t iv[16]);
void aes_set_iv(struct aes *aes, const uint8_t iv[16]);
int aes_encr(struct aes *aes, uint8_t *out, const uint8_t *in, size_t len);
int aes_decr(struct aes *aes, uint8_t *out, const uint8_t *in, size_t len);









int base64_encode(const uint8_t *in, size_t ilen, char *out, size_t *olen);
int base64_print(struct re_printf *pf, const uint8_t *ptr, size_t len);
int base64_decode(const char *in, size_t ilen, uint8_t *out, size_t *olen);










enum {
 BFCP_VER1 = 1,
 BFCP_VER2 = 2,
};


enum bfcp_prim {
 BFCP_FLOOR_REQUEST = 1,
 BFCP_FLOOR_RELEASE = 2,
 BFCP_FLOOR_REQUEST_QUERY = 3,
 BFCP_FLOOR_REQUEST_STATUS = 4,
 BFCP_USER_QUERY = 5,
 BFCP_USER_STATUS = 6,
 BFCP_FLOOR_QUERY = 7,
 BFCP_FLOOR_STATUS = 8,
 BFCP_CHAIR_ACTION = 9,
 BFCP_CHAIR_ACTION_ACK = 10,
 BFCP_HELLO = 11,
 BFCP_HELLO_ACK = 12,
 BFCP_ERROR = 13,
 BFCP_FLOOR_REQ_STATUS_ACK = 14,
 BFCP_FLOOR_STATUS_ACK = 15,
 BFCP_GOODBYE = 16,
 BFCP_GOODBYE_ACK = 17,
};


enum bfcp_attrib {
 BFCP_BENEFICIARY_ID = 1,
 BFCP_FLOOR_ID = 2,
 BFCP_FLOOR_REQUEST_ID = 3,
 BFCP_PRIORITY = 4,
 BFCP_REQUEST_STATUS = 5,
 BFCP_ERROR_CODE = 6,
 BFCP_ERROR_INFO = 7,
 BFCP_PART_PROV_INFO = 8,
 BFCP_STATUS_INFO = 9,
 BFCP_SUPPORTED_ATTRS = 10,
 BFCP_SUPPORTED_PRIMS = 11,
 BFCP_USER_DISP_NAME = 12,
 BFCP_USER_URI = 13,

 BFCP_BENEFICIARY_INFO = 14,
 BFCP_FLOOR_REQ_INFO = 15,
 BFCP_REQUESTED_BY_INFO = 16,
 BFCP_FLOOR_REQ_STATUS = 17,
 BFCP_OVERALL_REQ_STATUS = 18,


 BFCP_MANDATORY = 1<<7,

 BFCP_ENCODE_HANDLER = 1<<8,
};


enum bfcp_reqstat {
 BFCP_PENDING = 1,
 BFCP_ACCEPTED = 2,
 BFCP_GRANTED = 3,
 BFCP_DENIED = 4,
 BFCP_CANCELLED = 5,
 BFCP_RELEASED = 6,
 BFCP_REVOKED = 7
};


enum bfcp_err {
 BFCP_CONF_NOT_EXIST = 1,
 BFCP_USER_NOT_EXIST = 2,
 BFCP_UNKNOWN_PRIM = 3,
 BFCP_UNKNOWN_MAND_ATTR = 4,
 BFCP_UNAUTH_OPERATION = 5,
 BFCP_INVALID_FLOOR_ID = 6,
 BFCP_FLOOR_REQ_ID_NOT_EXIST = 7,
 BFCP_MAX_FLOOR_REQ_REACHED = 8,
 BFCP_USE_TLS = 9,
 BFCP_PARSE_ERROR = 10,
 BFCP_USE_DTLS = 11,
 BFCP_UNSUPPORTED_VERSION = 12,
 BFCP_BAD_LENGTH = 13,
 BFCP_GENERIC_ERROR = 14,
};


enum bfcp_priority {
 BFCP_PRIO_LOWEST = 0,
 BFCP_PRIO_LOW = 1,
 BFCP_PRIO_NORMAL = 2,
 BFCP_PRIO_HIGH = 3,
 BFCP_PRIO_HIGHEST = 4
};


enum bfcp_transp {
 BFCP_UDP,
 BFCP_DTLS,
};


struct bfcp_reqstatus {
 enum bfcp_reqstat status;
 uint8_t qpos;
};


struct bfcp_errcode {
 enum bfcp_err code;
 uint8_t *details;
 size_t len;
};


struct bfcp_supattr {
 enum bfcp_attrib *attrv;
 size_t attrc;
};


struct bfcp_supprim {
 enum bfcp_prim *primv;
 size_t primc;
};


struct bfcp_attr {
 struct le le;
 struct list attrl;
 enum bfcp_attrib type;
 signed char mand;
 
 union bfcp_union {

  char *str;
  uint16_t u16;


  uint16_t beneficiaryid;
  uint16_t floorid;
  uint16_t floorreqid;
  enum bfcp_priority priority;
  struct bfcp_reqstatus reqstatus;
  struct bfcp_errcode errcode;
  char *errinfo;
  char *partprovinfo;
  char *statusinfo;
  struct bfcp_supattr supattr;
  struct bfcp_supprim supprim;
  char *userdname;
  char *useruri;
  uint16_t reqbyid;
 } v;
};


struct bfcp_unknown_attr {
 uint8_t typev[16];
 size_t typec;
};


struct bfcp_msg {
 struct bfcp_unknown_attr uma;
 struct sa src;
 uint8_t ver;
 unsigned r:1;
 unsigned f:1;
 enum bfcp_prim prim;
 uint16_t len;
 uint32_t confid;
 uint16_t tid;
 uint16_t userid;
 struct list attrl;
};

struct tls;
struct bfcp_conn;

typedef int (bfcp_encode_h)(struct mbuf *mb, void *arg);


struct bfcp_encode {
 bfcp_encode_h *ench;
 void *arg;
};

typedef signed char (bfcp_attr_h)(const struct bfcp_attr *attr, void *arg);

typedef void (bfcp_recv_h)(const struct bfcp_msg *msg, void *arg);

typedef void (bfcp_resp_h)(int err, const struct bfcp_msg *msg, void *arg);


/*
int bfcp_attrs_vencode(struct mbuf *mb, unsigned attrc, va_list *ap);
int bfcp_attrs_encode(struct mbuf *mb, unsigned attrc, ...);
struct bfcp_attr *bfcp_attr_subattr(const struct bfcp_attr *attr,
        enum bfcp_attrib type);
struct bfcp_attr *bfcp_attr_subattr_apply(const struct bfcp_attr *attr,
       bfcp_attr_h *h, void *arg);
int bfcp_attr_print(struct re_printf *pf, const struct bfcp_attr *attr);
const char *bfcp_attr_name(enum bfcp_attrib type);
const char *bfcp_reqstatus_name(enum bfcp_reqstat status);
const char *bfcp_errcode_name(enum bfcp_err code);



int bfcp_msg_vencode(struct mbuf *mb, uint8_t ver, signed char r, enum bfcp_prim prim,
       uint32_t confid, uint16_t tid, uint16_t userid,
       unsigned attrc, va_list *ap);
int bfcp_msg_encode(struct mbuf *mb, uint8_t ver, signed char r, enum bfcp_prim prim,
      uint32_t confid, uint16_t tid, uint16_t userid,
      unsigned attrc, ...);
int bfcp_msg_decode(struct bfcp_msg **msgp, struct mbuf *mb);
struct bfcp_attr *bfcp_msg_attr(const struct bfcp_msg *msg,
    enum bfcp_attrib type);
struct bfcp_attr *bfcp_msg_attr_apply(const struct bfcp_msg *msg,
          bfcp_attr_h *h, void *arg);
int bfcp_msg_print(struct re_printf *pf, const struct bfcp_msg *msg);
const char *bfcp_prim_name(enum bfcp_prim prim);


*/
int bfcp_listen(struct bfcp_conn **bcp, enum bfcp_transp tp, struct sa *laddr,
  struct tls *tls, bfcp_recv_h *recvh, void *arg);
void *bfcp_sock(const struct bfcp_conn *bc);



int bfcp_request(struct bfcp_conn *bc, const struct sa *dst, uint8_t ver,
   enum bfcp_prim prim, uint32_t confid, uint16_t userid,
   bfcp_resp_h *resph, void *arg, unsigned attrc, ...);



int bfcp_notify(struct bfcp_conn *bc, const struct sa *dst, uint8_t ver,
  enum bfcp_prim prim, uint32_t confid, uint16_t userid,
  unsigned attrc, ...);



int bfcp_reply(struct bfcp_conn *bc, const struct bfcp_msg *req,
        enum bfcp_prim prim, unsigned attrc, ...);
int bfcp_edreply(struct bfcp_conn *bc, const struct bfcp_msg *req,
   enum bfcp_err code, const uint8_t *details, size_t len);
int bfcp_ereply(struct bfcp_conn *bc, const struct bfcp_msg *req,
  enum bfcp_err code);









struct conf;

typedef int (conf_h)(const struct pl *val, void *arg);

int conf_alloc(struct conf **confp, const char *filename);
int conf_alloc_buf(struct conf **confp, const uint8_t *buf, size_t sz);
int conf_get(const struct conf *conf, const char *name, struct pl *pl);
int conf_get_str(const struct conf *conf, const char *name, char *str,
   size_t size);
int conf_get_u32(const struct conf *conf, const char *name, uint32_t *num);
int conf_get_bool(const struct conf *conf, const char *name, signed char *val);
int conf_apply(const struct conf *conf, const char *name,
        conf_h *ch, void *arg);



uint32_t crc32(uint32_t crc, const void *buf, uint32_t size);









enum {
 DNS_PORT = 53,
 DNS_HEADER_SIZE = 12
};



enum {
 DNS_OPCODE_QUERY = 0,
 DNS_OPCODE_IQUERY = 1,
 DNS_OPCODE_STATUS = 2,
 DNS_OPCODE_NOTIFY = 4
};



enum {
 DNS_RCODE_OK = 0,
 DNS_RCODE_FMT_ERR = 1,
 DNS_RCODE_SRV_FAIL = 2,
 DNS_RCODE_NAME_ERR = 3,
 DNS_RCODE_NOT_IMPL = 4,
 DNS_RCODE_REFUSED = 5,
 DNS_RCODE_NOT_AUTH = 9
};



enum {
 DNS_TYPE_A = 0x0001,
 DNS_TYPE_NS = 0x0002,
 DNS_TYPE_CNAME = 0x0005,
 DNS_TYPE_SOA = 0x0006,
 DNS_TYPE_PTR = 0x000c,
 DNS_TYPE_MX = 0x000f,
 DNS_TYPE_AAAA = 0x001c,
 DNS_TYPE_SRV = 0x0021,
 DNS_TYPE_NAPTR = 0x0023,
 DNS_QTYPE_IXFR = 0x00fb,
 DNS_QTYPE_AXFR = 0x00fc,
 DNS_QTYPE_ANY = 0x00ff
};



enum {
 DNS_CLASS_IN = 0x0001,
 DNS_QCLASS_ANY = 0x00ff
};



struct dnshdr {
 uint16_t id;
 signed char qr;
 uint8_t opcode;
 signed char aa;
 signed char tc;
 signed char rd;
 signed char ra;
 uint8_t z;
 uint8_t rcode;
 uint16_t nq;
 uint16_t nans;
 uint16_t nauth;
 uint16_t nadd;
};



struct dnsrr {
 struct le le;
 struct le le_priv;
 char *name;
 uint16_t type;
 uint16_t dnsclass;
 int64_t ttl;
 uint16_t rdlen;
 union {
  struct {
   uint32_t addr;
  } a;
  struct {
   char *nsdname;
  } ns;
  struct {
   char *cname;
  } cname;
  struct {
   char *mname;
   char *rname;
   uint32_t serial;
   uint32_t refresh;
   uint32_t retry;
   uint32_t expire;
   uint32_t ttlmin;
  } soa;
  struct {
   char *ptrdname;
  } ptr;
  struct {
   uint16_t pref;
   char *exchange;
  } mx;
  struct {
   uint8_t addr[16];
  } aaaa;
  struct {
   uint16_t pri;
   uint16_t weight;
   uint16_t port;
   char *target;
  } srv;
  struct {
   uint16_t order;
   uint16_t pref;
   char *flags;
   char *services;
   char *regexp;
   char *replace;
  } naptr;
 } rdata;
};

struct hash;

typedef void(dns_query_h)(int err, const struct dnshdr *hdr,
     struct list *ansl, struct list *authl,
     struct list *addl, void *arg);

typedef signed char(dns_rrlist_h)(struct dnsrr *rr, void *arg);

int dns_hdr_encode(struct mbuf *mb, const struct dnshdr *hdr);
int dns_hdr_decode(struct mbuf *mb, struct dnshdr *hdr);
const char *dns_hdr_opcodename(uint8_t opcode);
const char *dns_hdr_rcodename(uint8_t rcode);
struct dnsrr *dns_rr_alloc(void);
int dns_rr_encode(struct mbuf *mb, const struct dnsrr *rr, int64_t ttl_offs,
     struct hash *ht_dname, size_t start);
int dns_rr_decode(struct mbuf *mb, struct dnsrr **rr, size_t start);
signed char dns_rr_cmp(const struct dnsrr *rr1, const struct dnsrr *rr2, signed char rdata);
const char *dns_rr_typename(uint16_t type);
const char *dns_rr_classname(uint16_t dnsclass);
int dns_rr_print(struct re_printf *pf, const struct dnsrr *rr);
int dns_dname_encode(struct mbuf *mb, const char *name,
        struct hash *ht_dname, size_t start, signed char comp);
int dns_dname_decode(struct mbuf *mb, char **name, size_t start);
int dns_cstr_encode(struct mbuf *mb, const char *str);
int dns_cstr_decode(struct mbuf *mb, char **str);
void dns_rrlist_sort(struct list *rrl, uint16_t type, size_t key);
void dns_rrlist_sort_addr(struct list *rrl, size_t key);
struct dnsrr *dns_rrlist_apply(struct list *rrl, const char *name,
          uint16_t type, uint16_t dnsclass,
          signed char recurse, dns_rrlist_h *rrlh, void *arg);
struct dnsrr *dns_rrlist_apply2(struct list *rrl, const char *name,
    uint16_t type1, uint16_t type2,
    uint16_t dnsclass, signed char recurse,
    dns_rrlist_h *rrlh, void *arg);
struct dnsrr *dns_rrlist_find(struct list *rrl, const char *name,
         uint16_t type, uint16_t dnsclass, signed char recurse);



struct sa;
struct dnsc;
struct dns_query;


struct dnsc_conf {
 uint32_t query_hash_size;
 uint32_t tcp_hash_size;
 uint32_t conn_timeout;
 uint32_t idle_timeout;
};

int dnsc_alloc(struct dnsc **dcpp, const struct dnsc_conf *conf,
  const struct sa *srvv, uint32_t srvc);
int dnsc_srv_set(struct dnsc *dnsc, const struct sa *srvv, uint32_t srvc);
int dnsc_query(struct dns_query **qp, struct dnsc *dnsc, const char *name,
  uint16_t type, uint16_t dnsclass,
  signed char rd, dns_query_h *qh, void *arg);
int dnsc_query_srv(struct dns_query **qp, struct dnsc *dnsc, const char *name,
      uint16_t type, uint16_t dnsclass, int proto,
      const struct sa *srvv, const uint32_t *srvc,
      signed char rd, dns_query_h *qh, void *arg);
int dnsc_notify(struct dns_query **qp, struct dnsc *dnsc, const char *name,
   uint16_t type, uint16_t dnsclass, const struct dnsrr *ans_rr,
   int proto, const struct sa *srvv, const uint32_t *srvc,
   dns_query_h *qh, void *arg);



int dns_srv_get(char *domain, size_t dsize, struct sa *srvv, uint32_t *n);









struct hash;
//struct pl;


int hash_alloc(struct hash **hp, uint32_t bsize);
void hash_append(struct hash *h, uint32_t key, struct le *le, void *data);
void hash_unlink(struct le *le);
struct le *hash_lookup(const struct hash *h, uint32_t key, list_apply_h *ah,
         void *arg);
struct le *hash_apply(const struct hash *h, list_apply_h *ah, void *arg);
struct list *hash_list(const struct hash *h, uint32_t key);
uint32_t hash_bsize(const struct hash *h);
void hash_flush(struct hash *h);
void hash_clear(struct hash *h);
uint32_t hash_valid_size(uint32_t size);



uint32_t hash_joaat(const uint8_t *key, size_t len);
uint32_t hash_joaat_ci(const char *str, size_t len);
uint32_t hash_joaat_str(const char *str);
uint32_t hash_joaat_str_ci(const char *str);
uint32_t hash_joaat_pl(const struct pl *pl);
uint32_t hash_joaat_pl_ci(const struct pl *pl);
uint32_t hash_fast(const char *k, size_t len);
uint32_t hash_fast_str(const char *str);









void hmac_sha1(const uint8_t *k,
        size_t lk,
        const uint8_t *d,
        size_t ld,
        uint8_t* out,
        size_t t);


enum hmac_hash {
 HMAC_HASH_SHA1,
 HMAC_HASH_SHA256
};

struct hmac;

int hmac_create(struct hmac **hmacp, enum hmac_hash hash,
   const uint8_t *key, size_t key_len);
int hmac_digest(struct hmac *hmac, uint8_t *md, size_t md_len,
   const uint8_t *data, size_t data_len);










enum http_hdrid {
 HTTP_HDR_ACCEPT = 3186,
 HTTP_HDR_ACCEPT_CHARSET = 24,
 HTTP_HDR_ACCEPT_ENCODING = 708,
 HTTP_HDR_ACCEPT_LANGUAGE = 2867,
 HTTP_HDR_ACCEPT_RANGES = 3027,
 HTTP_HDR_AGE = 742,
 HTTP_HDR_ALLOW = 2429,
 HTTP_HDR_AUTHORIZATION = 2503,
 HTTP_HDR_CACHE_CONTROL = 2530,
 HTTP_HDR_CONNECTION = 865,
 HTTP_HDR_CONTENT_ENCODING = 580,
 HTTP_HDR_CONTENT_LANGUAGE = 3371,
 HTTP_HDR_CONTENT_LENGTH = 3861,
 HTTP_HDR_CONTENT_LOCATION = 3927,
 HTTP_HDR_CONTENT_MD5 = 406,
 HTTP_HDR_CONTENT_RANGE = 2846,
 HTTP_HDR_CONTENT_TYPE = 809,
 HTTP_HDR_DATE = 1027,
 HTTP_HDR_ETAG = 2392,
 HTTP_HDR_EXPECT = 1550,
 HTTP_HDR_EXPIRES = 1983,
 HTTP_HDR_FROM = 1963,
 HTTP_HDR_HOST = 3191,
 HTTP_HDR_IF_MATCH = 2684,
 HTTP_HDR_IF_MODIFIED_SINCE = 2187,
 HTTP_HDR_IF_NONE_MATCH = 4030,
 HTTP_HDR_IF_RANGE = 2220,
 HTTP_HDR_IF_UNMODIFIED_SINCE = 962,
 HTTP_HDR_LAST_MODIFIED = 2946,
 HTTP_HDR_LOCATION = 2514,
 HTTP_HDR_MAX_FORWARDS = 3549,
 HTTP_HDR_PRAGMA = 1673,
 HTTP_HDR_PROXY_AUTHENTICATE = 116,
 HTTP_HDR_PROXY_AUTHORIZATION = 2363,
 HTTP_HDR_RANGE = 4004,
 HTTP_HDR_REFERER = 2991,
 HTTP_HDR_RETRY_AFTER = 409,
 HTTP_HDR_SEC_WEBSOCKET_ACCEPT = 2959,
 HTTP_HDR_SEC_WEBSOCKET_EXTENSIONS = 2937,
 HTTP_HDR_SEC_WEBSOCKET_KEY = 746,
 HTTP_HDR_SEC_WEBSOCKET_PROTOCOL = 2076,
 HTTP_HDR_SEC_WEBSOCKET_VERSION = 3158,
 HTTP_HDR_SERVER = 973,
 HTTP_HDR_TE = 2035,
 HTTP_HDR_TRAILER = 2577,
 HTTP_HDR_TRANSFER_ENCODING = 2115,
 HTTP_HDR_UPGRADE = 717,
 HTTP_HDR_USER_AGENT = 4064,
 HTTP_HDR_VARY = 3076,
 HTTP_HDR_VIA = 3961,
 HTTP_HDR_WARNING = 2108,
 HTTP_HDR_WWW_AUTHENTICATE = 2763,

 HTTP_HDR_NONE = -1
};



struct http_hdr {
 struct le le;
 struct pl name;
 struct pl val;
 enum http_hdrid id;
};


struct http_msg {
 struct pl ver;
 struct pl met;
 struct pl path;
 struct pl prm;
 uint16_t scode;
 struct pl reason;
 struct list hdrl;
 struct msg_ctype ctyp;
 struct mbuf *mb;
 uint32_t clen;
};

typedef signed char(http_hdr_h)(const struct http_hdr *hdr, void *arg);

int http_msg_decode(struct http_msg **msgp, struct mbuf *mb, signed char req);


const struct http_hdr *http_msg_hdr(const struct http_msg *msg,
        enum http_hdrid id);
const struct http_hdr *http_msg_hdr_apply(const struct http_msg *msg,
       signed char fwd, enum http_hdrid id,
       http_hdr_h *h, void *arg);
const struct http_hdr *http_msg_xhdr(const struct http_msg *msg,
         const char *name);
const struct http_hdr *http_msg_xhdr_apply(const struct http_msg *msg,
        signed char fwd, const char *name,
        http_hdr_h *h, void *arg);
uint32_t http_msg_hdr_count(const struct http_msg *msg, enum http_hdrid id);
uint32_t http_msg_xhdr_count(const struct http_msg *msg, const char *name);
signed char http_msg_hdr_has_value(const struct http_msg *msg, enum http_hdrid id,
       const char *value);
signed char http_msg_xhdr_has_value(const struct http_msg *msg, const char *name,
        const char *value);
int http_msg_print(struct re_printf *pf, const struct http_msg *msg);



struct http_cli;
struct http_req;
struct dnsc;

typedef void (http_resp_h)(int err, const struct http_msg *msg, void *arg);
typedef void (http_data_h)(struct mbuf *mb, void *arg);

int http_client_alloc(struct http_cli **clip, struct dnsc *dnsc);
int http_request(struct http_req **reqp, struct http_cli *cli, const char *met,
   const char *uri, http_resp_h *resph, http_data_h *datah,
   void *arg, const char *fmt, ...);
struct tcp_conn *http_req_tcp(struct http_req *req);
struct tls_conn *http_req_tls(struct http_req *req);



struct http_sock;
struct http_conn;

typedef void (http_req_h)(struct http_conn *conn, const struct http_msg *msg,
     void *arg);

int http_listen(struct http_sock **sockp, const struct sa *laddr,
   http_req_h *reqh, void *arg);
int https_listen(struct http_sock **sockp, const struct sa *laddr,
    const char *cert, http_req_h *reqh, void *arg);
struct tcp_sock *http_sock_tcp(struct http_sock *sock);
const struct sa *http_conn_peer(const struct http_conn *conn);
struct tcp_conn *http_conn_tcp(struct http_conn *conn);
struct tls_conn *http_conn_tls(struct http_conn *conn);
void http_conn_close(struct http_conn *conn);
int http_reply(struct http_conn *conn, uint16_t scode, const char *reason,
  const char *fmt, ...);
int http_creply(struct http_conn *conn, uint16_t scode, const char *reason,
   const char *ctype, const char *fmt, ...);
int http_ereply(struct http_conn *conn, uint16_t scode, const char *reason);



struct http_auth {
 const char *realm;
 signed char stale;
};

typedef int (http_auth_h)(const struct pl *username, uint8_t *ha1, void *arg);

int http_auth_print_challenge(struct re_printf *pf,
          const struct http_auth *auth);
signed char http_auth_check(const struct pl *hval, const struct pl *method,
       struct http_auth *auth, http_auth_h *authh, void *arg);
signed char http_auth_check_request(const struct http_msg *msg,
        struct http_auth *auth,
        http_auth_h *authh, void *arg);










struct httpauth_digest_chall {
 struct pl realm;
 struct pl nonce;


 struct pl opaque;
 struct pl stale;
 struct pl algorithm;
 struct pl qop;
};


struct httpauth_digest_resp {
 struct pl realm;
 struct pl nonce;
 struct pl response;
 struct pl username;
 struct pl uri;


 struct pl nc;
 struct pl cnonce;
 struct pl qop;
};


int httpauth_digest_challenge_decode(struct httpauth_digest_chall *chall,
         const struct pl *hval);
int httpauth_digest_response_decode(struct httpauth_digest_resp *resp,
        const struct pl *hval);
int httpauth_digest_response_auth(const struct httpauth_digest_resp *resp,
      const struct pl *method, const uint8_t *ha1);










enum ice_mode {
 ICE_MODE_FULL,
 ICE_MODE_LITE
};


enum ice_role {
 ICE_ROLE_UNKNOWN = 0,
 ICE_ROLE_CONTROLLING,
 ICE_ROLE_CONTROLLED
};


enum ice_compid {
 ICE_COMPID_RTP = 1,
 ICE_COMPID_RTCP = 2
};


enum ice_nomination {
 ICE_NOMINATION_REGULAR = 0,
 ICE_NOMINATION_AGGRESSIVE
};


enum ice_cand_type {
 ICE_CAND_TYPE_HOST,
 ICE_CAND_TYPE_SRFLX,
 ICE_CAND_TYPE_PRFLX,
 ICE_CAND_TYPE_RELAY
};


enum ice_tcptype {
 ICE_TCP_ACTIVE,
 ICE_TCP_PASSIVE,
 ICE_TCP_SO
};


enum ice_candpair_state {
 ICE_CANDPAIR_FROZEN = 0,
 ICE_CANDPAIR_WAITING,
 ICE_CANDPAIR_INPROGRESS,
 ICE_CANDPAIR_SUCCEEDED,
 ICE_CANDPAIR_FAILED
};

struct ice;
struct icem;
struct turnc;


struct ice_conf {
 enum ice_nomination nom;
 uint32_t rto;
 uint32_t rc;
 signed char debug;
};

typedef void (ice_connchk_h)(int err, signed char update, void *arg);



int icem_alloc(struct icem **icemp, enum ice_mode mode,
  enum ice_role role, int proto, int layer,
  uint64_t tiebrk, const char *lufrag, const char *lpwd,
  ice_connchk_h *chkh, void *arg);
struct ice_conf *icem_conf(struct icem *icem);
enum ice_role icem_local_role(const struct icem *icem);
void icem_set_conf(struct icem *icem, const struct ice_conf *conf);
void icem_set_role(struct icem *icem, enum ice_role role);
void icem_set_name(struct icem *icem, const char *name);
int icem_comp_add(struct icem *icem, unsigned compid, void *sock);
int icem_cand_add(struct icem *icem, unsigned compid, uint16_t lprio,
     const char *ifname, const struct sa *addr);

int icem_lite_set_default_candidates(struct icem *icem);
signed char icem_verify_support(struct icem *icem, unsigned compid,
    const struct sa *raddr);
int icem_conncheck_start(struct icem *icem);
void icem_conncheck_stop(struct icem *icem, int err);
int icem_add_chan(struct icem *icem, unsigned compid, const struct sa *raddr);
signed char icem_mismatch(const struct icem *icem);
void icem_update(struct icem *icem);
int ice_sdp_decode(struct icem *ice, const char *name, const char *value);
int icem_sdp_decode(struct icem *icem, const char *name, const char *value);
int icem_debug(struct re_printf *pf, const struct icem *icem);
struct list *icem_lcandl(const struct icem *icem);
struct list *icem_rcandl(const struct icem *icem);
struct list *icem_checkl(const struct icem *icem);
struct list *icem_validl(const struct icem *icem);
const struct sa *icem_cand_default(struct icem *icem, unsigned compid);
const struct sa *icem_selected_laddr(const struct icem *icem, unsigned compid);
void ice_candpair_set_states(struct icem *icem);
void icem_cand_redund_elim(struct icem *icem);
int icem_comps_set_default_cand(struct icem *icem);
struct stun *icem_stun(struct icem *icem);
int icem_set_turn_client(struct icem *icem, unsigned compid,
    struct turnc *turnc);


struct ice_cand;
signed char ice_remotecands_avail(const struct icem *icem);
int ice_cand_encode(struct re_printf *pf, const struct ice_cand *cand);
int ice_remotecands_encode(struct re_printf *pf, const struct icem *icem);
struct ice_cand *icem_cand_find(const struct list *lst, unsigned compid,
    const struct sa *addr);
int icem_lcand_add(struct icem *icem, struct ice_cand *base,
     enum ice_cand_type type,
     const struct sa *addr);
struct ice_cand *icem_lcand_base(struct ice_cand *lcand);
const struct sa *icem_lcand_addr(const struct ice_cand *cand);


extern const char ice_attr_cand[];
extern const char ice_attr_lite[];
extern const char ice_attr_mismatch[];
extern const char ice_attr_pwd[];
extern const char ice_attr_remote_cand[];
extern const char ice_attr_ufrag[];


const char *ice_cand_type2name(enum ice_cand_type type);
enum ice_cand_type ice_cand_name2type(const char *name);
const char *ice_role2name(enum ice_role role);
const char *ice_candpair_state2name(enum ice_candpair_state st);


uint32_t ice_cand_calc_prio(enum ice_cand_type type, uint16_t local,
       unsigned compid);



struct ice_cand_attr {
 char foundation[32];
 unsigned compid;
 int proto;
 uint32_t prio;
 struct sa addr;
 enum ice_cand_type type;
 struct sa rel_addr;
 enum ice_tcptype tcptype;
};

int ice_cand_attr_encode(struct re_printf *pf,
    const struct ice_cand_attr *cand);
int ice_cand_attr_decode(struct ice_cand_attr *cand, const char *val);







struct jbuf;
struct rtp_header;


struct jbuf_stat {
 uint32_t n_put;
 uint32_t n_get;
 uint32_t n_oos;
 uint32_t n_dups;
 uint32_t n_late;
 uint32_t n_lost;
 uint32_t n_overflow;
 uint32_t n_underflow;
 uint32_t n_flush;
};


int jbuf_alloc(struct jbuf **jbp, uint32_t min, uint32_t max);
int jbuf_put(struct jbuf *jb, const struct rtp_header *hdr, void *mem);
int jbuf_get(struct jbuf *jb, struct rtp_header *hdr, void **mem);
void jbuf_flush(struct jbuf *jb);
int jbuf_stats(const struct jbuf *jb, struct jbuf_stat *jstat);
int jbuf_debug(struct re_printf *pf, const struct jbuf *jb);









struct lock;

int lock_alloc(struct lock **lp);

void lock_read_get(struct lock *l);
void lock_write_get(struct lock *l);

int lock_read_try(struct lock *l);
int lock_write_try(struct lock *l);

void lock_rel(struct lock *l);









enum {

 FD_READ = 1,


 FD_WRITE = 2,

 FD_EXCEPT = 4
};

typedef void (fd_h)(int flags, void *arg);






typedef void (re_signal_h)(int sig);


int fd_listen(int fd, int flags, fd_h *fh, void *arg);
void fd_close(int fd);
int fd_setsize(int maxfds);
void fd_debug(void);

int libre_init(void);
void libre_close(void);

int re_main(re_signal_h *signalh);
void re_cancel(void);
int re_debug(struct re_printf *pf, void *unused);

int re_thread_init(void);
void re_thread_close(void);
void re_thread_enter(void);
void re_thread_leave(void);

void re_set_mutex(void *mutexp);



enum poll_method {
 METHOD_NULL = 0,
 METHOD_POLL,
 METHOD_SELECT,
 METHOD_EPOLL,
 METHOD_KQUEUE,

 METHOD_MAX
};

int poll_method_set(enum poll_method method);
enum poll_method poll_method_best(void);
const char *poll_method_name(enum poll_method method);
int poll_method_type(enum poll_method *method, const struct pl *name);










enum {
 MD5_SIZE = 16,
 MD5_STR_SIZE = 33
};

void md5(const uint8_t *d, size_t n, uint8_t *md);
int md5_printf(uint8_t *md, const char *fmt, ...);



typedef void (mem_destroy_h)(void *data);


struct memstat {
 size_t bytes_cur;
 size_t bytes_peak;
 size_t blocks_cur;
 size_t blocks_peak;
 size_t size_min;
 size_t size_max;
};

void *mem_alloc(size_t size, mem_destroy_h *dh);
void *mem_zalloc(size_t size, mem_destroy_h *dh);
void *mem_realloc(void *data, size_t size);
void *mem_reallocarray(void *ptr, size_t nmemb,
     size_t membsize, mem_destroy_h *dh);
void *mem_ref(void *data);
void *mem_deref(void *data);
uint32_t mem_nrefs(const void *data);

void mem_debug(void);
void mem_threshold_set(ssize_t n);
//struct re_printf;
int mem_status(struct re_printf *pf, void *unused);
int mem_get_stat(struct memstat *mstat);



typedef int (mod_init_h)(void);






typedef int (mod_close_h)(void);


struct mod;
//struct re_printf;



struct mod_export {
 const char *name;
 const char *type;
 mod_init_h *init;
 mod_close_h *close;
};




void mod_init(void);
void mod_close(void);

int mod_load(struct mod **mp, const char *name);
int mod_add(struct mod **mp, const struct mod_export *me);
struct mod *mod_find(const char *name);
const struct mod_export *mod_export(const struct mod *m);
struct list *mod_list(void);
int mod_debug(struct re_printf *pf, void *unused);








struct mqueue;

typedef void (mqueue_h)(int id, void *data, void *arg);

int mqueue_alloc(struct mqueue **mqp, mqueue_h *h, void *arg);
int mqueue_push(struct mqueue *mq, int id, void *data);




/*
extern in_addr_t inet_addr (const char *__cp) __attribute__ ((__nothrow__ ));


extern in_addr_t inet_lnaof (struct in_addr __in) __attribute__ ((__nothrow__ ));



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     __attribute__ ((__nothrow__ ));


extern in_addr_t inet_netof (struct in_addr __in) __attribute__ ((__nothrow__ ));



extern in_addr_t inet_network (const char *__cp) __attribute__ ((__nothrow__ ));



extern char *inet_ntoa (struct in_addr __in) __attribute__ ((__nothrow__ ));




extern int inet_pton (int __af, const char *__restrict __cp,
        void *__restrict __buf) __attribute__ ((__nothrow__ ));




extern const char *inet_ntop (int __af, const void *__restrict __cp,
         char *__restrict __buf, socklen_t __len)
     __attribute__ ((__nothrow__ ));

*/
struct sa;



int net_hostaddr(int af, struct sa *ip);
int net_default_source_addr_get(int af, struct sa *ip);
int net_default_gateway_get(int af, struct sa *gw);



int net_sock_init(void);
void net_sock_close(void);



int net_sockopt_blocking_set(int fd, signed char blocking);
int net_sockopt_reuse_set(int fd, signed char reuse);

typedef signed char (net_ifaddr_h)(const char *ifname, const struct sa *sa,
       void *arg);

int net_if_getname(char *ifname, size_t sz, int af, const struct sa *ip);
int net_if_getaddr(const char *ifname, int af, struct sa *ip);
int net_if_getaddr4(const char *ifname, int af, struct sa *ip);
int net_if_list(net_ifaddr_h *ifh, void *arg);
int net_if_apply(net_ifaddr_h *ifh, void *arg);
int net_if_debug(struct re_printf *pf, void *unused);
int net_if_getlinklocal(const char *ifname, int af, struct sa *ip);



int net_getifaddrs(net_ifaddr_h *ifh, void *arg);

typedef signed char (net_rt_h)(const char *ifname, const struct sa *dst,
   int dstlen, const struct sa *gw, void *arg);

int net_rt_list(net_rt_h *rth, void *arg);
int net_rt_default_get(int af, char *ifname, size_t size);
int net_rt_debug(struct re_printf *pf, void *unused);

typedef void (net_conn_h)(int err, uint32_t id);

int net_conn_start(net_conn_h *ch, uint32_t id, signed char prompt);
void net_conn_stop(void);



const char *net_proto2name(int proto);
const char *net_af2name(int af);








enum odict_type {
 ODICT_OBJECT,
 ODICT_ARRAY,
 ODICT_STRING,
 ODICT_INT,
 ODICT_DOUBLE,
 ODICT_BOOL,
 ODICT_NULL,
};

struct odict {
 struct list lst;
 struct hash *ht;
};

struct odict_entry {
 struct le le, he;
 char *key;
 union {
  struct odict *odict;
  char *str;
  int64_t integer;
  double dbl;
  signed char boolean;
 } u;
 enum odict_type type;
};

int odict_alloc(struct odict **op, uint32_t hash_size);
const struct odict_entry *odict_lookup(const struct odict *o, const char *key);
size_t odict_count(const struct odict *o, signed char nested);
int odict_debug(struct re_printf *pf, const struct odict *o);

int odict_entry_add(struct odict *o, const char *key,
      enum odict_type type, ...);
void odict_entry_del(struct odict *o, const char *key);
int odict_entry_debug(struct re_printf *pf, const struct odict_entry *e);

signed char odict_type_iscontainer(enum odict_type type);
signed char odict_type_isreal(enum odict_type type);
const char *odict_type_name(enum odict_type type);








enum json_typ {
 JSON_STRING,
 JSON_INT,
 JSON_DOUBLE,
 JSON_BOOL,
 JSON_NULL,
};

struct json_value {
 union {
  char *str;
  int64_t integer;
  double dbl;
  signed char boolean;
 } v;
 enum json_typ type;
};

struct json_handlers;

typedef int (json_object_entry_h)(const char *name,
      const struct json_value *value, void *arg);
typedef int (json_array_entry_h)(unsigned idx,
     const struct json_value *value, void *arg);
typedef int (json_object_h)(const char *name, unsigned idx,
       struct json_handlers *h);
typedef int (json_array_h)(const char *name, unsigned idx,
      struct json_handlers *h);

struct json_handlers {
 json_object_h *oh;
 json_array_h *ah;
 json_object_entry_h *oeh;
 json_array_entry_h *aeh;
 void *arg;
};

int json_decode(const char *str, size_t len, unsigned maxdepth,
  json_object_h *oh, json_array_h *ah,
  json_object_entry_h *oeh, json_array_entry_h *aeh, void *arg);

int json_decode_odict(struct odict **op, uint32_t hash_size, const char *str,
        size_t len, unsigned maxdepth);
int json_encode_odict(struct re_printf *pf, const struct odict *o);










enum {
 RTP_VERSION = 2,
 RTCP_VERSION = 2,
 RTP_HEADER_SIZE = 12
};



struct rtp_header {
 uint8_t ver;
 signed char pad;
 signed char ext;
 uint8_t cc;
 signed char m;
 uint8_t pt;
 uint16_t seq;
 uint32_t ts;
 uint32_t ssrc;
 uint32_t csrc[16];
 struct {
  uint16_t type;
  uint16_t len;
 } x;
};


enum rtcp_type {
 RTCP_FIR = 192,
 RTCP_NACK = 193,
 RTCP_SR = 200,
 RTCP_RR = 201,
 RTCP_SDES = 202,
 RTCP_BYE = 203,
 RTCP_APP = 204,
 RTCP_RTPFB = 205,
 RTCP_PSFB = 206,
 RTCP_XR = 207,
 RTCP_AVB = 208,
};


enum rtcp_sdes_type {
 RTCP_SDES_END = 0,
 RTCP_SDES_CNAME = 1,
 RTCP_SDES_NAME = 2,
 RTCP_SDES_EMAIL = 3,
 RTCP_SDES_PHONE = 4,
 RTCP_SDES_LOC = 5,
 RTCP_SDES_TOOL = 6,
 RTCP_SDES_NOTE = 7,
 RTCP_SDES_PRIV = 8
};


enum rtcp_rtpfb {
 RTCP_RTPFB_GNACK = 1
};


enum rtcp_psfb {
 RTCP_PSFB_PLI = 1,
 RTCP_PSFB_SLI = 2,
 RTCP_PSFB_AFB = 15,
};


struct rtcp_rr {
 uint32_t ssrc;
 unsigned int fraction:8;
 int lost:24;
 uint32_t last_seq;
 uint32_t jitter;
 uint32_t lsr;
 uint32_t dlsr;
};


struct rtcp_sdes_item {
 enum rtcp_sdes_type type;
 uint8_t length;
 char *data;
};


struct rtcp_msg {

 struct rtcp_hdr {
  unsigned int version:2;
  unsigned int p:1;
  unsigned int count:5;
  unsigned int pt:8;
  uint16_t length;
 } hdr;
 union {

  struct {
   uint32_t ssrc;
   uint32_t ntp_sec;
   uint32_t ntp_frac;
   uint32_t rtp_ts;
   uint32_t psent;
   uint32_t osent;
   struct rtcp_rr *rrv;
  } sr;


  struct {
   uint32_t ssrc;
   struct rtcp_rr *rrv;
  } rr;


  struct rtcp_sdes {
   uint32_t src;
   struct rtcp_sdes_item *itemv;
   uint32_t n;
  } *sdesv;


  struct {
   uint32_t *srcv;
   char *reason;
  } bye;


  struct {
   uint32_t src;
   char name[4];
   uint8_t *data;
   size_t data_len;
  } app;


  struct {
   uint32_t ssrc;
  } fir;


  struct {
   uint32_t ssrc;
   uint16_t fsn;
   uint16_t blp;
  } nack;


  struct {
   uint32_t ssrc_packet;
   uint32_t ssrc_media;
   uint32_t n;

   union {
    struct gnack {
     uint16_t pid;
     uint16_t blp;
    } *gnackv;
    struct sli {
     uint16_t first;
     uint16_t number;
     uint8_t picid;
    } *sliv;
    struct mbuf *afb;
    void *p;
   } fci;
  } fb;
 } r;
};


struct rtcp_stats {
 struct {
  uint32_t sent;
  int lost;
  uint32_t jit;
 } tx;
 struct {
  uint32_t sent;
  int lost;
  uint32_t jit;
 } rx;
 uint32_t rtt;
};

struct sa;
//struct re_printf;
struct rtp_sock;

typedef void (rtp_recv_h)(const struct sa *src, const struct rtp_header *hdr,
     struct mbuf *mb, void *arg);
typedef void (rtcp_recv_h)(const struct sa *src, struct rtcp_msg *msg,
      void *arg);


int rtp_alloc(struct rtp_sock **rsp);
int rtp_listen(struct rtp_sock **rsp, int proto, const struct sa *ip,
   uint16_t min_port, uint16_t max_port, signed char enable_rtcp,
   rtp_recv_h *recvh, rtcp_recv_h *rtcph, void *arg);
int rtp_hdr_encode(struct mbuf *mb, const struct rtp_header *hdr);
int rtp_hdr_decode(struct rtp_header *hdr, struct mbuf *mb);
int rtp_encode(struct rtp_sock *rs, signed char ext, signed char marker, uint8_t pt,
   uint32_t ts, struct mbuf *mb);
int rtp_decode(struct rtp_sock *rs, struct mbuf *mb, struct rtp_header *hdr);
int rtp_send(struct rtp_sock *rs, const struct sa *dst, signed char ext,
        signed char marker, uint8_t pt, uint32_t ts, struct mbuf *mb);
int rtp_debug(struct re_printf *pf, const struct rtp_sock *rs);
void *rtp_sock(const struct rtp_sock *rs);
uint32_t rtp_sess_ssrc(const struct rtp_sock *rs);
const struct sa *rtp_local(const struct rtp_sock *rs);


void rtcp_start(struct rtp_sock *rs, const char *cname,
   const struct sa *peer);
void rtcp_enable_mux(struct rtp_sock *rs, signed char enabled);
void rtcp_set_srate(struct rtp_sock *rs, uint32_t sr_tx, uint32_t sr_rx);
void rtcp_set_srate_tx(struct rtp_sock *rs, uint32_t srate_tx);
void rtcp_set_srate_rx(struct rtp_sock *rs, uint32_t srate_rx);
int rtcp_send_app(struct rtp_sock *rs, const char name[4],
      const uint8_t *data, size_t len);
int rtcp_send_fir(struct rtp_sock *rs, uint32_t ssrc);
int rtcp_send_nack(struct rtp_sock *rs, uint16_t fsn, uint16_t blp);
int rtcp_send_pli(struct rtp_sock *rs, uint32_t fb_ssrc);
int rtcp_debug(struct re_printf *pf, const struct rtp_sock *rs);
void *rtcp_sock(const struct rtp_sock *rs);
int rtcp_stats(struct rtp_sock *rs, uint32_t ssrc, struct rtcp_stats *stats);


int rtcp_encode(struct mbuf *mb, enum rtcp_type type, uint32_t count, ...);
int rtcp_decode(struct rtcp_msg **msgp, struct mbuf *mb);
int rtcp_msg_print(struct re_printf *pf, const struct rtcp_msg *msg);
int rtcp_sdes_encode(struct mbuf *mb, uint32_t src, uint32_t itemc, ...);
const char *rtcp_type_name(enum rtcp_type type);
const char *rtcp_sdes_name(enum rtcp_sdes_type sdes);









enum {
 SDP_VERSION = 0
};


enum sdp_dir {
 SDP_INACTIVE = 0,
 SDP_RECVONLY = 1,
 SDP_SENDONLY = 2,
 SDP_SENDRECV = 3,
};


enum sdp_bandwidth {
 SDP_BANDWIDTH_MIN = 0,
 SDP_BANDWIDTH_CT = 0,
 SDP_BANDWIDTH_AS,
 SDP_BANDWIDTH_RS,
 SDP_BANDWIDTH_RR,
 SDP_BANDWIDTH_TIAS,

 SDP_BANDWIDTH_MAX,
};


struct sdp_format;

typedef int(sdp_media_enc_h)(struct mbuf *mb, signed char offer, void *arg);
typedef int(sdp_fmtp_enc_h)(struct mbuf *mb, const struct sdp_format *fmt,
       signed char offer, void *data);
typedef signed char(sdp_fmtp_cmp_h)(const char *params1, const char *params2,
        void *data);
typedef signed char(sdp_format_h)(struct sdp_format *fmt, void *arg);
typedef signed char(sdp_attr_h)(const char *name, const char *value, void *arg);


struct sdp_format {
 struct le le;
 char *id;
 char *params;
 char *rparams;
 char *name;
 sdp_fmtp_enc_h *ench;
 sdp_fmtp_cmp_h *cmph;
 void *data;
 signed char ref;
 signed char sup;
 int pt;
 uint32_t srate;
 uint8_t ch;
};



struct sdp_session;

int sdp_session_alloc(struct sdp_session **sessp, const struct sa *laddr);
void sdp_session_set_laddr(struct sdp_session *sess, const struct sa *laddr);
void sdp_session_set_lbandwidth(struct sdp_session *sess,
    enum sdp_bandwidth type, int32_t bw);
int sdp_session_set_lattr(struct sdp_session *sess, signed char replace,
      const char *name, const char *value, ...);
void sdp_session_del_lattr(struct sdp_session *sess, const char *name);
int32_t sdp_session_lbandwidth(const struct sdp_session *sess,
          enum sdp_bandwidth type);
int32_t sdp_session_rbandwidth(const struct sdp_session *sess,
          enum sdp_bandwidth type);
const char *sdp_session_rattr(const struct sdp_session *sess,
         const char *name);
const char *sdp_session_rattr_apply(const struct sdp_session *sess,
        const char *name,
        sdp_attr_h *attrh, void *arg);
const struct list *sdp_session_medial(const struct sdp_session *sess,
          signed char local);
int sdp_session_debug(struct re_printf *pf, const struct sdp_session *sess);



struct sdp_media;

int sdp_media_add(struct sdp_media **mp, struct sdp_session *sess,
     const char *name, uint16_t port, const char *proto);
int sdp_media_set_alt_protos(struct sdp_media *m, unsigned protoc, ...);
void sdp_media_set_encode_handler(struct sdp_media *m, sdp_media_enc_h *ench,
      void *arg);
void sdp_media_set_fmt_ignore(struct sdp_media *m, signed char fmt_ignore);
void sdp_media_set_disabled(struct sdp_media *m, signed char disabled);
void sdp_media_set_lport(struct sdp_media *m, uint16_t port);
void sdp_media_set_laddr(struct sdp_media *m, const struct sa *laddr);
void sdp_media_set_lbandwidth(struct sdp_media *m, enum sdp_bandwidth type,
         int32_t bw);
void sdp_media_set_lport_rtcp(struct sdp_media *m, uint16_t port);
void sdp_media_set_laddr_rtcp(struct sdp_media *m, const struct sa *laddr);
void sdp_media_set_ldir(struct sdp_media *m, enum sdp_dir dir);
int sdp_media_set_lattr(struct sdp_media *m, signed char replace,
    const char *name, const char *value, ...);
void sdp_media_del_lattr(struct sdp_media *m, const char *name);
const char *sdp_media_proto(const struct sdp_media *m);
uint16_t sdp_media_rport(const struct sdp_media *m);
const struct sa *sdp_media_raddr(const struct sdp_media *m);
const struct sa *sdp_media_laddr(const struct sdp_media *m);
void sdp_media_raddr_rtcp(const struct sdp_media *m, struct sa *raddr);
int32_t sdp_media_rbandwidth(const struct sdp_media *m,
        enum sdp_bandwidth type);
enum sdp_dir sdp_media_ldir(const struct sdp_media *m);
enum sdp_dir sdp_media_rdir(const struct sdp_media *m);
enum sdp_dir sdp_media_dir(const struct sdp_media *m);
const struct sdp_format *sdp_media_lformat(const struct sdp_media *m, int pt);
const struct sdp_format *sdp_media_rformat(const struct sdp_media *m,
        const char *name);
struct sdp_format *sdp_media_format(const struct sdp_media *m,
        signed char local, const char *id,
        int pt, const char *name,
        int32_t srate, int8_t ch);
struct sdp_format *sdp_media_format_apply(const struct sdp_media *m,
       signed char local, const char *id,
       int pt, const char *name,
       int32_t srate, int8_t ch,
       sdp_format_h *fmth, void *arg);
const struct list *sdp_media_format_lst(const struct sdp_media *m, signed char local);
const char *sdp_media_rattr(const struct sdp_media *m, const char *name);
const char *sdp_media_session_rattr(const struct sdp_media *m,
        const struct sdp_session *sess,
        const char *name);
const char *sdp_media_rattr_apply(const struct sdp_media *m, const char *name,
      sdp_attr_h *attrh, void *arg);
const char *sdp_media_name(const struct sdp_media *m);
int sdp_media_debug(struct re_printf *pf, const struct sdp_media *m);



int sdp_format_add(struct sdp_format **fmtp, struct sdp_media *m,
      signed char prepend, const char *id, const char *name,
      uint32_t srate, uint8_t ch, sdp_fmtp_enc_h *ench,
      sdp_fmtp_cmp_h *cmph, void *data, signed char ref,
      const char *params, ...);
int sdp_format_set_params(struct sdp_format *fmt, const char *params, ...);
signed char sdp_format_cmp(const struct sdp_format *fmt1,
      const struct sdp_format *fmt2);
int sdp_format_debug(struct re_printf *pf, const struct sdp_format *fmt);



int sdp_encode(struct mbuf **mbp, struct sdp_session *sess, signed char offer);
int sdp_decode(struct sdp_session *sess, struct mbuf *mb, signed char offer);



const char *sdp_dir_name(enum sdp_dir dir);
const char *sdp_bandwidth_name(enum sdp_bandwidth type);


extern const char sdp_attr_fmtp[];
extern const char sdp_attr_maxptime[];
extern const char sdp_attr_ptime[];
extern const char sdp_attr_rtcp[];
extern const char sdp_attr_rtpmap[];

extern const char sdp_media_audio[];
extern const char sdp_media_video[];
extern const char sdp_media_text[];

extern const char sdp_proto_rtpavp[];
extern const char sdp_proto_rtpsavp[];





struct sdp_extmap {
 struct pl name;
 struct pl attrs;
 enum sdp_dir dir;
 signed char dir_set;
 uint32_t id;
};

int sdp_extmap_decode(struct sdp_extmap *ext, const char *val);










struct uri {
 struct pl scheme;
 struct pl user;
 struct pl password;
 struct pl host;
 int af;
 uint16_t port;
 struct pl params;
 struct pl headers;
};

typedef int (uri_apply_h)(const struct pl *name, const struct pl *val,
     void *arg);

struct re_printf;
int uri_encode(struct re_printf *pf, const struct uri *uri);
int uri_decode(struct uri *uri, const struct pl *pl);
int uri_param_get(const struct pl *pl, const struct pl *pname,
     struct pl *pvalue);
int uri_params_apply(const struct pl *pl, uri_apply_h *ah, void *arg);
int uri_header_get(const struct pl *pl, const struct pl *hname,
      struct pl *hvalue);
int uri_headers_apply(const struct pl *pl, uri_apply_h *ah, void *arg);
signed char uri_cmp(const struct uri *l, const struct uri *r);



int uri_user_escape(struct re_printf *pf, const struct pl *pl);
int uri_user_unescape(struct re_printf *pf, const struct pl *pl);
int uri_password_escape(struct re_printf *pf, const struct pl *pl);
int uri_password_unescape(struct re_printf *pf, const struct pl *pl);
int uri_param_escape(struct re_printf *pf, const struct pl *pl);
int uri_param_unescape(struct re_printf *pf, const struct pl *pl);
int uri_header_escape(struct re_printf *pf, const struct pl *pl);
int uri_header_unescape(struct re_printf *pf, const struct pl *pl);









enum {
 SIP_PORT = 5060,
 SIP_PORT_TLS = 5061,
};


enum sip_transp {
 SIP_TRANSP_NONE = -1,
 SIP_TRANSP_UDP = 0,
 SIP_TRANSP_TCP,
 SIP_TRANSP_TLS,
 SIP_TRANSPC,
};



enum sip_hdrid {
 SIP_HDR_ACCEPT = 3186,
 SIP_HDR_ACCEPT_CONTACT = 232,
 SIP_HDR_ACCEPT_ENCODING = 708,
 SIP_HDR_ACCEPT_LANGUAGE = 2867,
 SIP_HDR_ACCEPT_RESOURCE_PRIORITY = 1848,
 SIP_HDR_ALERT_INFO = 274,
 SIP_HDR_ALLOW = 2429,
 SIP_HDR_ALLOW_EVENTS = 66,
 SIP_HDR_ANSWER_MODE = 2905,
 SIP_HDR_AUTHENTICATION_INFO = 3144,
 SIP_HDR_AUTHORIZATION = 2503,
 SIP_HDR_CALL_ID = 3095,
 SIP_HDR_CALL_INFO = 586,
 SIP_HDR_CONTACT = 229,
 SIP_HDR_CONTENT_DISPOSITION = 1425,
 SIP_HDR_CONTENT_ENCODING = 580,
 SIP_HDR_CONTENT_LANGUAGE = 3371,
 SIP_HDR_CONTENT_LENGTH = 3861,
 SIP_HDR_CONTENT_TYPE = 809,
 SIP_HDR_CSEQ = 746,
 SIP_HDR_DATE = 1027,
 SIP_HDR_ENCRYPTION = 3125,
 SIP_HDR_ERROR_INFO = 21,
 SIP_HDR_EVENT = 3286,
 SIP_HDR_EXPIRES = 1983,
 SIP_HDR_FLOW_TIMER = 584,
 SIP_HDR_FROM = 1963,
 SIP_HDR_HIDE = 283,
 SIP_HDR_HISTORY_INFO = 2582,
 SIP_HDR_IDENTITY = 2362,
 SIP_HDR_IDENTITY_INFO = 980,
 SIP_HDR_IN_REPLY_TO = 1577,
 SIP_HDR_JOIN = 3479,
 SIP_HDR_MAX_BREADTH = 3701,
 SIP_HDR_MAX_FORWARDS = 3549,
 SIP_HDR_MIME_VERSION = 3659,
 SIP_HDR_MIN_EXPIRES = 1121,
 SIP_HDR_MIN_SE = 2847,
 SIP_HDR_ORGANIZATION = 3247,
 SIP_HDR_P_ACCESS_NETWORK_INFO = 1662,
 SIP_HDR_P_ANSWER_STATE = 42,
 SIP_HDR_P_ASSERTED_IDENTITY = 1233,
 SIP_HDR_P_ASSOCIATED_URI = 900,
 SIP_HDR_P_CALLED_PARTY_ID = 3347,
 SIP_HDR_P_CHARGING_FUNCTION_ADDRESSES = 2171,
 SIP_HDR_P_CHARGING_VECTOR = 25,
 SIP_HDR_P_DCS_TRACE_PARTY_ID = 3027,
 SIP_HDR_P_DCS_OSPS = 1788,
 SIP_HDR_P_DCS_BILLING_INFO = 2017,
 SIP_HDR_P_DCS_LAES = 693,
 SIP_HDR_P_DCS_REDIRECT = 1872,
 SIP_HDR_P_EARLY_MEDIA = 2622,
 SIP_HDR_P_MEDIA_AUTHORIZATION = 1035,
 SIP_HDR_P_PREFERRED_IDENTITY = 1263,
 SIP_HDR_P_PROFILE_KEY = 1904,
 SIP_HDR_P_REFUSED_URI_LIST = 1047,
 SIP_HDR_P_SERVED_USER = 1588,
 SIP_HDR_P_USER_DATABASE = 2827,
 SIP_HDR_P_VISITED_NETWORK_ID = 3867,
 SIP_HDR_PATH = 2741,
 SIP_HDR_PERMISSION_MISSING = 1409,
 SIP_HDR_PRIORITY = 3520,
 SIP_HDR_PRIV_ANSWER_MODE = 2476,
 SIP_HDR_PRIVACY = 3150,
 SIP_HDR_PROXY_AUTHENTICATE = 116,
 SIP_HDR_PROXY_AUTHORIZATION = 2363,
 SIP_HDR_PROXY_REQUIRE = 3562,
 SIP_HDR_RACK = 2523,
 SIP_HDR_REASON = 3732,
 SIP_HDR_RECORD_ROUTE = 278,
 SIP_HDR_REFER_SUB = 2458,
 SIP_HDR_REFER_TO = 1521,
 SIP_HDR_REFERRED_BY = 3456,
 SIP_HDR_REJECT_CONTACT = 285,
 SIP_HDR_REPLACES = 2534,
 SIP_HDR_REPLY_TO = 2404,
 SIP_HDR_REQUEST_DISPOSITION = 3715,
 SIP_HDR_REQUIRE = 3905,
 SIP_HDR_RESOURCE_PRIORITY = 1643,
 SIP_HDR_RESPONSE_KEY = 1548,
 SIP_HDR_RETRY_AFTER = 409,
 SIP_HDR_ROUTE = 661,
 SIP_HDR_RSEQ = 445,
 SIP_HDR_SECURITY_CLIENT = 1358,
 SIP_HDR_SECURITY_SERVER = 811,
 SIP_HDR_SECURITY_VERIFY = 519,
 SIP_HDR_SERVER = 973,
 SIP_HDR_SERVICE_ROUTE = 1655,
 SIP_HDR_SESSION_EXPIRES = 1979,
 SIP_HDR_SIP_ETAG = 1997,
 SIP_HDR_SIP_IF_MATCH = 3056,
 SIP_HDR_SUBJECT = 1043,
 SIP_HDR_SUBSCRIPTION_STATE = 2884,
 SIP_HDR_SUPPORTED = 119,
 SIP_HDR_TARGET_DIALOG = 3450,
 SIP_HDR_TIMESTAMP = 938,
 SIP_HDR_TO = 1449,
 SIP_HDR_TRIGGER_CONSENT = 3180,
 SIP_HDR_UNSUPPORTED = 982,
 SIP_HDR_USER_AGENT = 4064,
 SIP_HDR_VIA = 3961,
 SIP_HDR_WARNING = 2108,
 SIP_HDR_WWW_AUTHENTICATE = 2763,

 SIP_HDR_NONE = -1
};


enum {
 SIP_T1 = 500,
 SIP_T2 = 4000,
 SIP_T4 = 5000,
};



struct sip_via {
 struct pl sentby;
 struct sa addr;
 struct pl params;
 struct pl branch;
 struct pl val;
 enum sip_transp tp;
};


struct sip_addr {
 struct pl dname;
 struct pl auri;
 struct uri uri;
 struct pl params;
};


struct sip_taddr {
 struct pl dname;
 struct pl auri;
 struct uri uri;
 struct pl params;
 struct pl tag;
 struct pl val;
};


struct sip_cseq {
 struct pl met;
 uint32_t num;
};


struct sip_hdr {
 struct le le;
 struct le he;
 struct pl name;
 struct pl val;
 enum sip_hdrid id;
};


struct sip_msg {
 struct sa src;
 struct sa dst;
 struct pl ver;
 struct pl met;
 struct pl ruri;
 struct uri uri;
 uint16_t scode;
 struct pl reason;
 struct list hdrl;
 struct sip_via via;
 struct sip_taddr to;
 struct sip_taddr from;
 struct sip_cseq cseq;
 struct msg_ctype ctyp;
 struct pl callid;
 struct pl maxfwd;
 struct pl expires;
 struct pl clen;
 struct hash *hdrht;
 struct mbuf *mb;
 void *sock;
 uint64_t tag;
 enum sip_transp tp;
 signed char req;
};


struct sip_loopstate {
 uint32_t failc;
 uint16_t last_scode;
};


struct sip_contact {
 const char *uri;
 const struct sa *addr;
 enum sip_transp tp;
};

struct sip;
struct sip_lsnr;
struct sip_request;
struct sip_strans;
struct sip_auth;
struct sip_dialog;
struct sip_keepalive;
struct dnsc;

typedef signed char(sip_msg_h)(const struct sip_msg *msg, void *arg);
typedef int(sip_send_h)(enum sip_transp tp, const struct sa *src,
   const struct sa *dst, struct mbuf *mb, void *arg);
typedef void(sip_resp_h)(int err, const struct sip_msg *msg, void *arg);
typedef void(sip_cancel_h)(void *arg);
typedef void(sip_exit_h)(void *arg);
typedef int(sip_auth_h)(char **username, char **password, const char *realm,
   void *arg);
typedef signed char(sip_hdr_h)(const struct sip_hdr *hdr, const struct sip_msg *msg,
   void *arg);
typedef void(sip_keepalive_h)(int err, void *arg);



int sip_alloc(struct sip **sipp, struct dnsc *dnsc, uint32_t ctsz,
        uint32_t stsz, uint32_t tcsz, const char *software,
        sip_exit_h *exith, void *arg);
void sip_close(struct sip *sip, signed char force);
int sip_listen(struct sip_lsnr **lsnrp, struct sip *sip, signed char req,
  sip_msg_h *msgh, void *arg);
int sip_debug(struct re_printf *pf, const struct sip *sip);
int sip_send(struct sip *sip, void *sock, enum sip_transp tp,
       const struct sa *dst, struct mbuf *mb);



int sip_transp_add(struct sip *sip, enum sip_transp tp,
      const struct sa *laddr, ...);
void sip_transp_flush(struct sip *sip);
signed char sip_transp_isladdr(const struct sip *sip, enum sip_transp tp,
   const struct sa *laddr);
const char *sip_transp_name(enum sip_transp tp);
const char *sip_transp_param(enum sip_transp tp);
uint16_t sip_transp_port(enum sip_transp tp, uint16_t port);
int sip_transp_laddr(struct sip *sip, struct sa *laddr, enum sip_transp tp,
        const struct sa *dst);



int sip_request(struct sip_request **reqp, struct sip *sip, signed char stateful,
  const char *met, int metl, const char *uri, int uril,
  const struct uri *route, struct mbuf *mb, size_t sortkey,
  sip_send_h *sendh, sip_resp_h *resph, void *arg);
int sip_requestf(struct sip_request **reqp, struct sip *sip, signed char stateful,
   const char *met, const char *uri, const struct uri *route,
   struct sip_auth *auth, sip_send_h *sendh, sip_resp_h *resph,
   void *arg, const char *fmt, ...);
int sip_drequestf(struct sip_request **reqp, struct sip *sip, signed char stateful,
    const char *met, struct sip_dialog *dlg, uint32_t cseq,
    struct sip_auth *auth, sip_send_h *sendh, sip_resp_h *resph,
    void *arg, const char *fmt, ...);
void sip_request_cancel(struct sip_request *req);
signed char sip_request_loops(struct sip_loopstate *ls, uint16_t scode);
void sip_loopstate_reset(struct sip_loopstate *ls);



int sip_strans_alloc(struct sip_strans **stp, struct sip *sip,
        const struct sip_msg *msg, sip_cancel_h *cancelh,
        void *arg);
int sip_strans_reply(struct sip_strans **stp, struct sip *sip,
        const struct sip_msg *msg, const struct sa *dst,
        uint16_t scode, struct mbuf *mb);
int sip_treplyf(struct sip_strans **stp, struct mbuf **mbp, struct sip *sip,
   const struct sip_msg *msg, signed char rec_route, uint16_t scode,
   const char *reason, const char *fmt, ...);
int sip_treply(struct sip_strans **stp, struct sip *sip,
  const struct sip_msg *msg, uint16_t scode, const char *reason);
int sip_replyf(struct sip *sip, const struct sip_msg *msg, uint16_t scode,
  const char *reason, const char *fmt, ...);
int sip_reply(struct sip *sip, const struct sip_msg *msg, uint16_t scode,
        const char *reason);
void sip_reply_addr(struct sa *addr, const struct sip_msg *msg, signed char rport);



int sip_auth_authenticate(struct sip_auth *auth, const struct sip_msg *msg);
int sip_auth_alloc(struct sip_auth **authp, sip_auth_h *authh,
      void *arg, signed char ref);
void sip_auth_reset(struct sip_auth *auth);



void sip_contact_set(struct sip_contact *contact, const char *uri,
       const struct sa *addr, enum sip_transp tp);
int sip_contact_print(struct re_printf *pf,
         const struct sip_contact *contact);



int sip_dialog_alloc(struct sip_dialog **dlgp,
        const char *uri, const char *to_uri,
        const char *from_name, const char *from_uri,
        const char *routev[], uint32_t routec);
int sip_dialog_accept(struct sip_dialog **dlgp, const struct sip_msg *msg);
int sip_dialog_create(struct sip_dialog *dlg, const struct sip_msg *msg);
int sip_dialog_fork(struct sip_dialog **dlgp, struct sip_dialog *odlg,
       const struct sip_msg *msg);
int sip_dialog_update(struct sip_dialog *dlg, const struct sip_msg *msg);
signed char sip_dialog_rseq_valid(struct sip_dialog *dlg, const struct sip_msg *msg);
const char *sip_dialog_callid(const struct sip_dialog *dlg);
uint32_t sip_dialog_lseq(const struct sip_dialog *dlg);
signed char sip_dialog_established(const struct sip_dialog *dlg);
signed char sip_dialog_cmp(const struct sip_dialog *dlg, const struct sip_msg *msg);
signed char sip_dialog_cmp_half(const struct sip_dialog *dlg,
    const struct sip_msg *msg);



int sip_msg_decode(struct sip_msg **msgp, struct mbuf *mb);
const struct sip_hdr *sip_msg_hdr(const struct sip_msg *msg,
      enum sip_hdrid id);
const struct sip_hdr *sip_msg_hdr_apply(const struct sip_msg *msg,
     signed char fwd, enum sip_hdrid id,
     sip_hdr_h *h, void *arg);
const struct sip_hdr *sip_msg_xhdr(const struct sip_msg *msg,
       const char *name);
const struct sip_hdr *sip_msg_xhdr_apply(const struct sip_msg *msg,
      signed char fwd, const char *name,
      sip_hdr_h *h, void *arg);
uint32_t sip_msg_hdr_count(const struct sip_msg *msg, enum sip_hdrid id);
uint32_t sip_msg_xhdr_count(const struct sip_msg *msg, const char *name);
signed char sip_msg_hdr_has_value(const struct sip_msg *msg, enum sip_hdrid id,
      const char *value);
signed char sip_msg_xhdr_has_value(const struct sip_msg *msg, const char *name,
       const char *value);
struct tcp_conn *sip_msg_tcpconn(const struct sip_msg *msg);
void sip_msg_dump(const struct sip_msg *msg);

int sip_addr_decode(struct sip_addr *addr, const struct pl *pl);
int sip_via_decode(struct sip_via *via, const struct pl *pl);
int sip_cseq_decode(struct sip_cseq *cseq, const struct pl *pl);



int sip_keepalive_start(struct sip_keepalive **kap, struct sip *sip,
   const struct sip_msg *msg, uint32_t interval,
   sip_keepalive_h *kah, void *arg);



struct sipevent_event {
 struct pl event;
 struct pl params;
 struct pl id;
};

enum sipevent_subst {
 SIPEVENT_ACTIVE = 0,
 SIPEVENT_PENDING,
 SIPEVENT_TERMINATED,
};

enum sipevent_reason {
 SIPEVENT_DEACTIVATED = 0,
 SIPEVENT_PROBATION,
 SIPEVENT_REJECTED,
 SIPEVENT_TIMEOUT,
 SIPEVENT_GIVEUP,
 SIPEVENT_NORESOURCE,
};

struct sipevent_substate {
 enum sipevent_subst state;
 enum sipevent_reason reason;
 struct pl expires;
 struct pl retry_after;
 struct pl params;
};

int sipevent_event_decode(struct sipevent_event *se, const struct pl *pl);
int sipevent_substate_decode(struct sipevent_substate *ss,
        const struct pl *pl);
const char *sipevent_substate_name(enum sipevent_subst state);
const char *sipevent_reason_name(enum sipevent_reason reason);




struct sipevent_sock;

int sipevent_listen(struct sipevent_sock **sockp, struct sip *sip,
      uint32_t htsize_not, uint32_t htsize_sub,
      sip_msg_h *subh, void *arg);




struct sipnot;

typedef void (sipnot_close_h)(int err, const struct sip_msg *msg, void *arg);

int sipevent_accept(struct sipnot **notp, struct sipevent_sock *sock,
      const struct sip_msg *msg, struct sip_dialog *dlg,
      const struct sipevent_event *event,
      uint16_t scode, const char *reason, uint32_t expires_min,
      uint32_t expires_dfl, uint32_t expires_max,
      const char *cuser, const char *ctype,
      sip_auth_h *authh, void *aarg, signed char aref,
      sipnot_close_h *closeh, void *arg, const char *fmt, ...);
int sipevent_notify(struct sipnot *sipnot, struct mbuf *mb,
      enum sipevent_subst state, enum sipevent_reason reason,
      uint32_t retry_after);
int sipevent_notifyf(struct sipnot *sipnot, struct mbuf **mbp,
       enum sipevent_subst state, enum sipevent_reason reason,
       uint32_t retry_after, const char *fmt, ...);




struct sipsub;

typedef int (sipsub_fork_h)(struct sipsub **subp, struct sipsub *osub,
        const struct sip_msg *msg, void *arg);
typedef void (sipsub_notify_h)(struct sip *sip, const struct sip_msg *msg,
          void *arg);
typedef void (sipsub_close_h)(int err, const struct sip_msg *msg,
         const struct sipevent_substate *substate,
         void *arg);

int sipevent_subscribe(struct sipsub **subp, struct sipevent_sock *sock,
         const char *uri, const char *from_name,
         const char *from_uri, const char *event, const char *id,
         uint32_t expires, const char *cuser,
         const char *routev[], uint32_t routec,
         sip_auth_h *authh, void *aarg, signed char aref,
         sipsub_fork_h *forkh, sipsub_notify_h *notifyh,
         sipsub_close_h *closeh, void *arg,
         const char *fmt, ...);
int sipevent_dsubscribe(struct sipsub **subp, struct sipevent_sock *sock,
   struct sip_dialog *dlg, const char *event,
   const char *id, uint32_t expires, const char *cuser,
   sip_auth_h *authh, void *aarg, signed char aref,
   sipsub_notify_h *notifyh, sipsub_close_h *closeh,
   void *arg, const char *fmt, ...);

int sipevent_refer(struct sipsub **subp, struct sipevent_sock *sock,
     const char *uri, const char *from_name,
     const char *from_uri, const char *cuser,
     const char *routev[], uint32_t routec,
     sip_auth_h *authh, void *aarg, signed char aref,
     sipsub_fork_h *forkh, sipsub_notify_h *notifyh,
     sipsub_close_h *closeh, void *arg,
     const char *fmt, ...);
int sipevent_drefer(struct sipsub **subp, struct sipevent_sock *sock,
      struct sip_dialog *dlg, const char *cuser,
      sip_auth_h *authh, void *aarg, signed char aref,
      sipsub_notify_h *notifyh, sipsub_close_h *closeh,
      void *arg, const char *fmt, ...);

int sipevent_fork(struct sipsub **subp, struct sipsub *osub,
    const struct sip_msg *msg,
    sip_auth_h *authh, void *aarg, signed char aref,
    sipsub_notify_h *notifyh, sipsub_close_h *closeh,
    void *arg);








struct sipreg;


int sipreg_register(struct sipreg **regp, struct sip *sip, const char *reg_uri,
      const char *to_uri, const char *from_uri, uint32_t expires,
      const char *cuser, const char *routev[], uint32_t routec,
      int regid, sip_auth_h *authh, void *aarg, signed char aref,
      sip_resp_h *resph, void *arg,
      const char *params, const char *fmt, ...);

const struct sa *sipreg_laddr(const struct sipreg *reg);








struct sipsess_sock;
struct sipsess;


typedef void (sipsess_conn_h)(const struct sip_msg *msg, void *arg);
typedef int (sipsess_offer_h)(struct mbuf **descp, const struct sip_msg *msg,
          void *arg);
typedef int (sipsess_answer_h)(const struct sip_msg *msg, void *arg);
typedef void (sipsess_progr_h)(const struct sip_msg *msg, void *arg);
typedef void (sipsess_estab_h)(const struct sip_msg *msg, void *arg);
typedef void (sipsess_info_h)(struct sip *sip, const struct sip_msg *msg,
         void *arg);
typedef void (sipsess_refer_h)(struct sip *sip, const struct sip_msg *msg,
          void *arg);
typedef void (sipsess_close_h)(int err, const struct sip_msg *msg, void *arg);


int sipsess_listen(struct sipsess_sock **sockp, struct sip *sip,
      int htsize, sipsess_conn_h *connh, void *arg);

int sipsess_connect(struct sipsess **sessp, struct sipsess_sock *sock,
       const char *to_uri, const char *from_name,
       const char *from_uri, const char *cuser,
       const char *routev[], uint32_t routec,
       const char *ctype, struct mbuf *desc,
       sip_auth_h *authh, void *aarg, signed char aref,
       sipsess_offer_h *offerh, sipsess_answer_h *answerh,
       sipsess_progr_h *progrh, sipsess_estab_h *estabh,
       sipsess_info_h *infoh, sipsess_refer_h *referh,
       sipsess_close_h *closeh, void *arg, const char *fmt, ...);

int sipsess_accept(struct sipsess **sessp, struct sipsess_sock *sock,
      const struct sip_msg *msg, uint16_t scode,
      const char *reason, const char *cuser, const char *ctype,
      struct mbuf *desc,
      sip_auth_h *authh, void *aarg, signed char aref,
      sipsess_offer_h *offerh, sipsess_answer_h *answerh,
      sipsess_estab_h *estabh, sipsess_info_h *infoh,
      sipsess_refer_h *referh, sipsess_close_h *closeh,
      void *arg, const char *fmt, ...);

int sipsess_progress(struct sipsess *sess, uint16_t scode,
        const char *reason, struct mbuf *desc,
        const char *fmt, ...);
int sipsess_answer(struct sipsess *sess, uint16_t scode, const char *reason,
      struct mbuf *desc, const char *fmt, ...);
int sipsess_reject(struct sipsess *sess, uint16_t scode, const char *reason,
      const char *fmt, ...);
int sipsess_modify(struct sipsess *sess, struct mbuf *desc);
int sipsess_info(struct sipsess *sess, const char *ctype, struct mbuf *body,
    sip_resp_h *resph, void *arg);
int sipsess_set_close_headers(struct sipsess *sess, const char *hdrs, ...);
void sipsess_close_all(struct sipsess_sock *sock);
struct sip_dialog *sipsess_dialog(const struct sipsess *sess);










enum {
 STUN_PORT = 3478,
 STUNS_PORT = 5349,
 STUN_HEADER_SIZE = 20,
 STUN_ATTR_HEADER_SIZE = 4,
 STUN_TID_SIZE = 12,
 STUN_DEFAULT_RTO = 500,
 STUN_DEFAULT_RC = 7,
 STUN_DEFAULT_RM = 16,
 STUN_DEFAULT_TI = 39500
};


enum stun_af {
 STUN_AF_IPv4 = 0x01,
 STUN_AF_IPv6 = 0x02
};


enum stun_transp {
 STUN_TRANSP_UDP = IPPROTO_UDP,
 STUN_TRANSP_TCP = IPPROTO_TCP,
 STUN_TRANSP_DTLS,
};


enum stun_method {
 STUN_METHOD_BINDING = 0x001,
 STUN_METHOD_ALLOCATE = 0x003,
 STUN_METHOD_REFRESH = 0x004,
 STUN_METHOD_SEND = 0x006,
 STUN_METHOD_DATA = 0x007,
 STUN_METHOD_CREATEPERM = 0x008,
 STUN_METHOD_CHANBIND = 0x009,
};


enum stun_msg_class {
 STUN_CLASS_REQUEST = 0x0,
 STUN_CLASS_INDICATION = 0x1,
 STUN_CLASS_SUCCESS_RESP = 0x2,
 STUN_CLASS_ERROR_RESP = 0x3
};


enum stun_attrib {

 STUN_ATTR_MAPPED_ADDR = 0x0001,
 STUN_ATTR_CHANGE_REQ = 0x0003,
 STUN_ATTR_USERNAME = 0x0006,
 STUN_ATTR_MSG_INTEGRITY = 0x0008,
 STUN_ATTR_ERR_CODE = 0x0009,
 STUN_ATTR_UNKNOWN_ATTR = 0x000a,
 STUN_ATTR_CHANNEL_NUMBER = 0x000c,
 STUN_ATTR_LIFETIME = 0x000d,
 STUN_ATTR_XOR_PEER_ADDR = 0x0012,
 STUN_ATTR_DATA = 0x0013,
 STUN_ATTR_REALM = 0x0014,
 STUN_ATTR_NONCE = 0x0015,
 STUN_ATTR_XOR_RELAY_ADDR = 0x0016,
 STUN_ATTR_REQ_ADDR_FAMILY = 0x0017,
 STUN_ATTR_EVEN_PORT = 0x0018,
 STUN_ATTR_REQ_TRANSPORT = 0x0019,
 STUN_ATTR_DONT_FRAGMENT = 0x001a,
 STUN_ATTR_XOR_MAPPED_ADDR = 0x0020,
 STUN_ATTR_RSV_TOKEN = 0x0022,
 STUN_ATTR_PRIORITY = 0x0024,
 STUN_ATTR_USE_CAND = 0x0025,
 STUN_ATTR_PADDING = 0x0026,
 STUN_ATTR_RESP_PORT = 0x0027,


 STUN_ATTR_SOFTWARE = 0x8022,
 STUN_ATTR_ALT_SERVER = 0x8023,
 STUN_ATTR_FINGERPRINT = 0x8028,
 STUN_ATTR_CONTROLLED = 0x8029,
 STUN_ATTR_CONTROLLING = 0x802a,
 STUN_ATTR_RESP_ORIGIN = 0x802b,
 STUN_ATTR_OTHER_ADDR = 0x802c,
};


struct stun_change_req {
 signed char ip;
 signed char port;
};

struct stun_errcode {
 uint16_t code;
 char *reason;
};

struct stun_unknown_attr {
 uint16_t typev[8];
 uint32_t typec;
};

struct stun_even_port {
 signed char r;
};


struct stun_attr {
 struct le le;
 uint16_t type;
 union {

  struct sa sa;
  char *str;
  uint64_t uint64;
  uint32_t uint32;
  uint16_t uint16;
  uint8_t uint8;
  struct mbuf mb;


  struct sa mapped_addr;
  struct stun_change_req change_req;
  char *username;
  uint8_t msg_integrity[20];
  struct stun_errcode err_code;
  struct stun_unknown_attr unknown_attr;
  uint16_t channel_number;
  uint32_t lifetime;
  struct sa xor_peer_addr;
  struct mbuf data;
  char *realm;
  char *nonce;
  struct sa xor_relay_addr;
  uint8_t req_addr_family;
  struct stun_even_port even_port;
  uint8_t req_transport;
  struct sa xor_mapped_addr;
  uint64_t rsv_token;
  uint32_t priority;
  struct mbuf padding;
  uint16_t resp_port;
  char *software;
  struct sa alt_server;
  uint32_t fingerprint;
  uint64_t controlled;
  uint64_t controlling;
  struct sa resp_origin;
  struct sa other_addr;
 } v;
};



struct stun_conf {
 uint32_t rto;
 uint32_t rc;
 uint32_t rm;
 uint32_t ti;
 uint8_t tos;
};


extern const char *stun_software;
struct stun;
struct stun_msg;
struct stun_ctrans;

typedef void(stun_resp_h)(int err, uint16_t scode, const char *reason,
     const struct stun_msg *msg, void *arg);
typedef void(stun_ind_h)(struct stun_msg *msg, void *arg);
typedef signed char(stun_attr_h)(const struct stun_attr *attr, void *arg);

int stun_alloc(struct stun **stunp, const struct stun_conf *conf,
  stun_ind_h *indh, void *arg);
struct stun_conf *stun_conf(struct stun *stun);
int stun_send(int proto, void *sock, const struct sa *dst, struct mbuf *mb);
int stun_recv(struct stun *stun, struct mbuf *mb);
int stun_ctrans_recv(struct stun *stun, const struct stun_msg *msg,
        const struct stun_unknown_attr *ua);
struct re_printf;
int stun_debug(struct re_printf *pf, const struct stun *stun);

int stun_request(struct stun_ctrans **ctp, struct stun *stun, int proto,
    void *sock, const struct sa *dst, size_t presz,
    uint16_t method, const uint8_t *key, size_t keylen, signed char fp,
    stun_resp_h *resph, void *arg, uint32_t attrc, ...);
int stun_reply(int proto, void *sock, const struct sa *dst, size_t presz,
  const struct stun_msg *req, const uint8_t *key,
  size_t keylen, signed char fp, uint32_t attrc, ...);
int stun_ereply(int proto, void *sock, const struct sa *dst, size_t presz,
   const struct stun_msg *req, uint16_t scode,
   const char *reason, const uint8_t *key, size_t keylen,
   signed char fp, uint32_t attrc, ...);
int stun_indication(int proto, void *sock, const struct sa *dst, size_t presz,
       uint16_t method, const uint8_t *key, size_t keylen,
       signed char fp, uint32_t attrc, ...);
/*
int stun_msg_vencode(struct mbuf *mb, uint16_t method, uint8_t cls,
        const uint8_t *tid, const struct stun_errcode *ec,
        const uint8_t *key, size_t keylen, signed char fp,
        uint8_t padding, uint32_t attrc, va_list ap);
        * */
int stun_msg_encode(struct mbuf *mb, uint16_t method, uint8_t cls,
       const uint8_t *tid, const struct stun_errcode *ec,
       const uint8_t *key, size_t keylen, signed char fp,
       uint8_t padding, uint32_t attrc, ...);
int stun_msg_decode(struct stun_msg **msgpp, struct mbuf *mb,
       struct stun_unknown_attr *ua);
uint16_t stun_msg_type(const struct stun_msg *msg);
uint16_t stun_msg_class(const struct stun_msg *msg);
uint16_t stun_msg_method(const struct stun_msg *msg);
signed char stun_msg_mcookie(const struct stun_msg *msg);
const uint8_t *stun_msg_tid(const struct stun_msg *msg);
struct stun_attr *stun_msg_attr(const struct stun_msg *msg, uint16_t type);
struct stun_attr *stun_msg_attr_apply(const struct stun_msg *msg,
          stun_attr_h *h, void *arg);
int stun_msg_chk_mi(const struct stun_msg *msg, const uint8_t *key,
       size_t keylen);
int stun_msg_chk_fingerprint(const struct stun_msg *msg);
void stun_msg_dump(const struct stun_msg *msg);

const char *stun_class_name(uint16_t cls);
const char *stun_method_name(uint16_t method);
const char *stun_attr_name(uint16_t type);
const char *stun_transp_name(enum stun_transp tp);



extern const char *stun_proto_udp;
extern const char *stun_proto_tcp;

extern const char *stun_usage_binding;
extern const char *stuns_usage_binding;
extern const char *stun_usage_relay;
extern const char *stuns_usage_relay;
extern const char *stun_usage_behavior;
extern const char *stuns_usage_behavior;

typedef void (stun_dns_h)(int err, const struct sa *srv, void *arg);

struct stun_dns;
struct dnsc;
int stun_server_discover(struct stun_dns **dnsp, struct dnsc *dnsc,
     const char *service, const char *proto,
     int af, const char *domain, uint16_t port,
     stun_dns_h *dnsh, void *arg);



struct stun_keepalive;

typedef void (stun_mapped_addr_h)(int err, const struct sa *map, void *arg);


int stun_keepalive_alloc(struct stun_keepalive **skap,
     int proto, void *sock, int layer,
     const struct sa *dst, const struct stun_conf *conf,
     stun_mapped_addr_h *mah, void *arg);
void stun_keepalive_enable(struct stun_keepalive *ska, uint32_t interval);



extern const char *stun_reason_300;
extern const char *stun_reason_400;
extern const char *stun_reason_401;
extern const char *stun_reason_403;
extern const char *stun_reason_420;
extern const char *stun_reason_437;
extern const char *stun_reason_438;
extern const char *stun_reason_440;
extern const char *stun_reason_441;
extern const char *stun_reason_442;
extern const char *stun_reason_443;
extern const char *stun_reason_486;
extern const char *stun_reason_500;
extern const char *stun_reason_508;










enum nat_type {
 NAT_TYPE_UNKNOWN = 0,
 NAT_TYPE_ENDP_INDEP = 1,
 NAT_TYPE_ADDR_DEP = 2,
 NAT_TYPE_ADDR_PORT_DEP = 3
};



const char *nat_type_str(enum nat_type type);





struct nat_hairpinning;



typedef void (nat_hairpinning_h)(int err, signed char supported, void *arg);

int nat_hairpinning_alloc(struct nat_hairpinning **nhp,
     const struct sa *srv, int proto,
     const struct stun_conf *conf,
     nat_hairpinning_h *hph, void *arg);
int nat_hairpinning_start(struct nat_hairpinning *nh);





struct nat_mapping;

typedef void (nat_mapping_h)(int err, enum nat_type map, void *arg);

int nat_mapping_alloc(struct nat_mapping **nmp, const struct sa *laddr,
        const struct sa *srv, int proto,
        const struct stun_conf *conf,
        nat_mapping_h *mh, void *arg);
int nat_mapping_start(struct nat_mapping *nm);





struct nat_filtering;

typedef void (nat_filtering_h)(int err, enum nat_type filt, void *arg);

int nat_filtering_alloc(struct nat_filtering **nfp, const struct sa *srv,
   const struct stun_conf *conf,
   nat_filtering_h *fh, void *arg);
int nat_filtering_start(struct nat_filtering *nf);






struct nat_lifetime;


struct nat_lifetime_interval {
 uint32_t min;
 uint32_t cur;
 uint32_t max;
};

typedef void (nat_lifetime_h)(int err, const struct nat_lifetime_interval *i,
         void *arg);

int nat_lifetime_alloc(struct nat_lifetime **nlp, const struct sa *srv,
   uint32_t interval, const struct stun_conf *conf,
   nat_lifetime_h *lh, void *arg);
int nat_lifetime_start(struct nat_lifetime *nl);





struct nat_genalg;

typedef void (nat_genalg_h)(int err, uint16_t scode, const char *reason,
       int status, const struct sa *map, void *arg);

int nat_genalg_alloc(struct nat_genalg **ngp, const struct sa *srv, int proto,
       const struct stun_conf *conf,
       nat_genalg_h *gh, void *arg);
int nat_genalg_start(struct nat_genalg *ng);









enum srtp_suite {
 SRTP_AES_CM_128_HMAC_SHA1_32,
 SRTP_AES_CM_128_HMAC_SHA1_80,
 SRTP_AES_256_CM_HMAC_SHA1_32,
 SRTP_AES_256_CM_HMAC_SHA1_80,
};

enum srtp_flags {
 SRTP_UNENCRYPTED_SRTCP = 2,
};

struct srtp;

int srtp_alloc(struct srtp **srtpp, enum srtp_suite suite,
        const uint8_t *key, size_t key_bytes, int flags);
int srtp_encrypt(struct srtp *srtp, struct mbuf *mb);
int srtp_decrypt(struct srtp *srtp, struct mbuf *mb);
int srtcp_encrypt(struct srtp *srtp, struct mbuf *mb);
int srtcp_decrypt(struct srtp *srtp, struct mbuf *mb);

const char *srtp_suite_name(enum srtp_suite suite);



struct re_printf;
int sys_rel_get(uint32_t *rel, uint32_t *maj, uint32_t *min,
   uint32_t *patch);
int sys_kernel_get(struct re_printf *pf, void *unused);
int sys_build_get(struct re_printf *pf, void *unused);
const char *sys_arch_get(void);
const char *sys_os_get(void);
const char *sys_libre_version_get(void);
const char *sys_username(void);
int sys_coredump_set(signed char enable);
int sys_daemon(void);
void sys_usleep(unsigned int us);
/*
static inline void sys_msleep(unsigned int ms)
{
 sys_usleep(ms * 1000);
}
*/

uint16_t sys_htols(uint16_t v);
uint32_t sys_htoll(uint32_t v);
uint16_t sys_ltohs(uint16_t v);
uint32_t sys_ltohl(uint32_t v);
uint64_t sys_htonll(uint64_t v);
uint64_t sys_ntohll(uint64_t v);



void rand_init(void);
uint16_t rand_u16(void);
uint32_t rand_u32(void);
uint64_t rand_u64(void);
char rand_char(void);
void rand_str(char *str, size_t size);
void rand_bytes(uint8_t *p, size_t size);



int fs_mkdir(const char *path, uint16_t mode);
int fs_gethome(char *path, size_t sz);







struct sa;
struct tcp_sock;
struct tcp_conn;

typedef void (tcp_conn_h)(const struct sa *peer, void *arg);






typedef void (tcp_estab_h)(void *arg);






typedef void (tcp_send_h)(void *arg);







typedef void (tcp_recv_h)(struct mbuf *mb, void *arg);







typedef void (tcp_close_h)(int err, void *arg);



int tcp_sock_alloc(struct tcp_sock **tsp, const struct sa *local,
      tcp_conn_h *ch, void *arg);
int tcp_sock_bind(struct tcp_sock *ts, const struct sa *local);
int tcp_sock_listen(struct tcp_sock *ts, int backlog);
int tcp_accept(struct tcp_conn **tcp, struct tcp_sock *ts, tcp_estab_h *eh,
  tcp_recv_h *rh, tcp_close_h *ch, void *arg);
void tcp_reject(struct tcp_sock *ts);
int tcp_sock_local_get(const struct tcp_sock *ts, struct sa *local);



int tcp_conn_alloc(struct tcp_conn **tcp, const struct sa *peer,
      tcp_estab_h *eh, tcp_recv_h *rh, tcp_close_h *ch,
      void *arg);
int tcp_conn_bind(struct tcp_conn *tc, const struct sa *local);
int tcp_conn_connect(struct tcp_conn *tc, const struct sa *peer);
int tcp_send(struct tcp_conn *tc, struct mbuf *mb);
int tcp_set_send(struct tcp_conn *tc, tcp_send_h *sendh);
void tcp_set_handlers(struct tcp_conn *tc, tcp_estab_h *eh, tcp_recv_h *rh,
        tcp_close_h *ch, void *arg);
void tcp_conn_rxsz_set(struct tcp_conn *tc, size_t rxsz);
void tcp_conn_txqsz_set(struct tcp_conn *tc, size_t txqsz);
int tcp_conn_local_get(const struct tcp_conn *tc, struct sa *local);
int tcp_conn_peer_get(const struct tcp_conn *tc, struct sa *peer);
int tcp_conn_fd(const struct tcp_conn *tc);
size_t tcp_conn_txqsz(const struct tcp_conn *tc);



int tcp_listen(struct tcp_sock **tsp, const struct sa *local,
  tcp_conn_h *ch, void *arg);
int tcp_connect(struct tcp_conn **tcp, const struct sa *peer,
   tcp_estab_h *eh, tcp_recv_h *rh, tcp_close_h *ch, void *arg);
int tcp_local_get(const struct tcp_sock *ts, struct sa *local);



typedef signed char (tcp_helper_estab_h)(int *err, signed char active, void *arg);
typedef signed char (tcp_helper_send_h)(int *err, struct mbuf *mb, void *arg);
typedef signed char (tcp_helper_recv_h)(int *err, struct mbuf *mb, signed char *estab,
     void *arg);

struct tcp_helper;


int tcp_register_helper(struct tcp_helper **thp, struct tcp_conn *tc,
   int layer,
   tcp_helper_estab_h *eh, tcp_helper_send_h *sh,
   tcp_helper_recv_h *rh, void *arg);
int tcp_send_helper(struct tcp_conn *tc, struct mbuf *mb,
      struct tcp_helper *th);








enum {
 TELEV_PTIME = 50,
 TELEV_SRATE = 8000
};

struct telev;

extern const char telev_rtpfmt[];

int telev_alloc(struct telev **tp, uint32_t ptime);
int telev_set_srate(struct telev *tel, uint32_t srate);
int telev_send(struct telev *tel, int event, signed char end);
int telev_recv(struct telev *tel, struct mbuf *mb, int *event, signed char *end);
int telev_poll(struct telev *tel, signed char *marker, struct mbuf *mb);

int telev_digit2code(int digit);
int telev_code2digit(int code);



typedef void (tmr_h)(void *arg);


struct tmr {
 struct le le;
 tmr_h *th;
 void *arg;
 uint64_t jfs;
};


void tmr_poll(struct list *tmrl);
uint64_t tmr_jiffies(void);
uint64_t tmr_next_timeout(struct list *tmrl);
void tmr_debug(void);
int tmr_status(struct re_printf *pf, void *unused);

void tmr_init(struct tmr *tmr);
void tmr_start(struct tmr *tmr, uint64_t delay, tmr_h *th, void *arg);
void tmr_cancel(struct tmr *tmr);
uint64_t tmr_get_expire(const struct tmr *tmr);
/*
static inline signed char tmr_isrunning(const struct tmr *tmr)
{
 return tmr ? ((void*)0) != tmr->th : 0;
}
*/








struct tls;
struct tls_conn;
struct tcp_conn;
struct udp_sock;



enum tls_method {
 TLS_METHOD_SSLV23,
 TLS_METHOD_DTLSV1,
 TLS_METHOD_DTLS,
 TLS_METHOD_DTLSV1_2,
};

enum tls_fingerprint {
 TLS_FINGERPRINT_SHA1,
 TLS_FINGERPRINT_SHA256,
};

enum tls_keytype {
 TLS_KEYTYPE_RSA,
 TLS_KEYTYPE_EC,
};


int tls_alloc(struct tls **tlsp, enum tls_method method, const char *keyfile,
       const char *pwd);
int tls_add_ca(struct tls *tls, const char *capath);
int tls_set_selfsigned(struct tls *tls, const char *cn);
int tls_set_certificate_pem(struct tls *tls, const char *cert, size_t len_cert,
       const char *key, size_t len_key);
int tls_set_certificate_der(struct tls *tls, enum tls_keytype keytype,
       const uint8_t *cert, size_t len_cert,
       const uint8_t *key, size_t len_key);
int tls_set_certificate(struct tls *tls, const char *cert, size_t len);
void tls_set_verify_client(struct tls *tls);
int tls_set_srtp(struct tls *tls, const char *suites);
int tls_fingerprint(const struct tls *tls, enum tls_fingerprint type,
      uint8_t *md, size_t size);

int tls_peer_fingerprint(const struct tls_conn *tc, enum tls_fingerprint type,
    uint8_t *md, size_t size);
int tls_peer_common_name(const struct tls_conn *tc, char *cn, size_t size);
int tls_peer_verify(const struct tls_conn *tc);
int tls_srtp_keyinfo(const struct tls_conn *tc, enum srtp_suite *suite,
       uint8_t *cli_key, size_t cli_key_size,
       uint8_t *srv_key, size_t srv_key_size);
const char *tls_cipher_name(const struct tls_conn *tc);
int tls_set_ciphers(struct tls *tls, const char *cipherv[], size_t count);
int tls_set_servername(struct tls_conn *tc, const char *servername);




int tls_start_tcp(struct tls_conn **ptc, struct tls *tls,
    struct tcp_conn *tcp, int layer);




typedef void (dtls_conn_h)(const struct sa *peer, void *arg);
typedef void (dtls_estab_h)(void *arg);
typedef void (dtls_recv_h)(struct mbuf *mb, void *arg);
typedef void (dtls_close_h)(int err, void *arg);

struct dtls_sock;

int dtls_listen(struct dtls_sock **sockp, const struct sa *laddr,
  struct udp_sock *us, uint32_t htsize, int layer,
  dtls_conn_h *connh, void *arg);
struct udp_sock *dtls_udp_sock(struct dtls_sock *sock);
void dtls_set_mtu(struct dtls_sock *sock, size_t mtu);
int dtls_connect(struct tls_conn **ptc, struct tls *tls,
   struct dtls_sock *sock, const struct sa *peer,
   dtls_estab_h *estabh, dtls_recv_h *recvh,
   dtls_close_h *closeh, void *arg);
int dtls_accept(struct tls_conn **ptc, struct tls *tls,
  struct dtls_sock *sock,
  dtls_estab_h *estabh, dtls_recv_h *recvh,
  dtls_close_h *closeh, void *arg);
int dtls_send(struct tls_conn *tc, struct mbuf *mb);
void dtls_set_handlers(struct tls_conn *tc, dtls_estab_h *estabh,
         dtls_recv_h *recvh, dtls_close_h *closeh, void *arg);
const struct sa *dtls_peer(const struct tls_conn *tc);
void dtls_set_peer(struct tls_conn *tc, const struct sa *peer);










enum {
 TURN_DEFAULT_LIFETIME = 600,
 TURN_MAX_LIFETIME = 3600
};

typedef void(turnc_h)(int err, uint16_t scode, const char *reason,
        const struct sa *relay_addr,
        const struct sa *mapped_addr,
        const struct stun_msg *msg,
        void *arg);
typedef void(turnc_perm_h)(void *arg);
typedef void(turnc_chan_h)(void *arg);

struct turnc;

int turnc_alloc(struct turnc **turncp, const struct stun_conf *conf, int proto,
  void *sock, int layer, const struct sa *srv,
  const char *username, const char *password,
  uint32_t lifetime, turnc_h *th, void *arg);
int turnc_send(struct turnc *turnc, const struct sa *dst, struct mbuf *mb);
int turnc_recv(struct turnc *turnc, struct sa *src, struct mbuf *mb);
int turnc_add_perm(struct turnc *turnc, const struct sa *peer,
     turnc_perm_h *ph, void *arg);
int turnc_add_chan(struct turnc *turnc, const struct sa *peer,
     turnc_chan_h *ch, void *arg);









struct sa;
struct udp_sock;

typedef void (udp_recv_h)(const struct sa *src, struct mbuf *mb, void *arg);
typedef void (udp_error_h)(int err, void *arg);


int udp_listen(struct udp_sock **usp, const struct sa *local,
  udp_recv_h *rh, void *arg);
int udp_connect(struct udp_sock *us, const struct sa *peer);
int udp_send(struct udp_sock *us, const struct sa *dst, struct mbuf *mb);
int udp_send_anon(const struct sa *dst, struct mbuf *mb);
int udp_local_get(const struct udp_sock *us, struct sa *local);
int udp_setsockopt(struct udp_sock *us, int level, int optname,
      const void *optval, uint32_t optlen);
int udp_sockbuf_set(struct udp_sock *us, int size);
void udp_rxsz_set(struct udp_sock *us, size_t rxsz);
void udp_rxbuf_presz_set(struct udp_sock *us, size_t rx_presz);
void udp_handler_set(struct udp_sock *us, udp_recv_h *rh, void *arg);
void udp_error_handler_set(struct udp_sock *us, udp_error_h *eh);
int udp_thread_attach(struct udp_sock *us);
void udp_thread_detach(struct udp_sock *us);
int udp_sock_fd(const struct udp_sock *us, int af);

int udp_multicast_join(struct udp_sock *us, const struct sa *group);
int udp_multicast_leave(struct udp_sock *us, const struct sa *group);



typedef signed char (udp_helper_send_h)(int *err, struct sa *dst,
     struct mbuf *mb, void *arg);
typedef signed char (udp_helper_recv_h)(struct sa *src,
     struct mbuf *mb, void *arg);

struct udp_helper;


int udp_register_helper(struct udp_helper **uhp, struct udp_sock *us,
   int layer,
   udp_helper_send_h *sh, udp_helper_recv_h *rh,
   void *arg);
int udp_send_helper(struct udp_sock *us, const struct sa *dst,
      struct mbuf *mb, struct udp_helper *uh);
struct udp_helper *udp_helper_find(const struct udp_sock *us, int layer);









enum {
 WEBSOCK_VERSION = 13,
};

enum websock_opcode {

 WEBSOCK_CONT = 0x0,
 WEBSOCK_TEXT = 0x1,
 WEBSOCK_BIN = 0x2,

 WEBSOCK_CLOSE = 0x8,
 WEBSOCK_PING = 0x9,
 WEBSOCK_PONG = 0xa,
};

enum websock_scode {
 WEBSOCK_NORMAL_CLOSURE = 1000,
 WEBSOCK_GOING_AWAY = 1001,
 WEBSOCK_PROTOCOL_ERROR = 1002,
 WEBSOCK_UNSUPPORTED_DATA = 1003,
 WEBSOCK_INVALID_PAYLOAD = 1007,
 WEBSOCK_POLICY_VIOLATION = 1008,
 WEBSOCK_MESSAGE_TOO_BIG = 1009,
 WEBSOCK_EXTENSION_ERROR = 1010,
 WEBSOCK_INTERNAL_ERROR = 1011,
};

struct websock_hdr {
 unsigned fin:1;
 unsigned rsv1:1;
 unsigned rsv2:1;
 unsigned rsv3:1;
 unsigned opcode:4;
 unsigned mask:1;
 uint64_t len;
 uint8_t mkey[4];
};

struct websock;
struct websock_conn;

typedef void (websock_estab_h)(void *arg);
typedef void (websock_recv_h)(const struct websock_hdr *hdr, struct mbuf *mb,
         void *arg);
typedef void (websock_close_h)(int err, void *arg);


int websock_connect(struct websock_conn **connp, struct websock *sock,
      struct http_cli *cli, const char *uri, unsigned kaint,
      websock_estab_h *estabh, websock_recv_h *recvh,
      websock_close_h *closeh, void *arg,
      const char *fmt, ...);
int websock_accept(struct websock_conn **connp, struct websock *sock,
     struct http_conn *htconn, const struct http_msg *msg,
     unsigned kaint, websock_recv_h *recvh,
     websock_close_h *closeh, void *arg);
int websock_send(struct websock_conn *conn, enum websock_opcode opcode,
   const char *fmt, ...);
int websock_close(struct websock_conn *conn, enum websock_scode scode,
    const char *fmt, ...);
const struct sa *websock_peer(const struct websock_conn *conn);

typedef void (websock_shutdown_h)(void *arg);

int websock_alloc(struct websock **sockp, websock_shutdown_h *shuth,
     void *arg);
void websock_shutdown(struct websock *sock);





















enum aufmt {
 AUFMT_S16LE,
 AUFMT_PCMA,
 AUFMT_PCMU,
 AUFMT_FLOAT,
 AUFMT_S24_3LE,
};

size_t aufmt_sample_size(enum aufmt fmt);
const char *aufmt_name(enum aufmt fmt);








struct aubuf;

int aubuf_alloc(struct aubuf **abp, size_t min_sz, size_t max_sz);
int aubuf_append(struct aubuf *ab, struct mbuf *mb);
int aubuf_write(struct aubuf *ab, const uint8_t *p, size_t sz);
void aubuf_read(struct aubuf *ab, uint8_t *p, size_t sz);
int aubuf_get(struct aubuf *ab, uint32_t ptime, uint8_t *p, size_t sz);
void aubuf_flush(struct aubuf *ab);
int aubuf_debug(struct re_printf *pf, const struct aubuf *ab);
size_t aubuf_cur_size(const struct aubuf *ab);

/*
static inline int aubuf_write_samp(struct aubuf *ab, const int16_t *sampv,
       size_t sampc)
{
 return aubuf_write(ab, (const uint8_t *)sampv, sampc * 2);
}


static inline void aubuf_read_samp(struct aubuf *ab, int16_t *sampv,
       size_t sampc)
{
 aubuf_read(ab, (uint8_t *)sampv, sampc * 2);
}


static inline int aubuf_get_samp(struct aubuf *ab, uint32_t ptime,
     int16_t *sampv, size_t sampc)
{
 return aubuf_get(ab, ptime, (uint8_t *)sampv, sampc * 2);
}
*/








void auconv_from_s16(enum aufmt dst_fmt, void *dst_sampv,
       const int16_t *src_sampv, size_t sampc);
void auconv_to_s16(int16_t *dst_sampv, enum aufmt src_fmt,
     void *src_sampv, size_t sampc);










enum aufile_mode {
 AUFILE_READ,
 AUFILE_WRITE,
};


struct aufile_prm {
 uint32_t srate;
 uint8_t channels;
 enum aufmt fmt;
};

struct aufile;

int aufile_open(struct aufile **afp, struct aufile_prm *prm,
  const char *filename, enum aufile_mode mode);
int aufile_read(struct aufile *af, uint8_t *p, size_t *sz);
int aufile_write(struct aufile *af, const uint8_t *p, size_t sz);









int autone_sine(struct mbuf *mb, uint32_t srate,
  uint32_t f1, int l1, uint32_t f2, int l2);
int autone_dtmf(struct mbuf *mb, uint32_t srate, int digit);








struct aumix;
struct aumix_source;

typedef void (aumix_frame_h)(const int16_t *sampv, size_t sampc, void *arg);

int aumix_alloc(struct aumix **mixp, uint32_t srate,
  uint8_t ch, uint32_t ptime);
int aumix_playfile(struct aumix *mix, const char *filepath);
uint32_t aumix_source_count(const struct aumix *mix);
int aumix_source_alloc(struct aumix_source **srcp, struct aumix *mix,
         aumix_frame_h *fh, void *arg);
void aumix_source_enable(struct aumix_source *src, signed char enable);
int aumix_source_put(struct aumix_source *src, const int16_t *sampv,
        size_t sampc);
void aumix_source_flush(struct aumix_source *src);









struct fir {
 int16_t history[256];
 unsigned index;
};

void fir_reset(struct fir *fir);
void fir_filter(struct fir *fir, int16_t *outv, const int16_t *inv, size_t inc,
  unsigned ch, const int16_t *tapv, size_t tapc);



typedef void (auresamp_h)(int16_t *outv, const int16_t *inv,
     size_t inc, unsigned ratio);


struct auresamp {
 struct fir fir;
 auresamp_h *resample;
 const int16_t *tapv;
 size_t tapc;
 uint32_t orate, irate;
 unsigned och, ich;
 unsigned ratio;
 signed char up;
};

void auresamp_init(struct auresamp *rs);
int auresamp_setup(struct auresamp *rs, uint32_t irate, unsigned ich,
      uint32_t orate, unsigned och);
int auresamp(struct auresamp *rs, int16_t *outv, size_t *outc,
       const int16_t *inv, size_t inc);









extern const uint8_t g711_l2u[4096];
extern const uint8_t g711_l2A[2048];
extern const int16_t g711_u2l[256];
extern const int16_t g711_A2l[256];
/*
static inline uint8_t g711_pcm2ulaw(int16_t l)
{
 const uint8_t mask = (l < 0) ? 0x7f : 0xff;
 if (l < 0)
  l = -l;
 if (l < 4)
  return 0xff & mask;
 l -= 4;
 l >>= 3;

 return g711_l2u[l] & mask;
}

static inline uint8_t g711_pcm2alaw(int16_t l)
{
 const uint8_t mask = (l < 0) ? 0x7f : 0xff;
 if (l < 0)
  l = -l;
 l >>= 4;

 return g711_l2A[l] & mask;
}

static inline int16_t g711_ulaw2pcm(uint8_t u)
{
 return g711_u2l[u];
}

static inline int16_t g711_alaw2pcm(uint8_t a)
{
 return g711_A2l[a];
}
*/


















enum vidfmt {
 VID_FMT_YUV420P = 0,
 VID_FMT_YUYV422,
 VID_FMT_UYVY422,
 VID_FMT_RGB32,
 VID_FMT_ARGB,
 VID_FMT_RGB565,
 VID_FMT_RGB555,
 VID_FMT_NV12,
 VID_FMT_NV21,
 VID_FMT_YUV444P,

 VID_FMT_N
};


struct vidfmt_compdesc {
 unsigned plane_index:2;
 unsigned step:3;
};


struct vidfmt_desc {
 const char *name;
 uint8_t planes;
 uint8_t compn;
 struct vidfmt_compdesc compv[4];
};


enum vidorient {
 VIDORIENT_PORTRAIT,
 VIDORIENT_PORTRAIT_UPSIDEDOWN,
 VIDORIENT_LANDSCAPE_LEFT,
 VIDORIENT_LANDSCAPE_RIGHT,
};


struct vidsz {
 unsigned w;
 unsigned h;
};


struct vidframe {
 uint8_t *data[4];
 uint16_t linesize[4];
 struct vidsz size;
 enum vidfmt fmt;
};


struct vidpt {
 unsigned x;
 unsigned y;
};


struct vidrect {
 unsigned x;
 unsigned y;
 unsigned w;
 unsigned h;
};
/*
static inline signed char vidsz_cmp(const struct vidsz *a, const struct vidsz *b)
{
 if (!a || !b)
  return 0;

 if (a == b)
  return 1;

 return a->w == b->w && a->h == b->h;
}


static inline signed char vidrect_cmp(const struct vidrect *a,
          const struct vidrect *b)
{
 if (!a || !b)
  return 0;

 if (a == b)
  return 1;

 return a->x == b->x && a->y == b->y && a->w == b->w && a->h == b->h;
}


static inline int rgb2y(uint8_t r, uint8_t g, uint8_t b)
{
 return ((66 * r + 129 * g + 25 * b + 128) >> 8) + 16;
}


static inline int rgb2u(uint8_t r, uint8_t g, uint8_t b)
{
 return ((-38 * r - 74 * g + 112 * b + 128) >> 8) + 128;
}


static inline int rgb2v(uint8_t r, uint8_t g, uint8_t b)
{
 return ((112 * r - 94 * g - 18 * b + 128) >> 8) + 128;
}
*/

size_t vidframe_size(enum vidfmt fmt, const struct vidsz *sz);
void vidframe_init(struct vidframe *vf, enum vidfmt fmt,
     const struct vidsz *sz, void *data[4],
     unsigned linesize[4]);
void vidframe_init_buf(struct vidframe *vf, enum vidfmt fmt,
         const struct vidsz *sz, uint8_t *buf);
int vidframe_alloc(struct vidframe **vfp, enum vidfmt fmt,
      const struct vidsz *sz);
void vidframe_fill(struct vidframe *vf, uint32_t r, uint32_t g, uint32_t b);
void vidframe_copy(struct vidframe *dst, const struct vidframe *src);


const char *vidfmt_name(enum vidfmt fmt);

/*
static inline signed char vidframe_isvalid(const struct vidframe *f)
{
 return f ? f->data[0] != ((void*)0) : 0;
}
*/

extern const struct vidfmt_desc vidfmt_descv[VID_FMT_N];



void vidframe_draw_point(struct vidframe *f, unsigned x, unsigned y,
    uint8_t r, uint8_t g, uint8_t b);
void vidframe_draw_hline(struct vidframe *f,
    unsigned x0, unsigned y0, unsigned w,
    uint8_t r, uint8_t g, uint8_t b);
void vidframe_draw_vline(struct vidframe *f,
    unsigned x0, unsigned y0, unsigned h,
    uint8_t r, uint8_t g, uint8_t b);
void vidframe_draw_rect(struct vidframe *f,
   unsigned x0, unsigned y0, unsigned w, unsigned h,
   uint8_t r, uint8_t g, uint8_t b);









struct vidmix;
struct vidmix_source;

typedef void (vidmix_frame_h)(uint32_t ts, const struct vidframe *frame,
         void *arg);

int vidmix_alloc(struct vidmix **mixp);
int vidmix_source_alloc(struct vidmix_source **srcp, struct vidmix *mix,
    const struct vidsz *sz, unsigned fps, signed char content,
    vidmix_frame_h *fh, void *arg);
signed char vidmix_source_isenabled(const struct vidmix_source *src);
signed char vidmix_source_isrunning(const struct vidmix_source *src);
void *vidmix_source_get_focus(const struct vidmix_source *src);
void vidmix_source_enable(struct vidmix_source *src, signed char enable);
int vidmix_source_start(struct vidmix_source *src);
void vidmix_source_stop(struct vidmix_source *src);
int vidmix_source_set_size(struct vidmix_source *src, const struct vidsz *sz);
void vidmix_source_set_rate(struct vidmix_source *src, unsigned fps);
void vidmix_source_set_content_hide(struct vidmix_source *src, signed char hide);
void vidmix_source_toggle_selfview(struct vidmix_source *src);
void vidmix_source_set_focus(struct vidmix_source *src,
        const struct vidmix_source *focus_src,
        signed char focus_full);
void vidmix_source_set_focus_idx(struct vidmix_source *src, unsigned pidx);
void vidmix_source_put(struct vidmix_source *src,
         const struct vidframe *frame);









void vidconv(struct vidframe *dst, const struct vidframe *src,
      struct vidrect *r);
void vidconv_aspect(struct vidframe *dst, const struct vidframe *src,
      struct vidrect *r);



/*
static inline uint8_t saturate_u8(int32_t a)
{
 return (a > (int32_t)(255)) ? (255) : ((a < 0) ? 0 : a);
}

static inline int16_t saturate_s15(int32_t a)
{
 if (a > 0x3fff)
  return 0x3fff;
 else if (a < (-0x3fff - 1))
  return (-0x3fff - 1);
 else
  return a;
}

static inline int16_t saturate_s16(int32_t a)
{
 if (a > (32767))
  return (32767);
 else if (a < (-32767-1))
  return (-32767-1);
 else
  return a;
}

static inline int16_t saturate_add16(int32_t a, int32_t b)
{
 return saturate_s16(a + b);
}


static inline int16_t saturate_sub16(int32_t a, int32_t b)
{
 return saturate_s16(a - b);
}

static inline int ABS32(int a)
{
 return a > 0 ? a : -a;
}
*/



struct sa;
struct sdp_media;
struct sdp_session;
struct sip_msg;
struct ua;
struct vidframe;
struct vidrect;
struct vidsz;







enum answermode {
 ANSWERMODE_MANUAL = 0,
 ANSWERMODE_EARLY,
 ANSWERMODE_AUTO
};

struct account;

int account_alloc(struct account **accp, const char *sipaddr);
int account_debug(struct re_printf *pf, const struct account *acc);
int account_set_auth_pass(struct account *acc, const char *pass);
int account_set_display_name(struct account *acc, const char *dname);
int account_auth(const struct account *acc, char **username, char **password,
   const char *realm);
struct list *account_aucodecl(const struct account *acc);
struct list *account_vidcodecl(const struct account *acc);
struct sip_addr *account_laddr(const struct account *acc);
uint32_t account_regint(const struct account *acc);
uint32_t account_pubint(const struct account *acc);
uint32_t account_ptime(const struct account *acc);
enum answermode account_answermode(const struct account *acc);
const char *account_aor(const struct account *acc);
const char *account_auth_user(const struct account *acc);
const char *account_auth_pass(const struct account *acc);
const char *account_outbound(const struct account *acc, unsigned ix);
const char *account_stun_user(const struct account *acc);
const char *account_stun_pass(const struct account *acc);
const char *account_stun_host(const struct account *acc);

double aulevel_calc_dbov(const int16_t *sampv, size_t sampc);






enum call_event {
 CALL_EVENT_INCOMING,
 CALL_EVENT_RINGING,
 CALL_EVENT_PROGRESS,
 CALL_EVENT_ESTABLISHED,
 CALL_EVENT_CLOSED,
 CALL_EVENT_TRANSFER,
 CALL_EVENT_TRANSFER_FAILED,
};

struct call;

typedef void (call_event_h)(struct call *call, enum call_event ev,
       const char *str, void *arg);
typedef void (call_dtmf_h)(struct call *call, char key, void *arg);

int call_modify(struct call *call);
int call_hold(struct call *call, signed char hold);
int call_send_digit(struct call *call, char key);
signed char call_has_audio(const struct call *call);
signed char call_has_video(const struct call *call);
int call_transfer(struct call *call, const char *uri);
int call_status(struct re_printf *pf, const struct call *call);
int call_debug(struct re_printf *pf, const struct call *call);
void call_set_handlers(struct call *call, call_event_h *eh,
         call_dtmf_h *dtmfh, void *arg);
uint16_t call_scode(const struct call *call);
uint32_t call_duration(const struct call *call);
uint32_t call_setup_duration(const struct call *call);
const char *call_peeruri(const struct call *call);
const char *call_peername(const struct call *call);
const char *call_localuri(const struct call *call);
struct audio *call_audio(const struct call *call);
struct video *call_video(const struct call *call);
struct list *call_streaml(const struct call *call);
struct ua *call_get_ua(const struct call *call);
signed char call_is_onhold(const struct call *call);
signed char call_is_outgoing(const struct call *call);
void call_enable_rtp_timeout(struct call *call, uint32_t timeout_ms);
uint32_t call_linenum(const struct call *call);
struct call *call_find_linenum(const struct list *calls, uint32_t linenum);
void call_set_current(struct list *calls, struct call *call);

typedef int (confline_h)(const struct pl *addr, void *arg);

int conf_configure(void);
int conf_modules(void);
void conf_path_set(const char *path);
int conf_path_get(char *path, size_t sz);
int conf_parse(const char *filename, confline_h *ch, void *arg);
int conf_get_vidsz(const struct conf *conf, const char *name,
      struct vidsz *sz);
int conf_get_sa(const struct conf *conf, const char *name, struct sa *sa);
signed char conf_fileexist(const char *path);
void conf_close(void);
struct conf *conf_cur(void);







struct range {
 uint32_t min;
 uint32_t max;
};
/*
static inline signed char in_range(const struct range *rng, uint32_t val)
{
 return rng ? (val >= rng->min && val <= rng->max) : 0;
}
*/

enum audio_mode {
 AUDIO_MODE_POLL = 0,
 AUDIO_MODE_THREAD,
 AUDIO_MODE_THREAD_REALTIME,
 AUDIO_MODE_TMR
};



struct config_sip {
 uint32_t trans_bsize;
 char uuid[64];
 char local[64];
 char cert[256];
};


struct config_call {
 uint32_t local_timeout;
 uint32_t max_calls;
};


struct config_audio {
 char audio_path[256];
 char src_mod[16];
 char src_dev[128];
 char play_mod[16];
 char play_dev[128];
 char alert_mod[16];
 char alert_dev[128];
 struct range srate;
 struct range channels;
 uint32_t srate_play;
 uint32_t srate_src;
 uint32_t channels_play;
 uint32_t channels_src;
 signed char src_first;
 enum audio_mode txmode;
 signed char level;
};

struct config_avt {
 uint8_t rtp_tos;
 struct range rtp_ports;
 struct range rtp_bw;
 signed char rtcp_enable;
 signed char rtcp_mux;
 struct range jbuf_del;
 signed char rtp_stats;
 uint32_t rtp_timeout;
};


struct config_net {
 char ifname[16];
 struct {
  char addr[64];
 } nsv[(4)];
 size_t nsc;
};

struct config {

 struct config_sip sip;

 struct config_call call;

 struct config_audio audio;




 struct config_avt avt;

 struct config_net net;




};

int config_parse_conf(struct config *cfg, const struct conf *conf);
int config_print(struct re_printf *pf, const struct config *cfg);
int config_write_template(const char *file, const struct config *cfg);
struct config *conf_config(void);






enum presence_status {
 PRESENCE_UNKNOWN,
 PRESENCE_OPEN,
 PRESENCE_CLOSED,
 PRESENCE_BUSY
};


struct contact;
typedef void (contact_update_h)(struct contact *c, signed char removed, void *arg);

struct contacts {
 struct list cl;
 struct hash *cht;

 contact_update_h *handler;
 void* handler_arg;
};


int contact_init(struct contacts *contacts);
void contact_close(struct contacts *contacts);
int contact_add(struct contacts *contacts,
   struct contact **contactp, const struct pl *addr);
void contact_remove(struct contacts *contacts, struct contact *c);
void contact_set_update_handler(struct contacts *contacs,
    contact_update_h *updateh, void *arg);
int contacts_print(struct re_printf *pf, const struct contacts *contacts);
enum presence_status contact_presence(const struct contact *c);
void contact_set_presence(struct contact *c, enum presence_status status);
signed char contact_block_access(const struct contacts *contacts, const char *uri);
struct contact *contact_find(const struct contacts *contacts,
         const char *uri);
struct sip_addr *contact_addr(const struct contact *c);
struct list *contact_list(const struct contacts *contacts);
const char *contact_str(const struct contact *c);
const char *contact_presence_str(enum presence_status status);







struct media_ctx {
 const char *id;
};






typedef void (message_recv_h)(const struct pl *peer, const struct pl *ctype,
         struct mbuf *body, void *arg);

struct message;
struct message_lsnr;

int message_init(struct message **messagep);
int message_listen(struct message_lsnr **lsnrp, struct message *message,
      message_recv_h *h, void *arg);
int message_send(struct ua *ua, const char *peer, const char *msg,
    sip_resp_h *resph, void *arg);






struct ausrc;
struct ausrc_st;


struct ausrc_prm {
 uint32_t srate;
 uint8_t ch;
 uint32_t ptime;
};

typedef void (ausrc_read_h)(const int16_t *sampv, size_t sampc, void *arg);
typedef void (ausrc_error_h)(int err, const char *str, void *arg);

typedef int (ausrc_alloc_h)(struct ausrc_st **stp, const struct ausrc *ausrc,
        struct media_ctx **ctx,
        struct ausrc_prm *prm, const char *device,
        ausrc_read_h *rh, ausrc_error_h *errh, void *arg);

int ausrc_register(struct ausrc **asp, struct list *ausrcl, const char *name,
     ausrc_alloc_h *alloch);
const struct ausrc *ausrc_find(const struct list *ausrcl, const char *name);
int ausrc_alloc(struct ausrc_st **stp, struct list *ausrcl,
  struct media_ctx **ctx,
  const char *name,
  struct ausrc_prm *prm, const char *device,
  ausrc_read_h *rh, ausrc_error_h *errh, void *arg);






struct auplay;
struct auplay_st;


struct auplay_prm {
 uint32_t srate;
 uint8_t ch;
 uint32_t ptime;
};

typedef void (auplay_write_h)(int16_t *sampv, size_t sampc, void *arg);

typedef int (auplay_alloc_h)(struct auplay_st **stp, const struct auplay *ap,
         struct auplay_prm *prm, const char *device,
         auplay_write_h *wh, void *arg);

int auplay_register(struct auplay **pp, struct list *auplayl,
      const char *name, auplay_alloc_h *alloch);
const struct auplay *auplay_find(const struct list *auplayl, const char *name);
int auplay_alloc(struct auplay_st **stp, struct list *auplayl,
   const char *name,
   struct auplay_prm *prm, const char *device,
   auplay_write_h *wh, void *arg);






struct aufilt;


struct aufilt_enc_st {
 const struct aufilt *af;
 struct le le;
};

struct aufilt_dec_st {
 const struct aufilt *af;
 struct le le;
};


struct aufilt_prm {
 uint32_t srate;
 uint8_t ch;
 uint32_t ptime;
};

typedef int (aufilt_encupd_h)(struct aufilt_enc_st **stp, void **ctx,
         const struct aufilt *af, struct aufilt_prm *prm);
typedef int (aufilt_encode_h)(struct aufilt_enc_st *st,
         int16_t *sampv, size_t *sampc);

typedef int (aufilt_decupd_h)(struct aufilt_dec_st **stp, void **ctx,
         const struct aufilt *af, struct aufilt_prm *prm);
typedef int (aufilt_decode_h)(struct aufilt_dec_st *st,
         int16_t *sampv, size_t *sampc);

struct aufilt {
 struct le le;
 const char *name;
 aufilt_encupd_h *encupdh;
 aufilt_encode_h *ench;
 aufilt_decupd_h *decupdh;
 aufilt_decode_h *dech;
};

void aufilt_register(struct list *aufiltl, struct aufilt *af);
void aufilt_unregister(struct aufilt *af);






enum log_level {
 LEVEL_DEBUG = 0,
 LEVEL_INFO,
 LEVEL_WARN,
 LEVEL_ERROR,
};

typedef void (log_h)(uint32_t level, const char *msg);

struct log {
 struct le le;
 log_h *h;
};

void log_register_handler(struct log *logh);
void log_unregister_handler(struct log *logh);
void log_enable_debug(signed char enable);
void log_enable_info(signed char enable);
void log_enable_stderr(signed char enable);
//void vlog(enum log_level level, const char *fmt, va_list ap);
void loglv(enum log_level level, const char *fmt, ...);
void debug(const char *fmt, ...);
void info(const char *fmt, ...);
void warning(const char *fmt, ...);
void error(const char *fmt, ...);






struct menc;
struct menc_sess;
struct menc_media;


typedef void (menc_error_h)(int err, void *arg);

typedef int (menc_sess_h)(struct menc_sess **sessp, struct sdp_session *sdp,
      signed char offerer, menc_error_h *errorh, void *arg);

typedef int (menc_media_h)(struct menc_media **mp, struct menc_sess *sess,
       struct rtp_sock *rtp, int proto,
       void *rtpsock, void *rtcpsock,
       struct sdp_media *sdpm);

struct menc {
 struct le le;
 const char *id;
 const char *sdp_proto;
 menc_sess_h *sessh;
 menc_media_h *mediah;
};

void menc_register(struct list *mencl, struct menc *menc);
void menc_unregister(struct menc *menc);
const struct menc *menc_find(const struct list *mencl, const char *id);






struct network;

typedef void (net_change_h)(void *arg);

int net_alloc(struct network **netp, const struct config_net *cfg, int af);
int net_use_nameserver(struct network *net, const struct sa *ns);
void net_change(struct network *net, uint32_t interval,
  net_change_h *ch, void *arg);
void net_force_change(struct network *net);
signed char net_check(struct network *net);
int net_af(const struct network *net);
int net_debug(struct re_printf *pf, const struct network *net);
const struct sa *net_laddr_af(const struct network *net, int af);
const char *net_domain(const struct network *net);
struct dnsc *net_dnsc(const struct network *net);






struct play;
struct player;

int play_file(struct play **playp, struct player *player,
        const char *filename, int repeat);
int play_tone(struct play **playp, struct player *player,
        struct mbuf *tone,
        uint32_t srate, uint8_t ch, int repeat);
int play_init(struct player **playerp);
void play_set_path(struct player *player, const char *path);






struct ua;


enum ua_event {
 UA_EVENT_REGISTERING = 0,
 UA_EVENT_REGISTER_OK,
 UA_EVENT_REGISTER_FAIL,
 UA_EVENT_UNREGISTERING,
 UA_EVENT_SHUTDOWN,
 UA_EVENT_EXIT,

 UA_EVENT_CALL_INCOMING,
 UA_EVENT_CALL_RINGING,
 UA_EVENT_CALL_PROGRESS,
 UA_EVENT_CALL_ESTABLISHED,
 UA_EVENT_CALL_CLOSED,
 UA_EVENT_CALL_TRANSFER_FAILED,
 UA_EVENT_CALL_DTMF_START,
 UA_EVENT_CALL_DTMF_END,

 UA_EVENT_MAX,
};


enum vidmode {
 VIDMODE_OFF = 0,
 VIDMODE_ON,
};


typedef void (ua_event_h)(struct ua *ua, enum ua_event ev,
     struct call *call, const char *prm, void *arg);
typedef void (options_resp_h)(int err, const struct sip_msg *msg, void *arg);

typedef void (ua_exit_h)(void *arg);


int ua_alloc(struct ua **uap, const char *aor);
int ua_connect(struct ua *ua, struct call **callp,
  const char *from_uri, const char *uri,
  const char *params, enum vidmode vmode);
void ua_hangup(struct ua *ua, struct call *call,
        uint16_t scode, const char *reason);
int ua_answer(struct ua *ua, struct call *call);
int ua_progress(struct ua *ua, struct call *call);
int ua_hold_answer(struct ua *ua, struct call *call);
int ua_options_send(struct ua *ua, const char *uri,
       options_resp_h *resph, void *arg);
int ua_sipfd(const struct ua *ua);
int ua_debug(struct re_printf *pf, const struct ua *ua);
int ua_print_calls(struct re_printf *pf, const struct ua *ua);
int ua_print_status(struct re_printf *pf, const struct ua *ua);
int ua_print_supported(struct re_printf *pf, const struct ua *ua);
int ua_register(struct ua *ua);
void ua_unregister(struct ua *ua);
signed char ua_isregistered(const struct ua *ua);
void ua_pub_gruu_set(struct ua *ua, const struct pl *pval);
const char *ua_aor(const struct ua *ua);
const char *ua_cuser(const struct ua *ua);
const char *ua_local_cuser(const struct ua *ua);
struct account *ua_account(const struct ua *ua);
const char *ua_outbound(const struct ua *ua);
struct call *ua_call(const struct ua *ua);
struct call *ua_prev_call(const struct ua *ua);
struct list *ua_calls(const struct ua *ua);
enum presence_status ua_presence_status(const struct ua *ua);
void ua_presence_status_set(struct ua *ua, const enum presence_status status);
void ua_set_media_af(struct ua *ua, int af_media);



int ua_init(const char *software, signed char udp, signed char tcp, signed char tls,
      signed char prefer_ipv6);
void ua_close(void);
void ua_stop_all(signed char forced);
void uag_set_exit_handler(ua_exit_h *exith, void *arg);
int uag_reset_transp(signed char reg, signed char reinvite);
int uag_event_register(ua_event_h *eh, void *arg);
void uag_event_unregister(ua_event_h *eh);
void uag_set_sub_handler(sip_msg_h *subh);
int ua_print_sip_status(struct re_printf *pf, void *unused);
int uag_set_extra_params(const char *eprm);
struct ua *uag_find(const struct pl *cuser);
struct ua *uag_find_aor(const char *aor);
struct ua *uag_find_param(const char *name, const char *val);
struct sip *uag_sip(void);
const char *uag_event_str(enum ua_event ev);
struct list *uag_list(void);
void uag_current_set(struct ua *ua);
struct ua *uag_current(void);
struct sipsess_sock *uag_sipsess_sock(void);
struct sipevent_sock *uag_sipevent_sock(void);






struct ui_sub {
 struct list uil;
 struct cmd_ctx *uictx;
};

typedef int (ui_output_h)(const char *str);


struct ui {
 struct le le;
 const char *name;
 ui_output_h *outputh;
};

void ui_register(struct ui_sub *uis, struct ui *ui);
void ui_unregister(struct ui *ui);

void ui_reset(struct ui_sub *uis);
void ui_input_key(struct ui_sub *uis, char key, struct re_printf *pf);
void ui_input_str(const char *str);
int ui_input_pl(struct re_printf *pf, const struct pl *pl);
void ui_output(struct ui_sub *uis, const char *fmt, ...);
signed char ui_isediting(const struct ui_sub *uis);
int ui_password_prompt(char **passwordp);

enum {
 CMD_PRM = 1,
 CMD_PROG = 2,

 CMD_IPRM = 3,
};


struct cmd_arg {
 char key;
 char *prm;
 signed char complete;
 void *data;
};


struct cmd {
 const char *name;
 char key;
 int flags;
 const char *desc;
 re_printf_h *h;
};

struct cmd_ctx;
struct commands;


int cmd_init(struct commands **commandsp);
int cmd_register(struct commands *commands,
    const struct cmd *cmdv, size_t cmdc);
void cmd_unregister(struct commands *commands, const struct cmd *cmdv);
int cmd_process(struct commands *commands, struct cmd_ctx **ctxp, char key,
   struct re_printf *pf, void *data);
int cmd_process_long(struct commands *commands, const char *str, size_t len,
        struct re_printf *pf_resp, void *data);
int cmd_print(struct re_printf *pf, const struct commands *commands);
const struct cmd *cmd_find_long(const struct commands *commands,
    const char *name);
struct cmds *cmds_find(const struct commands *commands,
         const struct cmd *cmdv);






struct vidsrc;
struct vidsrc_st;


struct vidsrc_prm {
 int orient;
 int fps;
};

typedef void (vidsrc_frame_h)(struct vidframe *frame, void *arg);
typedef void (vidsrc_error_h)(int err, void *arg);

typedef int (vidsrc_alloc_h)(struct vidsrc_st **vsp, const struct vidsrc *vs,
         struct media_ctx **ctx, struct vidsrc_prm *prm,
         const struct vidsz *size,
         const char *fmt, const char *dev,
         vidsrc_frame_h *frameh,
         vidsrc_error_h *errorh, void *arg);

typedef void (vidsrc_update_h)(struct vidsrc_st *st, struct vidsrc_prm *prm,
          const char *dev);

int vidsrc_register(struct vidsrc **vp, struct list *vidsrcl, const char *name,
      vidsrc_alloc_h *alloch, vidsrc_update_h *updateh);
const struct vidsrc *vidsrc_find(const struct list *vidsrcl, const char *name);
int vidsrc_alloc(struct vidsrc_st **stp, struct list *vidsrcl,
   const char *name,
   struct media_ctx **ctx, struct vidsrc_prm *prm,
   const struct vidsz *size, const char *fmt, const char *dev,
   vidsrc_frame_h *frameh, vidsrc_error_h *errorh, void *arg);






struct vidisp;
struct vidisp_st;


struct vidisp_prm {
 void *view;
 signed char fullscreen;
};

typedef void (vidisp_resize_h)(const struct vidsz *size, void *arg);

typedef int (vidisp_alloc_h)(struct vidisp_st **vp,
         const struct vidisp *vd, struct vidisp_prm *prm,
         const char *dev,
         vidisp_resize_h *resizeh, void *arg);
typedef int (vidisp_update_h)(struct vidisp_st *st, signed char fullscreen,
          int orient, const struct vidrect *window);
typedef int (vidisp_disp_h)(struct vidisp_st *st, const char *title,
        const struct vidframe *frame);
typedef void (vidisp_hide_h)(struct vidisp_st *st);

int vidisp_register(struct vidisp **vp, struct list *vidispl, const char *name,
      vidisp_alloc_h *alloch, vidisp_update_h *updateh,
      vidisp_disp_h *disph, vidisp_hide_h *hideh);
int vidisp_alloc(struct vidisp_st **stp, struct list *vidispl,
   const char *name,
   struct vidisp_prm *prm, const char *dev,
   vidisp_resize_h *resizeh, void *arg);
int vidisp_display(struct vidisp_st *st, const char *title,
     const struct vidframe *frame);
const struct vidisp *vidisp_find(const struct list *vidispl, const char *name);







struct auenc_param {
 uint32_t ptime;
};

struct auenc_state;
struct audec_state;
struct aucodec;

typedef int (auenc_update_h)(struct auenc_state **aesp,
        const struct aucodec *ac,
        struct auenc_param *prm, const char *fmtp);
typedef int (auenc_encode_h)(struct auenc_state *aes, uint8_t *buf,
        size_t *len, const int16_t *sampv, size_t sampc);

typedef int (audec_update_h)(struct audec_state **adsp,
        const struct aucodec *ac, const char *fmtp);
typedef int (audec_decode_h)(struct audec_state *ads, int16_t *sampv,
        size_t *sampc, const uint8_t *buf, size_t len);
typedef int (audec_plc_h)(struct audec_state *ads,
     int16_t *sampv, size_t *sampc);

struct aucodec {
 struct le le;
 const char *pt;
 const char *name;
 uint32_t srate;
 uint32_t crate;
 uint8_t ch;
 const char *fmtp;
 auenc_update_h *encupdh;
 auenc_encode_h *ench;
 audec_update_h *decupdh;
 audec_decode_h *dech;
 audec_plc_h *plch;
 sdp_fmtp_enc_h *fmtp_ench;
 sdp_fmtp_cmp_h *fmtp_cmph;
};

void aucodec_register(struct list *aucodecl, struct aucodec *ac);
void aucodec_unregister(struct aucodec *ac);
const struct aucodec *aucodec_find(const struct list *aucodecl,
       const char *name, uint32_t srate,
       uint8_t ch);







struct videnc_param {
 unsigned bitrate;
 unsigned pktsize;
 unsigned fps;
 uint32_t max_fs;
};

struct videnc_state;
struct viddec_state;
struct vidcodec;

typedef int (videnc_packet_h)(signed char marker, uint32_t rtp_ts,
         const uint8_t *hdr, size_t hdr_len,
         const uint8_t *pld, size_t pld_len,
         void *arg);

typedef int (videnc_update_h)(struct videnc_state **vesp,
         const struct vidcodec *vc,
         struct videnc_param *prm, const char *fmtp,
         videnc_packet_h *pkth, void *arg);
typedef int (videnc_encode_h)(struct videnc_state *ves, signed char update,
         const struct vidframe *frame);

typedef int (viddec_update_h)(struct viddec_state **vdsp,
         const struct vidcodec *vc, const char *fmtp);
typedef int (viddec_decode_h)(struct viddec_state *vds, struct vidframe *frame,
                              signed char *intra, signed char marker, uint16_t seq,
                              struct mbuf *mb);

struct vidcodec {
 struct le le;
 const char *pt;
 const char *name;
 const char *variant;
 const char *fmtp;
 videnc_update_h *encupdh;
 videnc_encode_h *ench;
 viddec_update_h *decupdh;
 viddec_decode_h *dech;
 sdp_fmtp_enc_h *fmtp_ench;
 sdp_fmtp_cmp_h *fmtp_cmph;
};

void vidcodec_register(struct list *vidcodecl, struct vidcodec *vc);
void vidcodec_unregister(struct vidcodec *vc);
const struct vidcodec *vidcodec_find(const struct list *vidcodecl,
         const char *name, const char *variant);
const struct vidcodec *vidcodec_find_encoder(const struct list *vidcodecl,
          const char *name);
const struct vidcodec *vidcodec_find_decoder(const struct list *vidcodecl,
          const char *name);






struct vidfilt;


struct vidfilt_enc_st {
 const struct vidfilt *vf;
 struct le le;
};

struct vidfilt_dec_st {
 const struct vidfilt *vf;
 struct le le;
};

typedef int (vidfilt_encupd_h)(struct vidfilt_enc_st **stp, void **ctx,
          const struct vidfilt *vf);
typedef int (vidfilt_encode_h)(struct vidfilt_enc_st *st,
          struct vidframe *frame);

typedef int (vidfilt_decupd_h)(struct vidfilt_dec_st **stp, void **ctx,
          const struct vidfilt *vf);
typedef int (vidfilt_decode_h)(struct vidfilt_dec_st *st,
          struct vidframe *frame);

struct vidfilt {
 struct le le;
 const char *name;
 vidfilt_encupd_h *encupdh;
 vidfilt_encode_h *ench;
 vidfilt_decupd_h *decupdh;
 vidfilt_decode_h *dech;
};

void vidfilt_register(struct list *vidfiltl, struct vidfilt *vf);
void vidfilt_unregister(struct vidfilt *vf);
int vidfilt_enc_append(struct list *filtl, void **ctx,
         const struct vidfilt *vf);
int vidfilt_dec_append(struct list *filtl, void **ctx,
         const struct vidfilt *vf);






struct audio;

void audio_mute(struct audio *a, signed char muted);
signed char audio_ismuted(const struct audio *a);
void audio_set_devicename(struct audio *a, const char *src, const char *play);
int audio_set_source(struct audio *au, const char *mod, const char *device);
int audio_set_player(struct audio *au, const char *mod, const char *device);
void audio_encoder_cycle(struct audio *audio);
int audio_level_get(const struct audio *au, double *level);
int audio_debug(struct re_printf *pf, const struct audio *a);






struct video;

void video_mute(struct video *v, signed char muted);
void *video_view(const struct video *v);
int video_set_fullscreen(struct video *v, signed char fs);
int video_set_orient(struct video *v, int orient);
void video_vidsrc_set_device(struct video *v, const char *dev);
int video_set_source(struct video *v, const char *name, const char *dev);
void video_set_devicename(struct video *v, const char *src, const char *disp);
void video_encoder_cycle(struct video *video);
int video_debug(struct re_printf *pf, const struct video *v);
uint32_t video_calc_rtp_timestamp(int64_t pts, unsigned fps);
double video_calc_seconds(uint32_t rtp_ts);






struct mnat;
struct mnat_sess;
struct mnat_media;

typedef void (mnat_estab_h)(int err, uint16_t scode, const char *reason,
       void *arg);

typedef int (mnat_sess_h)(struct mnat_sess **sessp, struct dnsc *dnsc,
     int af, const char *srv, uint16_t port,
     const char *user, const char *pass,
     struct sdp_session *sdp, signed char offerer,
     mnat_estab_h *estabh, void *arg);

typedef int (mnat_media_h)(struct mnat_media **mp, struct mnat_sess *sess,
      int proto, void *sock1, void *sock2,
      struct sdp_media *sdpm);

typedef int (mnat_update_h)(struct mnat_sess *sess);

int mnat_register(struct mnat **mnatp, struct list *mnatl,
    const char *id, const char *ftag,
    mnat_sess_h *sessh, mnat_media_h *mediah,
    mnat_update_h *updateh);





int realtime_enable(signed char enable, int fps);






signed char sdp_media_has_media(const struct sdp_media *m);
int sdp_media_find_unused_pt(const struct sdp_media *m);
int sdp_fingerprint_decode(const char *attr, struct pl *hash,
       uint8_t *md, size_t *sz);
uint32_t sdp_media_rattr_u32(const struct sdp_media *sdpm, const char *name);
const char *sdp_rattr(const struct sdp_session *s, const struct sdp_media *m,
        const char *name);






int sip_req_send(struct ua *ua, const char *method, const char *uri,
   sip_resp_h *resph, void *arg, const char *fmt, ...);







enum {
 H264_NAL_UNKNOWN = 0,

 H264_NAL_SLICE = 1,
 H264_NAL_DPA = 2,
 H264_NAL_DPB = 3,
 H264_NAL_DPC = 4,
 H264_NAL_IDR_SLICE = 5,
 H264_NAL_SEI = 6,
 H264_NAL_SPS = 7,
 H264_NAL_PPS = 8,
 H264_NAL_AUD = 9,
 H264_NAL_END_SEQUENCE = 10,
 H264_NAL_END_STREAM = 11,
 H264_NAL_FILLER_DATA = 12,
 H264_NAL_SPS_EXT = 13,
 H264_NAL_AUX_SLICE = 19,

 H264_NAL_STAP_A = 24,
 H264_NAL_STAP_B = 25,
 H264_NAL_MTAP16 = 26,
 H264_NAL_MTAP24 = 27,
 H264_NAL_FU_A = 28,
 H264_NAL_FU_B = 29,
};

struct h264_hdr {
 unsigned f:1;
 unsigned nri:2;
 unsigned type:5;
};

int h264_hdr_encode(const struct h264_hdr *hdr, struct mbuf *mb);
int h264_hdr_decode(struct h264_hdr *hdr, struct mbuf *mb);


struct h264_fu {
 unsigned s:1;
 unsigned e:1;
 unsigned r:1;
 unsigned type:5;
};

int h264_fu_hdr_encode(const struct h264_fu *fu, struct mbuf *mb);
int h264_fu_hdr_decode(struct h264_fu *fu, struct mbuf *mb);

const uint8_t *h264_find_startcode(const uint8_t *p, const uint8_t *end);

int h264_packetize(uint32_t rtp_ts, const uint8_t *buf, size_t len,
     size_t pktsize, videnc_packet_h *pkth, void *arg);
int h264_nal_send(signed char first, signed char last,
    signed char marker, uint32_t ihdr, uint32_t rtp_ts,
    const uint8_t *buf, size_t size, size_t maxsz,
    videnc_packet_h *pkth, void *arg);
/*static inline signed char h264_is_keyframe(int type)
{
 return type == H264_NAL_SPS;
}*/

int module_preload(const char *module);
int module_load(const char *name);
void module_unload(const char *name);






double mos_calculate(double *r_factor, double rtt,
       double jitter, uint32_t num_packets_lost);






int baresip_init(struct config *cfg, signed char prefer_ipv6);
void baresip_close(void);
struct network *baresip_network(void);
struct contacts *baresip_contacts(void);
struct commands *baresip_commands(void);
struct player *baresip_player(void);
struct message *baresip_message(void);
struct list *baresip_mnatl(void);
struct list *baresip_mencl(void);
struct list *baresip_aucodecl(void);
struct list *baresip_ausrcl(void);
struct list *baresip_auplayl(void);
struct list *baresip_aufiltl(void);
struct list *baresip_vidcodecl(void);
struct list *baresip_vidsrcl(void);
struct list *baresip_vidispl(void);
struct list *baresip_vidfiltl(void);
struct ui_sub *baresip_uis(void);



