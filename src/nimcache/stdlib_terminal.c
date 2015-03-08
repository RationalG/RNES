/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\simon\rationalnes_\rnes\src\nimcache\stdlib_terminal.o c:\users\simon\rationalnes_\rnes\src\nimcache\stdlib_terminal.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <io.h>
typedef struct TY200006 TY200006;
typedef struct tconsolescreenbufferinfo160718 tconsolescreenbufferinfo160718;
typedef struct coord160706 coord160706;
typedef struct smallrect160712 smallrect160712;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef N_STDCALL_PTR(NI, TY181624) (NI32 nstdhandle);
typedef N_STDCALL_PTR(NI32, TY181701) (NI hsourceprocesshandle, NI hsourcehandle, NI htargetprocesshandle, NI* lptargethandle, NI32 dwdesiredaccess, NI32 binherithandle, NI32 dwoptions);
typedef N_STDCALL_PTR(NI, TY181216) (void);
struct TY200006 {
NI Field0;
NI Field1;
};
struct  coord160706  {
NI16 X;
NI16 Y;
};
struct  smallrect160712  {
NI16 Left;
NI16 Top;
NI16 Right;
NI16 Bottom;
};
struct  tconsolescreenbufferinfo160718  {
coord160706 Dwsize;
coord160706 Dwcursorposition;
NI16 Wattributes;
smallrect160712 Srwindow;
coord160706 Dwmaximumwindowsize;
};
typedef N_STDCALL_PTR(NI32, TY187363) (NI hconsoleoutput, tconsolescreenbufferinfo160718* lpconsolescreenbufferinfo);
typedef N_STDCALL_PTR(NI32, TY187415) (NI hconsoleoutput, coord160706 dwcursorposition);
typedef N_STDCALL_PTR(NI32, TY180456) (NI hconsoleoutput, NIM_CHAR ccharacter, NI32 nlength, coord160706 dwwritecoord, NI32* lpnumberofcharswritten);
typedef N_STDCALL_PTR(NI32, TY187339) (NI hconsoleoutput, NI16 wattribute, NI32 nlength, coord160706 dwwritecoord, NI32* lpnumberofattrswritten);
typedef N_STDCALL_PTR(NI32, TY187438) (NI hconsoleoutput, NI16 wattributes);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI TY203404[8];
typedef NI TY203605[8];
N_NIMCALL(void, raiseoserror_111435)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_111467)(void);
N_NIMCALL(TY200006, getcursorpos_200004)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI16, getattributes_200019)(void);
N_NIMCALL(void, setcursorpos_200212)(NI x, NI y);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, setcursorxpos_200409)(NI x);
N_NIMCALL(void, setcursorypos_200612)(NI y);
N_NIMCALL(void, cursorup_201004)(NI count);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, cursordown_201220)(NI count);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, cursorforward_201420)(NI count);
N_NIMCALL(void, cursorbackward_201620)(NI count);
N_NIMCALL(void, eraseline_202004)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, erasescreen_202218)(void);
N_NOCONV(void, resetattributes_202417)(void);
N_NIMCALL(void, setstyle_202801)(NU8 style);
N_NIMCALL(void, writestyled_203060)(NimStringDesc* txt, NU8 style);
N_NIMCALL(void, write_12865)(FILE* f, NimStringDesc* s);
N_NIMCALL(void, setforegroundcolor_203238)(NU8 fg, NIM_BOOL bright);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, setbackgroundcolor_203415)(NU8 bg, NIM_BOOL bright);
N_NIMCALL(NIM_BOOL, isatty_203619)(FILE* f);
N_NIMCALL(void, styledechoprocessarg_203813)(NimStringDesc* s);
N_NIMCALL(void, styledechoprocessarg_203824)(NU8 style);
N_NIMCALL(void, styledechoprocessarg_203834)(NU8 style);
N_NIMCALL(void, styledechoprocessarg_203844)(NU8 color);
N_NIMCALL(void, styledechoprocessarg_203853)(NU8 color);
NIM_CONST TY203404 lookup_203403 = {0,
4,
2,
6,
1,
5,
3,
7}
;
NIM_CONST TY203605 lookup_203604 = {0,
64,
32,
96,
16,
80,
48,
112}
;
NI conhandle_200001;
extern TY181624 Dl_181623;
extern TY181701 Dl_181700;
extern TY181216 Dl_181215;
extern TY187363 Dl_187362;
extern TFrame* frameptr_16242;
NI16 oldattr_200028;
extern TY187415 Dl_187414;
extern TY180456 Dl_180455;
extern TY187339 Dl_187338;
extern TY187438 Dl_187437;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16242 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16242;
	frameptr_16242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_18801();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16242 = (*frameptr_16242).prev;
}

