/*#include <stdio.h>
#include <assert.h>
#include <sstream>
#include <stddef.h>

#include "dosbox.h"
#include "engine.h"
#include "mem.h"

#include "cpu.h"
#include "memory.h"
#include "debug.h"
#include "mapper.h"
#include "setup.h"
#include "programs.h"
#include "paging.h"
#include "callback.h"
#include "cpu/lazyflags.h"
#include "support.h"
#include "control.h"

//#include "engine.h"

#include "inout.h"
#include "callback.h"
#include "pic.h"
#include "fpu.h"
#include "mmx.h"

#include "debug.h"

*/

//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <direct.h>  
//#include <dir.h>
#include <io.h>  

#include "../portability/port_outputs.h"

//#include <sys/statvfs.h>
#include <windows.h>
#include "../portability/dirent.h"
#include "../portability/port_time.h"
#include "../portability/port_filesystem.h"
#include "defs.h"
#define __CFSHL__(x, y) printf("invalid_operation:__CFSHL__(x, y)")
#define __RCR__(x, y) printf("invalid_operation:__RCR__(x, y)")
#define __RCL__(x, y) printf("invalid_operation:__RCL__(x, y)")
#define __ROL4__(x, y) __ROL__(x, y)       // Rotate left
#define __ROR4__(x, y) __ROR__(x, y)       // Rotate left

#include "sub_main_mouse.h"

#include "ail_sound.h"

/* This file has been generated by the Hex-Rays decompiler.
Copyright (c) 2007-2017 Hex-Rays <info@hex-rays.com>

Detected compiler: Watcom C++
*/


/*int sub_main(int argc, char **argv, char **envp);
int sub_97F90(x_DWORD *a1);
int sub_980D0(x_DWORD *a1, int a2);
int sub_98170(x_DWORD *a1, int a2, int a3);
bool sub_9EDD0();
int sub_A158B(int a1, __int16 a2, x_WORD *a3, x_WORD *a4);
bool sub_A4CB0();
int sub_A4F10(int a1, char a2, char a3, char a4);
x_DWORD * sub_A5850(int a1, char a2, unsigned int a3, signed int a4, int a5);*/

#ifndef SUB_MAIN_ACTIVE
#define SUB_MAIN_ACTIVE


#define O_RDONLY        0x00    /* read only */
#define O_WRONLY        0x01    /* write only */
#define O_RDWR          0x02    /* read and write */
#define O_BINARY        0x10    /* file contains - binary data */
#define O_TEXT          0x20    /* - text (\n terminated records) */
#define O_CREAT         0x200   /* replace, or create t */
#define O_TRUNC         0x400   /* open with truncation */


#include "engine_support.h"

#if !defined(_M_I86) && !defined(__WINDOWS_386__)

struct SREGS {
    unsigned short es;
    unsigned short ds;
    unsigned short fs;
    unsigned short gs;
    unsigned short cs;
    unsigned short ss;
};

/* dword registers */

struct DWORDREGS {
    unsigned int eax;
    unsigned int ebx;
    unsigned int ecx;
    unsigned int edx;
    unsigned int esi;
    unsigned int edi;
    unsigned int cflag;
};

#endif
/*
// word registers 

struct WORDREGS {
    unsigned short ax;  //__FILLER(_1)
        unsigned short bx;  //__FILLER(_2)
        unsigned short cx;  //__FILLER(_3)
        unsigned short dx;  //__FILLER(_4)
        unsigned short si;  //__FILLER(_5)
        unsigned short di;  //__FILLER(_6)
#if defined(__WINDOWS_386__)
        unsigned short cflag;
#else
        unsigned int cflag;
#endif
};

// byte registers 

struct BYTEREGS {
    unsigned char al, ah;  //__FILLER(_1)
        unsigned char bl, bh;  //__FILLER(_2)
        unsigned char cl, ch;  //__FILLER(_3)
        unsigned char dl, dh;  //__FILLER(_4)
};

union REGS {
#if defined(_M_I86) || defined(__WINDOWS_386__)
    struct WORDREGS  x;
#else
    struct DWORDREGS x;
#endif
    struct WORDREGS  w;
    struct BYTEREGS  h;
};
*/
//#define REGS x_DWORD[6]

struct REGS {
    uint32 eax;
    uint32 ebx;
    uint32 ecx;
    uint32 edx;
    uint32 esi;
    uint32 edi;
    uint32 cflag;
};

extern x_WORD __CS__;
extern x_WORD __GS__;
extern x_WORD __DS__;
extern x_WORD __ES__;
extern x_WORD __FS__;
extern x_WORD __SS__;

