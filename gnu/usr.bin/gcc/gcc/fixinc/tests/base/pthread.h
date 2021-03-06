/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/pthread.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( AIX_PTHREAD_CHECK )
#define PTHREAD_MUTEX_INITIALIZER \
{...init stuff...}
#endif  /* AIX_PTHREAD_CHECK */


#if defined( ALPHA_PTHREAD_GCC_CHECK )
# define _PTHREAD_ENV_INTELC
#elif defined (__GNUC__)
# define _PTHREAD_ENV_GCC
#else
# error <pthread.h>: unrecognized compiler.
#endif
#endif  /* ALPHA_PTHREAD_GCC_CHECK */


#if defined( PTHREAD_PAGE_SIZE_CHECK )
extern int __page_size;
#endif  /* PTHREAD_PAGE_SIZE_CHECK */


#if defined( SOLARIS_MUTEX_INIT_1_CHECK )
#ident "@(#)pthread.h  1.16    97/05/05 SMI"
#if __STDC__ - 0 == 0 && !defined(_NO_LONGLONG)
#define PTHREAD_MUTEX_INITIALIZER	{{{0}, 0}, {{{0}}}, 0}
#else
#define PTHREAD_MUTEX_INITIALIZER	{{{0}, 0}, {{{0}}}, {0}}
#endif
#if __STDC__ - 0 == 0 && !defined(_NO_LONGLONG)
#define PTHREAD_COND_INITIALIZER	{{{0},0}, 0} /* */
#else
#define PTHREAD_COND_INITIALIZER	{{{0},0}, {0}} /* */
#endif

#endif  /* SOLARIS_MUTEX_INIT_1_CHECK */


#if defined( SOLARIS_MUTEX_INIT_2_CHECK )
#ident "@(#)pthread.h  1.26  98/04/12 SMI"
#if __STDC__ - 0 == 0 && !defined(_NO_LONGLONG)
#define PTHREAD_MUTEX_INITIALIZER	{{{0},0}, {{{0}}}, 0}
#else
#define PTHREAD_MUTEX_INITIALIZER	{{{0},0}, {{{0}}}, {0}}
#endif
#if __STDC__ - 0 == 0 && !defined(_NO_LONGLONG)
#define PTHREAD_COND_INITIALIZER	{{{0}, 0}, 0}	/* DEFAULTCV */
#else
#define PTHREAD_COND_INITIALIZER	{{{0}, 0}, {0}}	/* DEFAULTCV */
#endif
#define PTHREAD_RWLOCK_INITIALIZER	{0, 0, 0, {0, 0, 0}, {0, 0}, {0, 0}}
#endif  /* SOLARIS_MUTEX_INIT_2_CHECK */


#if defined( THREAD_KEYWORD_CHECK )
extern int pthread_create (pthread_t *__restrict __thr,
extern int pthread_kill (pthread_t __thr, int __signo);
extern int pthread_cancel (pthread_t __thr);
#endif  /* THREAD_KEYWORD_CHECK */