N_NIMCALL(TY200006, getcursorpos_200004)(void) {
	TY200006 result;
	tconsolescreenbufferinfo160718 c;
	nimfr("getCursorPos", "terminal.nim")
	memset((void*)(&result), 0, sizeof(result));
	memset((void*)(&c), 0, sizeof(c));
	nimln(34, "terminal.nim");
	{
		NI32 LOC3;
		NI32 LOC6;
		nimln(34, "terminal.nim");
		nimln(34, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187362(conhandle_200001, (&c));
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		nimln(35, "terminal.nim");
		nimln(35, "terminal.nim");
		LOC6 = 0;
		LOC6 = oslasterror_111467();
		raiseoserror_111435(LOC6);
	}
	LA4: ;
	nimln(36, "terminal.nim");
	nimln(36, "terminal.nim");
	result.Field0 = ((NI) (c.Dwcursorposition.X));
	result.Field1 = ((NI) (c.Dwcursorposition.Y));
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI16, getattributes_200019)(void) {
	NI16 result;
	tconsolescreenbufferinfo160718 c;
	nimfr("getAttributes", "terminal.nim")
	result = 0;
	memset((void*)(&c), 0, sizeof(c));
	nimln(41, "terminal.nim");
	{
		NI32 LOC3;
		nimln(41, "terminal.nim");
		nimln(41, "terminal.nim");
		nimln(41, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187362(conhandle_200001, (&c));
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		nimln(42, "terminal.nim");
		nimln(42, "terminal.nim");
		result = c.Wattributes;
		goto BeforeRet;
	}
	LA4: ;
	nimln(43, "terminal.nim");
	nimln(43, "terminal.nim");
	result = ((NI16) 112);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, setcursorpos_200212)(NI x, NI y) {
	coord160706 c;
	nimfr("setCursorPos", "terminal.nim")
	memset((void*)(&c), 0, sizeof(c));
	nimln(53, "terminal.nim");
	c.X = ((NI16)chckRange(x, ((NI16) -32768), ((NI16) 32767)));
	nimln(54, "terminal.nim");
	c.Y = ((NI16)chckRange(y, ((NI16) -32768), ((NI16) 32767)));
	nimln(55, "terminal.nim");
	{
		NI32 LOC3;
		NI32 LOC6;
		nimln(55, "terminal.nim");
		nimln(55, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187414(conhandle_200001, c);
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		nimln(55, "terminal.nim");
		nimln(55, "terminal.nim");
		LOC6 = 0;
		LOC6 = oslasterror_111467();
		raiseoserror_111435(LOC6);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, setcursorxpos_200409)(NI x) {
	tconsolescreenbufferinfo160718 scrbuf;
	NI hstdout;
	coord160706 origin;
	nimfr("setCursorXPos", "terminal.nim")
	memset((void*)(&scrbuf), 0, sizeof(scrbuf));
	nimln(64, "terminal.nim");
	hstdout = conhandle_200001;
	nimln(65, "terminal.nim");
	{
		NI32 LOC3;
		NI32 LOC6;
		nimln(65, "terminal.nim");
		nimln(65, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187362(hstdout, (&scrbuf));
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		nimln(66, "terminal.nim");
		nimln(66, "terminal.nim");
		LOC6 = 0;
		LOC6 = oslasterror_111467();
		raiseoserror_111435(LOC6);
	}
	LA4: ;
	nimln(67, "terminal.nim");
	origin = scrbuf.Dwcursorposition;
	nimln(68, "terminal.nim");
	origin.X = ((NI16)chckRange(x, ((NI16) -32768), ((NI16) 32767)));
	nimln(69, "terminal.nim");
	{
		NI32 LOC9;
		NI32 LOC12;
		nimln(69, "terminal.nim");
		nimln(69, "terminal.nim");
		LOC9 = 0;
		LOC9 = Dl_187414(conhandle_200001, origin);
		if (!(LOC9 == ((NI32) 0))) goto LA10;
		nimln(70, "terminal.nim");
		nimln(70, "terminal.nim");
		LOC12 = 0;
		LOC12 = oslasterror_111467();
		raiseoserror_111435(LOC12);
	}
	LA10: ;
	popFrame();
}

N_NIMCALL(void, setcursorypos_200612)(NI y) {
	tconsolescreenbufferinfo160718 scrbuf;
	NI hstdout;
	coord160706 origin;
	nimfr("setCursorYPos", "terminal.nim")
	memset((void*)(&scrbuf), 0, sizeof(scrbuf));
	nimln(80, "terminal.nim");
	hstdout = conhandle_200001;
	nimln(81, "terminal.nim");
	{
		NI32 LOC3;
		NI32 LOC6;
		nimln(81, "terminal.nim");
		nimln(81, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187362(hstdout, (&scrbuf));
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		nimln(82, "terminal.nim");
		nimln(82, "terminal.nim");
		LOC6 = 0;
		LOC6 = oslasterror_111467();
		raiseoserror_111435(LOC6);
	}
	LA4: ;
	nimln(83, "terminal.nim");
	origin = scrbuf.Dwcursorposition;
	nimln(84, "terminal.nim");
	origin.Y = ((NI16)chckRange(y, ((NI16) -32768), ((NI16) 32767)));
	nimln(85, "terminal.nim");
	{
		NI32 LOC9;
		NI32 LOC12;
		nimln(85, "terminal.nim");
		nimln(85, "terminal.nim");
		LOC9 = 0;
		LOC9 = Dl_187414(conhandle_200001, origin);
		if (!(LOC9 == ((NI32) 0))) goto LA10;
		nimln(86, "terminal.nim");
		nimln(86, "terminal.nim");
		LOC12 = 0;
		LOC12 = oslasterror_111467();
		raiseoserror_111435(LOC12);
	}
	LA10: ;
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, cursorup_201004)(NI count) {
	TY200006 p;
	nimfr("cursorUp", "terminal.nim")
	nimln(93, "terminal.nim");
	p = getcursorpos_200004();
	nimln(94, "terminal.nim");
	p.Field1 = subInt(p.Field1, count);
	nimln(95, "terminal.nim");
	setcursorpos_200212(p.Field0, p.Field1);
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, cursordown_201220)(NI count) {
	TY200006 p;
	nimfr("cursorDown", "terminal.nim")
	nimln(102, "terminal.nim");
	p = getcursorpos_200004();
	nimln(103, "terminal.nim");
	p.Field1 = addInt(p.Field1, count);
	nimln(104, "terminal.nim");
	setcursorpos_200212(p.Field0, p.Field1);
	popFrame();
}

N_NIMCALL(void, cursorforward_201420)(NI count) {
	TY200006 p;
	nimfr("cursorForward", "terminal.nim")
	nimln(111, "terminal.nim");
	p = getcursorpos_200004();
	nimln(112, "terminal.nim");
	p.Field0 = addInt(p.Field0, count);
	nimln(113, "terminal.nim");
	setcursorpos_200212(p.Field0, p.Field1);
	popFrame();
}

N_NIMCALL(void, cursorbackward_201620)(NI count) {
	TY200006 p;
	nimfr("cursorBackward", "terminal.nim")
	nimln(120, "terminal.nim");
	p = getcursorpos_200004();
	nimln(121, "terminal.nim");
	p.Field0 = subInt(p.Field0, count);
	nimln(122, "terminal.nim");
	setcursorpos_200212(p.Field0, p.Field1);
	popFrame();
}

N_NIMCALL(void, eraseline_202004)(void) {
	tconsolescreenbufferinfo160718 scrbuf;
	NI32 numwrote;
	NI hstdout;
	coord160706 origin;
	NI16 ht;
	NI TMP361;
	NI16 wt;
	NI TMP362;
	nimfr("eraseLine", "terminal.nim")
	memset((void*)(&scrbuf), 0, sizeof(scrbuf));
	numwrote = 0;
	nimln(162, "terminal.nim");
	hstdout = conhandle_200001;
	nimln(163, "terminal.nim");
	{
		NI32 LOC3;
		NI32 LOC6;
		nimln(163, "terminal.nim");
		nimln(163, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187362(hstdout, (&scrbuf));
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		nimln(164, "terminal.nim");
		nimln(164, "terminal.nim");
		LOC6 = 0;
		LOC6 = oslasterror_111467();
		raiseoserror_111435(LOC6);
	}
	LA4: ;
	nimln(165, "terminal.nim");
	origin = scrbuf.Dwcursorposition;
	nimln(166, "terminal.nim");
	origin.X = ((NI16) 0);
	nimln(167, "terminal.nim");
	{
		NI32 LOC9;
		NI32 LOC12;
		nimln(167, "terminal.nim");
		nimln(167, "terminal.nim");
		LOC9 = 0;
		LOC9 = Dl_187414(conhandle_200001, origin);
		if (!(LOC9 == ((NI32) 0))) goto LA10;
		nimln(168, "terminal.nim");
		nimln(168, "terminal.nim");
		LOC12 = 0;
		LOC12 = oslasterror_111467();
		raiseoserror_111435(LOC12);
	}
	LA10: ;
	nimln(169, "terminal.nim");
	nimln(169, "terminal.nim");
	TMP361 = subInt(scrbuf.Dwsize.Y, origin.Y);
	if (TMP361 < -32768 || TMP361 > 32767) raiseOverflow();
	ht = (NI16)(TMP361);
	nimln(170, "terminal.nim");
	nimln(170, "terminal.nim");
	TMP362 = subInt(scrbuf.Dwsize.X, origin.X);
	if (TMP362 < -32768 || TMP362 > 32767) raiseOverflow();
	wt = (NI16)(TMP362);
	nimln(171, "terminal.nim");
	{
		NI TMP363;
		NI32 LOC15;
		NI32 LOC18;
		nimln(172, "terminal.nim");
		nimln(171, "terminal.nim");
		nimln(171, "terminal.nim");
		TMP363 = mulInt(ht, wt);
		if (TMP363 < -32768 || TMP363 > 32767) raiseOverflow();
		LOC15 = 0;
		LOC15 = Dl_180455(hstdout, 32, ((NI32) ((NI16)(TMP363))), origin, (&numwrote));
		if (!(LOC15 == ((NI32) 0))) goto LA16;
		nimln(173, "terminal.nim");
		nimln(173, "terminal.nim");
		LOC18 = 0;
		LOC18 = oslasterror_111467();
		raiseoserror_111435(LOC18);
	}
	LA16: ;
	nimln(174, "terminal.nim");
	{
		NI TMP364;
		NI32 LOC21;
		NI32 LOC24;
		nimln(175, "terminal.nim");
		nimln(174, "terminal.nim");
		nimln(174, "terminal.nim");
		TMP364 = mulInt(ht, wt);
		if (TMP364 < -32768 || TMP364 > 32767) raiseOverflow();
		LOC21 = 0;
		LOC21 = Dl_187338(hstdout, scrbuf.Wattributes, ((NI32) ((NI16)(TMP364))), scrbuf.Dwcursorposition, (&numwrote));
		if (!(LOC21 == ((NI32) 0))) goto LA22;
		nimln(176, "terminal.nim");
		nimln(176, "terminal.nim");
		LOC24 = 0;
		LOC24 = oslasterror_111467();
		raiseoserror_111435(LOC24);
	}
	LA22: ;
	popFrame();
}

N_NIMCALL(void, erasescreen_202218)(void) {
	tconsolescreenbufferinfo160718 scrbuf;
	NI32 numwrote;
	coord160706 origin;
	NI hstdout;
	nimfr("eraseScreen", "terminal.nim")
	memset((void*)(&scrbuf), 0, sizeof(scrbuf));
	numwrote = 0;
	memset((void*)(&origin), 0, sizeof(origin));
	nimln(187, "terminal.nim");
	hstdout = conhandle_200001;
	nimln(188, "terminal.nim");
	{
		NI32 LOC3;
		NI32 LOC6;
		nimln(188, "terminal.nim");
		nimln(188, "terminal.nim");
		LOC3 = 0;
		LOC3 = Dl_187362(hstdout, (&scrbuf));
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		nimln(189, "terminal.nim");
		nimln(189, "terminal.nim");
		LOC6 = 0;
		LOC6 = oslasterror_111467();
		raiseoserror_111435(LOC6);
	}
	LA4: ;
	nimln(190, "terminal.nim");
	{
		NI TMP365;
		NI32 LOC9;
		NI32 LOC12;
		nimln(191, "terminal.nim");
		nimln(190, "terminal.nim");
		nimln(190, "terminal.nim");
		TMP365 = mulInt(scrbuf.Dwsize.X, scrbuf.Dwsize.Y);
		if (TMP365 < -32768 || TMP365 > 32767) raiseOverflow();
		LOC9 = 0;
		LOC9 = Dl_180455(hstdout, 32, ((NI32) ((NI16)(TMP365))), origin, (&numwrote));
		if (!(LOC9 == ((NI32) 0))) goto LA10;
		nimln(192, "terminal.nim");
		nimln(192, "terminal.nim");
		LOC12 = 0;
		LOC12 = oslasterror_111467();
		raiseoserror_111435(LOC12);
	}
	LA10: ;
	nimln(193, "terminal.nim");
	{
		NI TMP366;
		NI32 LOC15;
		NI32 LOC18;
		nimln(195, "terminal.nim");
		nimln(193, "terminal.nim");
		nimln(194, "terminal.nim");
		TMP366 = mulInt(scrbuf.Dwsize.X, scrbuf.Dwsize.Y);
		if (TMP366 < -32768 || TMP366 > 32767) raiseOverflow();
		LOC15 = 0;
		LOC15 = Dl_187338(hstdout, scrbuf.Wattributes, ((NI32) ((NI16)(TMP366))), origin, (&numwrote));
		if (!(LOC15 == ((NI32) 0))) goto LA16;
		nimln(196, "terminal.nim");
		nimln(196, "terminal.nim");
		LOC18 = 0;
		LOC18 = oslasterror_111467();
		raiseoserror_111435(LOC18);
	}
	LA16: ;
	nimln(197, "terminal.nim");
	setcursorxpos_200409(0);
	popFrame();
}

N_NOCONV(void, resetattributes_202417)(void) {
	NI32 LOC1;
	nimfr("resetAttributes", "terminal.nim")
	nimln(205, "terminal.nim");
	nimln(205, "terminal.nim");
	LOC1 = 0;
	LOC1 = Dl_187437(conhandle_200001, oldattr_200028);
	popFrame();
}

N_NIMCALL(void, setstyle_202801)(NU8 style) {
	NI16 a;
	NI32 LOC17;
	nimfr("setStyle", "terminal.nim")
	nimln(230, "terminal.nim");
	a = ((NI16) 0);
	nimln(231, "terminal.nim");
	{
		nimln(231, "terminal.nim");
		if (!((style &(1<<(((((NU8) 1)- 1))&7)))!=0)) goto LA3;
		nimln(231, "terminal.nim");
		nimln(231, "terminal.nim");
		a = (NI16)(a | ((NI16) 8));
	}
	LA3: ;
	nimln(232, "terminal.nim");
	{
		nimln(232, "terminal.nim");
		if (!((style &(1<<(((((NU8) 5)- 1))&7)))!=0)) goto LA7;
		nimln(232, "terminal.nim");
		nimln(232, "terminal.nim");
		a = (NI16)(a | ((NI16) 128));
	}
	LA7: ;
	nimln(233, "terminal.nim");
	{
		nimln(233, "terminal.nim");
		if (!((style &(1<<(((((NU8) 7)- 1))&7)))!=0)) goto LA11;
		nimln(233, "terminal.nim");
		nimln(233, "terminal.nim");
		a = (NI16)(a | ((NI16) 16384));
	}
	LA11: ;
	nimln(234, "terminal.nim");
	{
		nimln(234, "terminal.nim");
		if (!((style &(1<<(((((NU8) 4)- 1))&7)))!=0)) goto LA15;
		nimln(234, "terminal.nim");
		nimln(234, "terminal.nim");
		a = (NI16)(a | ((NI16) -32768));
	}
	LA15: ;
	nimln(235, "terminal.nim");
	nimln(235, "terminal.nim");
	LOC17 = 0;
	LOC17 = Dl_187437(conhandle_200001, a);
	popFrame();
}

N_NIMCALL(void, writestyled_203060)(NimStringDesc* txt, NU8 style) {
	NI16 old;
	NI32 LOC1;
	nimfr("writeStyled", "terminal.nim")
	nimln(243, "terminal.nim");
	old = getattributes_200019();
	nimln(244, "terminal.nim");
	setstyle_202801(style);
	nimln(245, "terminal.nim");
	write_12865(stdout, txt);
	nimln(246, "terminal.nim");
	nimln(246, "terminal.nim");
	LOC1 = 0;
	LOC1 = Dl_187437(conhandle_200001, old);
	popFrame();
}

N_NIMCALL(void, setforegroundcolor_203238)(NU8 fg, NIM_BOOL bright) {
	NI16 old;
	NI16 LOC1;
	NI32 LOC6;
	nimfr("setForegroundColor", "terminal.nim")
	nimln(283, "terminal.nim");
	nimln(283, "terminal.nim");
	nimln(283, "terminal.nim");
	LOC1 = 0;
	LOC1 = getattributes_200019();
	old = (NI16)(LOC1 & ((NI16) -8));
	nimln(284, "terminal.nim");
	{
		if (!bright) goto LA4;
		nimln(285, "terminal.nim");
		nimln(285, "terminal.nim");
		old = (NI16)(old | ((NI16) 8));
	}
	LA4: ;
	nimln(295, "terminal.nim");
	nimln(295, "terminal.nim");
	nimln(295, "terminal.nim");
	nimln(295, "terminal.nim");
	if (fg < 30 || fg > 37) raiseIndexError();
	LOC6 = 0;
	LOC6 = Dl_187437(conhandle_200001, ((NI16)(NU16)(NU)((NI)(((NI) (old)) | lookup_203403[(fg)- 30]))));
	popFrame();
}

N_NIMCALL(void, setbackgroundcolor_203415)(NU8 bg, NIM_BOOL bright) {
	NI16 old;
	NI16 LOC1;
	NI32 LOC6;
	nimfr("setBackgroundColor", "terminal.nim")
	nimln(304, "terminal.nim");
	nimln(304, "terminal.nim");
	nimln(304, "terminal.nim");
	LOC1 = 0;
	LOC1 = getattributes_200019();
	old = (NI16)(LOC1 & ((NI16) -113));
	nimln(305, "terminal.nim");
	{
		if (!bright) goto LA4;
		nimln(306, "terminal.nim");
		nimln(306, "terminal.nim");
		old = (NI16)(old | ((NI16) 128));
	}
	LA4: ;
	nimln(316, "terminal.nim");
	nimln(316, "terminal.nim");
	nimln(316, "terminal.nim");
	nimln(316, "terminal.nim");
	if (bg < 40 || bg > 47) raiseIndexError();
	LOC6 = 0;
	LOC6 = Dl_187437(conhandle_200001, ((NI16)(NU16)(NU)((NI)(((NI) (old)) | lookup_203604[(bg)- 40]))));
	popFrame();
}

N_NIMCALL(NIM_BOOL, isatty_203619)(FILE* f) {
	NIM_BOOL result;
	int LOC1;
	int LOC2;
	nimfr("isatty", "terminal.nim")
	result = 0;
	nimln(331, "terminal.nim");
	nimln(331, "terminal.nim");
	nimln(331, "terminal.nim");
	nimln(331, "terminal.nim");
	nimln(331, "terminal.nim");
	LOC1 = 0;
	LOC1 = fileno(f);
	LOC2 = 0;
	LOC2 = _isatty(LOC1);
	result = !((LOC2 == ((NI32) 0)));
	popFrame();
	return result;
}

N_NIMCALL(void, styledechoprocessarg_203813)(NimStringDesc* s) {
	nimfr("styledEchoProcessArg", "terminal.nim")
	nimln(333, "terminal.nim");
	write_12865(stdout, s);
	popFrame();
}

N_NIMCALL(void, styledechoprocessarg_203824)(NU8 style) {
	NU8 LOC1;
	nimfr("styledEchoProcessArg", "terminal.nim")
	nimln(334, "terminal.nim");
	LOC1 = 0;
	LOC1 |=(1<<((NI8)((style- 1))%(sizeof(NI8)*8)));
	setstyle_202801(LOC1);
	popFrame();
}

N_NIMCALL(void, styledechoprocessarg_203834)(NU8 style) {
	nimfr("styledEchoProcessArg", "terminal.nim")
	nimln(335, "terminal.nim");
	setstyle_202801(style);
	popFrame();
}

N_NIMCALL(void, styledechoprocessarg_203844)(NU8 color) {
	nimfr("styledEchoProcessArg", "terminal.nim")
	nimln(336, "terminal.nim");
	setforegroundcolor_203238(color, NIM_FALSE);
	popFrame();
}

N_NIMCALL(void, styledechoprocessarg_203853)(NU8 color) {
	nimfr("styledEchoProcessArg", "terminal.nim")
	nimln(337, "terminal.nim");
	setbackgroundcolor_203415(color, NIM_FALSE);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit)(void) {
	nimfr("terminal", "terminal.nim")
	{
		NI htemp;
		nimln(27, "terminal.nim");
		htemp = Dl_181623(((NI32) -11));
		nimln(28, "terminal.nim");
		{
			NI LOC4;
			NI LOC5;
			NI32 LOC6;
			NI32 LOC9;
			nimln(29, "terminal.nim");
			nimln(28, "terminal.nim");
			nimln(28, "terminal.nim");
			LOC4 = 0;
			LOC4 = Dl_181215();
			nimln(28, "terminal.nim");
			LOC5 = 0;
			LOC5 = Dl_181215();
			LOC6 = 0;
			LOC6 = Dl_181700(LOC4, htemp, LOC5, (&conhandle_200001), ((NI32) 0), ((NI32) 1), ((NI32) 2));
			if (!(LOC6 == ((NI32) 0))) goto LA7;
			nimln(30, "terminal.nim");
			nimln(30, "terminal.nim");
			LOC9 = 0;
			LOC9 = oslasterror_111467();
			raiseoserror_111435(LOC9);
		}
		LA7: ;
	}
	nimln(46, "terminal.nim");
	oldattr_200028 = getattributes_200019();
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit)(void) {
}