extern char IsTable[];





int /*__noreturn*/ sub_10000(); // weak
unsigned int sub_15CB0(unsigned int a1, int a2); // weak
char sub_15D40(__int16 a1, int a2, int a3); // weak
int sub_16730(int a1, int a2, char a3); // weak
int sub_16CA0(int a1, int *a2, __int16 a3, char a4); // weak
char sub_17A00(x_BYTE *a1, signed int a2, __int16 a3); // weak
int _wcpp_1_unwind_leave__120(x_DWORD a, x_DWORD b, x_DWORD c);// weak
void sub_1A070(signed int a1, __int16 a2);
void JUMPOUT(int* adr);
void JUMPOUT(x_WORD cs, int* adr);
void JUMPOUT(x_WORD cs, int a, int* adr);
void sub_1F0C0(int a1, int a2);
int sub_253B0(int result, int a2, unsigned __int8 a3, unsigned __int8 a4);
signed int sub_369F0(signed int a1, __int16 a2);
void qmemcpy(void* a, void* b, size_t c);
char sub_2A340(int a1, int a2, int a3, int a4, int a5, int a6);
unsigned __int16 sub_2AA90(int a1, int a2, int a3);
void /*__spoils<ecx>*/ sub_72883_clear_text_mode(/*int a1, */void *a2, unsigned __int16 a3, char a4);
void /*__spoils<ecx>*/ sub_728A9_clear_graphics_mode(void *a2, unsigned __int16 a3, char a4);
void sub_303D0(signed int a1);
int _wcpp_1_unwind_leave__62(void); //weak
int sub_7FCB0_draw_text_with_border(int a1, Bit8u* a2, Bit32s a3, Bit32s a4, int a5, Bit8u a6, unsigned __int8 a7, Bit32u a8);//560cb0
char sub_45DC0(char a1, char a2, unsigned __int16 a3, unsigned __int8 a4);
signed int sub_36A50(signed int a1, char a2);
char sub_36920(signed __int16 a1, int a2);
__int16 sub_48A20(int a1, char a2, char a3, int a4, int a5, unsigned __int8 a6);
unsigned int sub_439A0(unsigned int a1, unsigned __int16 a2);
unsigned __int16 sub_3E360(int a1, int a2);
unsigned __int16 sub_3FD60(int a1, int a2);
void __outx_WORD(unsigned short Port, unsigned short Data);
void __outx_BYTE(unsigned short Port, unsigned char Data);
unsigned char __inx_BYTE(unsigned short Port);
unsigned int sub_43970(unsigned int a1);
unsigned __int16 sub_44EE0(int a1, int a2);
char sub_56A30(unsigned int a1);
int sub_47320(signed int a1);
char sub_56D60(unsigned int a1, char a2);
void sub_47560(int a1, int a2, x_BYTE *a3, signed int a4, __int16 a5);
int sub_51BB0(int a1);
//x_DWORD /*__cdecl*/ toupper(x_DWORD); //weak
unsigned int sub_55C60(int a1, int a2, int a3);
x_DWORD /*__cdecl*/ fix_filelength(x_DWORD);// weak
//x_DWORD /*__cdecl*/ access(char* path, Bit32u flags);// weak
//x_DWORD /*__cdecl*/ mkdir(char* path);
x_DWORD /*__cdecl*/ settextposition(x_DWORD, x_DWORD);// weak
x_DWORD /*__cdecl*/ outtext(char* text);// weak
//x_DWORD int386(x_DWORD, x_DWORD, x_DWORD);// weak
int int386(int intno, REGS *inregs, REGS *outregs);
int /*__fastcall*/ gettextposition(x_DWORD, x_DWORD, x_DWORD);// weak
x_DWORD /*__cdecl*/ signal(x_DWORD, x_DWORD);// weak
int __cdecl unknown_libname_1(char *a1);
void _disable();
void _enable();
int /*__fastcall*/ _wcpp_1_unwind_leave__93(x_DWORD, x_DWORD, x_DWORD, x_DWORD, x_DWORD, x_DWORD);// weak
int /*__cdecl*/ _wcpp_1_unwind_leave__100(x_DWORD, x_DWORD);// weak
long _InterlockedExchange(long volatile * Target, long Value);
int /*__cdecl*/ _wcpp_1_unwind_leave__98(x_DWORD);// weak
x_DWORD /*__cdecl*/ dos_getvect(x_DWORD);// weak
x_DWORD /*__cdecl*/ dos_setvect(x_DWORD, x_DWORD, x_DWORD);// weak
int /*__fastcall*/ _wcpp_1_unwind_leave__130(x_DWORD);// weak
unsigned char _BitScanReverse(unsigned long * Index, unsigned long Mask);
void sub_8F920(Bit8u a1byte1, Bit8u a1byte2, Bit16s posx, Bit16s posy, Bit8u* a4, unsigned __int8 a5, char a6);
void sub_8F935_bitmap_draw_final(Bit8u a1byte1, Bit8u a1byte2, Bit16u a2, int a3, Bit8u* a4, Bit8u setbyte, char a6);
signed int sub_74767(signed __int16 *a1, x_BYTE *a2, Bit8u* a3);
x_DWORD /*__cdecl*/ segread(SREGS*); //weak
//x_DWORD /*__cdecl*/ int386x(x_DWORD, x_DWORD, x_DWORD, x_DWORD);// weak
int int386x(int, REGS *, REGS *, struct SREGS *);
unsigned char __readgsx_BYTE(unsigned long Offset);
unsigned short __readgsx_WORD(unsigned long Offset);
int /*__fastcall*/ _wcpp_1_unwind_leave__131(x_DWORD);// weak
void sub_7AB00_draw_menu_animations(/*__int16 a1,*/ int a2, signed __int16 *a3, unsigned __int8 a4);
int sub_7F6A0(int a1, int a2, __int16 a3, __int16 a4, char *a5, x_BYTE *a6, unsigned __int8 a7);
unsigned int sub_81CA0(int a1, int a2, __int16 a3, __int16 a4, int a5);
signed int sub_7E5A0(int a1, int a2, __int16 a3, __int16 a4, int a5, __int16 a6, __int16 a7);
void sub_81260(int a1, int a2, int a3, __int16 a4, __int16 a5);
int sub_82510(__int16 a1, int *a2);
signed __int16 sub_81EE0(int a1, int a2, int a3, signed __int16 a4, __int16 a5, __int16 a6);
signed int sub_80D40(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, char a6);
void /*__spoils<ecx>*/ sub_85CC3(unsigned int a1, int a2, unsigned __int16 *a3);
void sub_840B8(char a1, bool a2, char a3, char a4);
unsigned     int __readeflags(void);
__int16 sub_840D3(char _CF, bool _ZF, char _SF, char _OF);
void  sub_841CE(__int16 a1);
void __writeeflags(unsigned Value);
x_DWORD /*__cdecl*/ gets(x_DWORD);// weak
x_DWORD /*__cdecl*/ fix_tell(x_DWORD);// weak
x_DWORD /*__cdecl*/ expand(x_DWORD, x_DWORD);// weak
int /*__fastcall*/ _wcpp_1_unwind_leave__132(x_DWORD);// weak
char sub_8BA10(int a1, int a2, int *a3, char *a4, int a5);
double /*__fastcall*/ _CHP(x_DWORD);// weak
char sub_8B980(int a1, int a2, x_DWORD **a3, int a4);
bool sub_9AE04(int eax0, int edx0, int a3, int a1, int a2);
HDIGDRIVER sub_93330_AIL_install_DIG_driver_file(/*int a1, */char* filename, IO_PARMS* IO);
char sub_9AE90(int eax0, int edx0, int ebx0, int *a1, x_BYTE *a2, int a3, int a4);
int sub_931F0_AIL_install_DIG_INI(/*int a1, */HDIGDRIVER* a2);
HMDIDRIVER sub_95850_AIL_install_MDI_driver_file(char* filename, IO_PARMS* IO);
Bit32s sub_95710_AIL_install_MDI_INI(/*int a1, */HMDIDRIVER *mdi);
Bit32u /*__cdecl*/ x_read(FILE* descriptor, Bit8u* data, Bit32u size);// weak
double IF_DPOW(double, double);// weak
x_DWORD x_dos_setdrive(Bit32s a, Bit32s* b);
//int /*__cdecl*/ x_chdir(const char* path);
//char* /*__cdecl*/ x_getcwd(x_DWORD a, x_DWORD b);// weak
x_DWORD /*__cdecl*/ x_outp(x_DWORD, char);// weak
x_DWORD /*__cdecl*/ x_inp(x_DWORD);// weak
x_DWORD *sub_9E720(int a1, int a2, int a3);
int sub_A3720_AIL_API_install_DIG_INI(/*int a1, */HDIGDRIVER* dig);
HDIGDRIVER sub_A3600_AIL_API_install_DIG_driver_file(/*int a1, */char* filename, IO_PARMS* IO);
Bit32s sub_A78F0_AIL_API_install_MDI_INI(HMDIDRIVER *mdi);
HMDIDRIVER sub_A77D0_AIL_API_install_MDI_INI(char* filename, IO_PARMS* IO);
FILE* /*__cdecl*/ x_creat(char* path, Bit32u flags);//
x_DWORD /*__cdecl*/ x_setmode(FILE* path, int mode);// weak
FILE* /*__cdecl*/ x_sopen(char* path, int pmode, Bit32u flags);
x_DWORD /*__cdecl*/ x_close(FILE*);// weak
x_DWORD /*__cdecl*/ x_lseek(FILE*, x_DWORD, char);// weak
Bit32u sub_98AE0(Bit8u *a1);
__int16 sub_98B2C(unsigned __int8 a1, int a2);
char sub_98BAF(int a1);
__int16 sub_98AE9(__int16 *a1, int a2);
unsigned __CFRCR__(__int16 a, unsigned __int8 b);
unsigned __CFRCL__(__int16 a, unsigned __int8 b);
Bit32u /*__cdecl*/ x_write(FILE* descriptor, Bit8u* buffer, Bit32u size_t);
x_DWORD /*__cdecl*/ x_tolower(x_DWORD);// weak
FILE* x_open(char* path, int pmodex);
void __writegsx_WORD(unsigned long Offset, unsigned short Data);
void __writegsx_DWORD(unsigned long Offset, unsigned long Data);
x_DWORD /*__cdecl*/ dos_read(x_DWORD, char, x_DWORD, x_DWORD, x_DWORD);// weak
unsigned long __readgsx_DWORD(unsigned long Offset);
void __inx_BYTEstring(unsigned short Port, unsigned char* Buffer, unsigned long Count);
//int* MK_FP(unsigned int segment, unsigned int offset);
unsigned int __getcallerseflags(void);
int /*__fastcall*/ _hook387(x_DWORD, x_DWORD, x_DWORD);// weak
void __sidt(void *Destination);
unsigned long __readcr0(void);
void __writecr0(unsigned __int32 Data);
int sub_ACE8D(x_WORD *a1, int a2, int *a3);
void sub_AD0E2(x_BYTE *a1, int a2, int *a3, x_BYTE **a4);
void sub_ACF1A(x_BYTE *a1, int a2, int *a3);
int _FDFS(void);// weak
int sub_B33D6(unsigned __int64 a1, int a2, int a3, int a4);
int _sigfpe_handler();// weak
int sub_B337C(int a1, int a2, int a3);
int sub_B37B0(int a1, int a2, int a3);
int sub_B35DB(int a1, int a2, x_BYTE *a3, int a4);
int sub_B39E0(__int64 a1, int a2, x_BYTE *a3);
int sub_B41F9(int a1, x_BYTE *a2, int a3);
int sub_B3ADF(__int64 *a1, x_BYTE *a2);
int sub_B3605(unsigned __int64 a1, int a2, unsigned int a3, x_BYTE *a4, int a5);
int sub_B37DA(unsigned __int64 a1, unsigned int a2, unsigned int a3, int a4);
__int16 /*__spoils<ecx>*/ sub_B3EAE(int a1, x_BYTE *a2, int a3);
int sub_B4A2A(int *a1, int a2, int a3);
int sub_B4077(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, __int16 a5);
int sub_B423C(int a1, x_BYTE *a2);
void sub_B49D8(int a1, int a2);
int _DOS4G_hook_init(void);// weak
int _Phar_hook_init(void);// weak
int /*__cdecl*/ _Ergo_hook_init(x_DWORD, x_DWORD);// weak
int _Intel_hook_init(void);// weak
int _DOS4G_hook_fini(void);// weak
double sub_B5250(char a1, double *a2, double result);
double sub_B5205(char a1, int a2, __int16 a3, double a4);
__int64 sub_B522B(int a1, __int16 a2, int _ESI);
int _Intel_hook_fini(void);// weak
int _Phar_hook_fini(void);// weak
int /*__cdecl*/ _Ergo_hook_fini(x_DWORD);// weak
__int16 sub_B5F8F(__int16 a1, int a2, int a3, __int16 a4);
int sub_BD320(int result, x_BYTE *a2, x_BYTE *a3, int a4, int a5, int a6);
__int16 sub_B5EFA(__int16 a1, int a2, int a3, __int16 a4);

//---------------------------

char sub_54200();
void sub_71410_process_tmaps();
void sub_5B8D0_initialize();
int /*__cdecl*/ sub_main(int argc, char **argv, char **envp);


#endif //SUB_MAIN_ACTIVE
