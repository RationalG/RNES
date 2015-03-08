/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\simon\rationalnes_\rnes\src\nimcache\ppu.o c:\users\simon\rationalnes_\rnes\src\nimcache\ppu.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct ppuobj222012 ppuobj222012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY222030 TY222030;
typedef struct TGenericSeq TGenericSeq;
typedef struct maskobj222016 maskobj222016;
typedef struct ppumemoryobj222020 ppumemoryobj222020;
typedef struct scrollerobj222018 scrollerobj222018;
typedef struct controllerobj222014 controllerobj222014;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY131128 TY131128;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct romobj137027 romobj137027;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  ppuobj222012  {
  TNimObject Sup;
NIM_BOOL Unlocked;
NI Controller;
NI Mask;
NI Status;
NI Oamaddress;
NI Oamdata;
NI Oamdma;
NI Vramaddress;
NI Vramdata;
TY222030* Spritememory;
TY222030* Virtualmemory;
NI Scrollerwritecount;
NI Vramaddresswritecount;
NI Scanline;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  maskobj222016  {
  TNimObject Sup;
NI Grayscale;
NI Partialbackground;
NI Partialsprites;
NI Background;
NI Sprites;
NI Color;
};
struct  ppumemoryobj222020  {
  TNimObject Sup;
TY222030* Bank;
};
struct  scrollerobj222018  {
  TNimObject Sup;
NI Xcoordinate;
NI Ycoordinate;
};
struct  controllerobj222014  {
  TNimObject Sup;
NI Generatenmi;
NI Masterslave;
NI Spritesize;
NI Bgaddress;
NI Spriteaddress;
NI Vramincrement;
NI Nametableaddress;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
typedef NIM_CHAR TY137030[16];
struct  romobj137027  {
  TNimObject Sup;
TY137030 Header;
TY131128* Prgbytes;
TY131128* Chrbytes;
};
typedef NI TY26420[8];
struct  tpagedesc44941  {
tpagedesc44941* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY222030 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY131128 {
  TGenericSeq Sup;
  NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP433)(void* p, NI op);
N_NIMCALL(void, debug_222092)(controllerobj222014* processor_222096);
N_NIMCALL(void, updatecontroller_222081)(NI value);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, updatemask_223414)(NI value);
N_NIMCALL(NI, readstatus_223429)(void);
N_NIMCALL(void, writesramaddress_223438)(NI value);
N_NIMCALL(NI, loadsram_223447)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, writevramaddress_223456)(NI value);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NI, loadvram_223489)(TY222030* bank);
N_NIMCALL(void, writescroll_223500)(NI value);
N_NIMCALL(void, transmittoregister_223533)(NI address, NI value);
N_NIMCALL(void, updateregisters_223554)(NI address, NI value);
N_NIMCALL(void, renderbackground_223574)(void);
N_NIMCALL(void, rendersprites_223586)(void);
N_NIMCALL(NIM_BOOL, isenabledbackground_223598)(void);
N_NIMCALL(NIM_BOOL, isenabledsprites_223607)(void);
N_NIMCALL(void, setchr_223616)(void* chr);
N_NIMCALL(TY131128*, newseq_131123)(NI len_131127);
N_NIMCALL(TY222030*, newseq_223747)(NI len_223751);
N_NIMCALL(void, initppu_223729)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void, update_223821)(void);
STRING_LITERAL(TMP452, "Invalid address (transmit)", 26);
STRING_LITERAL(TMP453, "Invalid address (update)", 24);
STRING_LITERAL(TMP454, "draw bg", 7);
STRING_LITERAL(TMP455, "draw sprites", 12);
ppuobj222012 nesppu_222056;
extern TNimType NTI3211; /* RootObj */
TNimType NTI222012; /* PPUObj */
extern TNimType NTI138; /* bool */
extern TNimType NTI108; /* int */
TNimType NTI222030; /* seq[int] */
maskobj222016 ppumask_222061;
TNimType NTI222016; /* MaskObj */
ppumemoryobj222020 ppumemory_222066;
TNimType NTI222020; /* PPUMemoryObj */
scrollerobj222018 ppuscroller_222071;
TNimType NTI222018; /* ScrollerObj */
controllerobj222014 ppucontroller_222076;
TNimType NTI222014; /* ControllerObj */
extern TFrame* frameptr_16242;
extern tgcheap47016 gch_47044;
extern romobj137027 nesrom_137046;
N_NIMCALL(void, TMP433)(void* p, NI op) {
	TY222030* a;
	NI LOC1;
	a = (TY222030*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

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

N_NIMCALL(void, updatecontroller_222081)(NI value) {
	nimfr("updateController", "ppu.nim")
	nimln(40, "ppu.nim");
	{
		nimln(40, "ppu.nim");
		nimln(40, "ppu.nim");
		if (!!((value == nesppu_222056.Controller))) goto LA3;
		nimln(41, "ppu.nim");
		nesppu_222056.Controller = value;
	}
	LA3: ;
	nimln(43, "ppu.nim");
	nimln(43, "ppu.nim");
	ppucontroller_222076.Nametableaddress = ((NI) ((NI)(nesppu_222056.Controller & 3)));
	nimln(44, "ppu.nim");
	nimln(44, "ppu.nim");
	nimln(44, "ppu.nim");
	ppucontroller_222076.Vramincrement = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Controller) >> (NU64)(2)) & 1)));
	nimln(45, "ppu.nim");
	nimln(45, "ppu.nim");
	nimln(45, "ppu.nim");
	ppucontroller_222076.Spriteaddress = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Controller) >> (NU64)(3)) & 1)));
	nimln(46, "ppu.nim");
	nimln(46, "ppu.nim");
	nimln(46, "ppu.nim");
	ppucontroller_222076.Bgaddress = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Controller) >> (NU64)(4)) & 1)));
	nimln(47, "ppu.nim");
	nimln(47, "ppu.nim");
	nimln(47, "ppu.nim");
	ppucontroller_222076.Spritesize = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Controller) >> (NU64)(5)) & 1)));
	nimln(48, "ppu.nim");
	nimln(48, "ppu.nim");
	nimln(48, "ppu.nim");
	ppucontroller_222076.Masterslave = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Controller) >> (NU64)(6)) & 1)));
	nimln(49, "ppu.nim");
	nimln(49, "ppu.nim");
	nimln(49, "ppu.nim");
	ppucontroller_222076.Generatenmi = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Controller) >> (NU64)(7)) & 1)));
	nimln(50, "ppu.nim");
	debug_222092((&ppucontroller_222076));
	popFrame();
}

N_NIMCALL(void, updatemask_223414)(NI value) {
	nimfr("updateMask", "ppu.nim")
	nimln(54, "ppu.nim");
	{
		nimln(54, "ppu.nim");
		nimln(54, "ppu.nim");
		if (!!((value == nesppu_222056.Mask))) goto LA3;
		nimln(55, "ppu.nim");
		nesppu_222056.Mask = value;
	}
	LA3: ;
	nimln(57, "ppu.nim");
	nimln(57, "ppu.nim");
	ppumask_222061.Grayscale = ((NI) ((NI)(nesppu_222056.Mask & 1)));
	nimln(58, "ppu.nim");
	nimln(58, "ppu.nim");
	nimln(58, "ppu.nim");
	ppumask_222061.Partialbackground = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Mask) >> (NU64)(1)) & 1)));
	nimln(59, "ppu.nim");
	nimln(59, "ppu.nim");
	nimln(59, "ppu.nim");
	ppumask_222061.Partialsprites = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Mask) >> (NU64)(2)) & 1)));
	nimln(60, "ppu.nim");
	nimln(60, "ppu.nim");
	nimln(60, "ppu.nim");
	ppumask_222061.Background = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Mask) >> (NU64)(3)) & 1)));
	nimln(61, "ppu.nim");
	nimln(61, "ppu.nim");
	nimln(61, "ppu.nim");
	ppumask_222061.Sprites = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Mask) >> (NU64)(4)) & 1)));
	nimln(62, "ppu.nim");
	nimln(62, "ppu.nim");
	nimln(62, "ppu.nim");
	ppumask_222061.Color = ((NI) ((NI)((NI)((NU64)(nesppu_222056.Mask) >> (NU64)(5)) & 7)));
	popFrame();
}

N_NIMCALL(NI, readstatus_223429)(void) {
	NI result;
	nimfr("readStatus", "ppu.nim")
	result = 0;
	nimln(67, "ppu.nim");
	result = nesppu_222056.Status;
	nimln(71, "ppu.nim");
	ppuscroller_222071.Xcoordinate = 0;
	nimln(72, "ppu.nim");
	ppuscroller_222071.Ycoordinate = 0;
	nimln(73, "ppu.nim");
	nesppu_222056.Vramaddress = 0;
	popFrame();
	return result;
}

N_NIMCALL(void, writesramaddress_223438)(NI value) {
	nimfr("writeSRAMAddress", "ppu.nim")
	nimln(76, "ppu.nim");
	nesppu_222056.Oamaddress = value;
	popFrame();
}

N_NIMCALL(NI, loadsram_223447)(void) {
	NI result;
	nimfr("loadSRAM", "ppu.nim")
	result = 0;
	nimln(79, "ppu.nim");
	if ((NU)(nesppu_222056.Oamaddress) >= (NU)(nesppu_222056.Spritememory->Sup.len)) raiseIndexError();
	result = nesppu_222056.Spritememory->data[nesppu_222056.Oamaddress];
	popFrame();
	return result;
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, writevramaddress_223456)(NI value) {
	nimfr("writeVRAMAddress", "ppu.nim")
	nimln(82, "ppu.nim");
	{
		nimln(82, "ppu.nim");
		if (!(nesppu_222056.Vramaddresswritecount == 0)) goto LA3;
		nimln(83, "ppu.nim");
		nesppu_222056.Vramaddress = value;
		nimln(84, "ppu.nim");
		nesppu_222056.Vramaddresswritecount = addInt(nesppu_222056.Vramaddresswritecount, 1);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		nimln(86, "ppu.nim");
		nimln(86, "ppu.nim");
		LOC6 = 0;
		nimln(86, "ppu.nim");
		LOC7 = 0;
		LOC7 = nimIntToStr(nesppu_222056.Vramaddress);
		nimln(86, "ppu.nim");
		LOC8 = 0;
		LOC8 = nimIntToStr(value);
		LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
		nesppu_222056.Vramaddress = nsuParseInt(LOC6);
		nimln(87, "ppu.nim");
		nesppu_222056.Vramaddresswritecount = subInt(nesppu_222056.Vramaddresswritecount, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, loadvram_223489)(TY222030* bank) {
	NI result;
	nimfr("loadVRAM", "ppu.nim")
	result = 0;
	nimln(90, "ppu.nim");
	if ((NU)(nesppu_222056.Vramaddress) >= (NU)(bank->Sup.len)) raiseIndexError();
	result = bank->data[nesppu_222056.Vramaddress];
	popFrame();
	return result;
}

N_NIMCALL(void, writescroll_223500)(NI value) {
	nimfr("writeScroll", "ppu.nim")
	nimln(93, "ppu.nim");
	{
		nimln(93, "ppu.nim");
		if (!(nesppu_222056.Scrollerwritecount == 0)) goto LA3;
		nimln(94, "ppu.nim");
		ppuscroller_222071.Xcoordinate = value;
		nimln(95, "ppu.nim");
		nesppu_222056.Scrollerwritecount = addInt(nesppu_222056.Scrollerwritecount, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(97, "ppu.nim");
		ppuscroller_222071.Ycoordinate = value;
		nimln(98, "ppu.nim");
		nesppu_222056.Scrollerwritecount = subInt(nesppu_222056.Scrollerwritecount, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, transmittoregister_223533)(NI address, NI value) {
	nimfr("transmitToRegister", "ppu.nim")
	nimln(101, "ppu.nim");
	switch (address) {
	case 8192:
	{
		nimln(102, "ppu.nim");
		nesppu_222056.Controller = value;
	}
	break;
	case 8193:
	{
		nimln(103, "ppu.nim");
		nesppu_222056.Mask = value;
	}
	break;
	case 8194:
	{
		nimln(104, "ppu.nim");
		nesppu_222056.Status = value;
	}
	break;
	case 8195:
	{
		nimln(105, "ppu.nim");
		nesppu_222056.Oamaddress = value;
	}
	break;
	case 8196:
	{
		nimln(106, "ppu.nim");
		nesppu_222056.Oamdata = value;
	}
	break;
	case 8198:
	{
		nimln(107, "ppu.nim");
		nesppu_222056.Vramdata = value;
	}
	break;
	case 16404:
	{
		nimln(108, "ppu.nim");
		nesppu_222056.Oamdma = value;
	}
	break;
	default:
	{
		nimln(109, "ppu.nim");
		nimln(109, "ppu.nim");
		printf("%s\015\012", (((NimStringDesc*) &TMP452))->data);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, updateregisters_223554)(NI address, NI value) {
	nimfr("updateRegisters", "ppu.nim")
	nimln(112, "ppu.nim");
	switch (address) {
	case 8192:
	{
		nimln(113, "ppu.nim");
		updatecontroller_222081(value);
	}
	break;
	case 8193:
	{
		nimln(114, "ppu.nim");
		updatemask_223414(value);
	}
	break;
	case 8195:
	{
		nimln(115, "ppu.nim");
		writesramaddress_223438(value);
	}
	break;
	case 8196:
	{
		NI LOC5;
		nimln(116, "ppu.nim");
		LOC5 = 0;
		LOC5 = loadsram_223447();
	}
	break;
	case 8197:
	{
		nimln(117, "ppu.nim");
		writescroll_223500(value);
	}
	break;
	case 8198:
	{
		nimln(118, "ppu.nim");
		writevramaddress_223456(value);
	}
	break;
	default:
	{
		nimln(120, "ppu.nim");
		nimln(120, "ppu.nim");
		printf("%s\015\012", (((NimStringDesc*) &TMP453))->data);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, renderbackground_223574)(void) {
	nimfr("renderBackground", "ppu.nim")
	nimln(123, "ppu.nim");
	nimln(123, "ppu.nim");
	printf("%s\015\012", (((NimStringDesc*) &TMP454))->data);
	popFrame();
}

N_NIMCALL(void, rendersprites_223586)(void) {
	nimfr("renderSprites", "ppu.nim")
	nimln(126, "ppu.nim");
	nimln(126, "ppu.nim");
	printf("%s\015\012", (((NimStringDesc*) &TMP455))->data);
	popFrame();
}

N_NIMCALL(NIM_BOOL, isenabledbackground_223598)(void) {
	NIM_BOOL result;
	nimfr("isEnabledBackground", "ppu.nim")
	result = 0;
	nimln(129, "ppu.nim");
	result = NIM_FALSE;
	nimln(130, "ppu.nim");
	{
		nimln(130, "ppu.nim");
		if (!(ppumask_222061.Background == 1)) goto LA3;
		nimln(131, "ppu.nim");
		result = NIM_TRUE;
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isenabledsprites_223607)(void) {
	NIM_BOOL result;
	nimfr("isEnabledSprites", "ppu.nim")
	result = 0;
	nimln(134, "ppu.nim");
	result = NIM_FALSE;
	nimln(135, "ppu.nim");
	{
		nimln(135, "ppu.nim");
		if (!(ppumask_222061.Sprites == 1)) goto LA3;
		nimln(136, "ppu.nim");
		result = NIM_TRUE;
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, setchr_223616)(void* chr) {
	TY131128* temporarybank;
	nimfr("setChr", "ppu.nim")
	nimln(139, "ppu.nim");
	temporarybank = newseq_131123(8192);
	nimln(140, "ppu.nim");
	if ((NU)(0) >= (NU)(temporarybank->Sup.len)) raiseIndexError();
	memcpy(((void*) ((&temporarybank->data[0]))), chr, 8192);
	{
		NI i_223707;
		NIM_CHAR value_223708;
		NI i_223713;
		i_223707 = 0;
		value_223708 = 0;
		nimln(1704, "system.nim");
		i_223713 = 0;
		{
			nimln(1705, "system.nim");
			while (1) {
				nimln(1705, "system.nim");
				nimln(1705, "system.nim");
				if (!(i_223713 < temporarybank->Sup.len)) goto LA3;
				nimln(1704, "system.nim");
				i_223707 = i_223713;
				nimln(1706, "system.nim");
				if ((NU)(i_223713) >= (NU)(temporarybank->Sup.len)) raiseIndexError();
				value_223708 = temporarybank->data[i_223713];
				nimln(142, "ppu.nim");
				if ((NU)(i_223707) >= (NU)(ppumemory_222066.Bank->Sup.len)) raiseIndexError();
				ppumemory_222066.Bank->data[i_223707] = ((NI) (((NU8)(value_223708))));
				nimln(1707, "system.nim");
				i_223713 = addInt(i_223713, 1);
			} LA3: ;
		}
	}
	popFrame();
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell44933*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44933))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_48617((&gch_47044.Zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell44933* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_48646(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell44933* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_48646((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, initppu_223729)(void) {
	nimfr("initPpu", "ppu.nim")
	nimln(146, "ppu.nim");
	asgnRefNoCycle((void**) (&ppumemory_222066.Bank), newseq_223747(16384));
	nimln(147, "ppu.nim");
	asgnRefNoCycle((void**) (&nesppu_222056.Spritememory), newseq_223747(256));
	nimln(149, "ppu.nim");
	if ((NU)(0) >= (NU)(nesrom_137046.Chrbytes->Sup.len)) raiseIndexError();
	setchr_223616(((void*) ((&nesrom_137046.Chrbytes->data[0]))));
	popFrame();
}

N_NIMCALL(void, update_223821)(void) {
	nimfr("update", "ppu.nim")
	nimln(152, "ppu.nim");
	nesppu_222056.Scanline = addInt(nesppu_222056.Scanline, 1);
	nimln(154, "ppu.nim");
	{
		NIM_BOOL LOC3;
		nimln(154, "ppu.nim");
		LOC3 = 0;
		LOC3 = isenabledbackground_223598();
		if (!LOC3) goto LA4;
		nimln(155, "ppu.nim");
		renderbackground_223574();
	}
	LA4: ;
	nimln(157, "ppu.nim");
	{
		NIM_BOOL LOC8;
		nimln(157, "ppu.nim");
		LOC8 = 0;
		LOC8 = isenabledsprites_223607();
		if (!LOC8) goto LA9;
		nimln(158, "ppu.nim");
		rendersprites_223586();
	}
	LA9: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ppuInit)(void) {
	nimfr("ppu", "ppu.nim")
	nesppu_222056.Sup.m_type = (&NTI222012);
	ppumask_222061.Sup.m_type = (&NTI222016);
	ppumemory_222066.Sup.m_type = (&NTI222020);
	ppuscroller_222071.Sup.m_type = (&NTI222018);
	ppucontroller_222076.Sup.m_type = (&NTI222014);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ppuDatInit)(void) {
static TNimNode* TMP432[14];
static TNimNode* TMP434[6];
static TNimNode* TMP435[2];
static TNimNode* TMP436[7];
static TNimNode TMP347[34];
NTI222012.size = sizeof(ppuobj222012);
NTI222012.kind = 17;
NTI222012.base = (&NTI3211);
TMP432[0] = &TMP347[1];
TMP347[1].kind = 1;
TMP347[1].offset = offsetof(ppuobj222012, Unlocked);
TMP347[1].typ = (&NTI138);
TMP347[1].name = "unlocked";
TMP432[1] = &TMP347[2];
TMP347[2].kind = 1;
TMP347[2].offset = offsetof(ppuobj222012, Controller);
TMP347[2].typ = (&NTI108);
TMP347[2].name = "controller";
TMP432[2] = &TMP347[3];
TMP347[3].kind = 1;
TMP347[3].offset = offsetof(ppuobj222012, Mask);
TMP347[3].typ = (&NTI108);
TMP347[3].name = "mask";
TMP432[3] = &TMP347[4];
TMP347[4].kind = 1;
TMP347[4].offset = offsetof(ppuobj222012, Status);
TMP347[4].typ = (&NTI108);
TMP347[4].name = "status";
TMP432[4] = &TMP347[5];
TMP347[5].kind = 1;
TMP347[5].offset = offsetof(ppuobj222012, Oamaddress);
TMP347[5].typ = (&NTI108);
TMP347[5].name = "oamAddress";
TMP432[5] = &TMP347[6];
TMP347[6].kind = 1;
TMP347[6].offset = offsetof(ppuobj222012, Oamdata);
TMP347[6].typ = (&NTI108);
TMP347[6].name = "oamData";
TMP432[6] = &TMP347[7];
TMP347[7].kind = 1;
TMP347[7].offset = offsetof(ppuobj222012, Oamdma);
TMP347[7].typ = (&NTI108);
TMP347[7].name = "oamDMA";
TMP432[7] = &TMP347[8];
TMP347[8].kind = 1;
TMP347[8].offset = offsetof(ppuobj222012, Vramaddress);
TMP347[8].typ = (&NTI108);
TMP347[8].name = "vramAddress";
TMP432[8] = &TMP347[9];
TMP347[9].kind = 1;
TMP347[9].offset = offsetof(ppuobj222012, Vramdata);
TMP347[9].typ = (&NTI108);
TMP347[9].name = "vramData";
TMP432[9] = &TMP347[10];
NTI222030.size = sizeof(TY222030*);
NTI222030.kind = 24;
NTI222030.base = (&NTI108);
NTI222030.flags = 2;
NTI222030.marker = TMP433;
TMP347[10].kind = 1;
TMP347[10].offset = offsetof(ppuobj222012, Spritememory);
TMP347[10].typ = (&NTI222030);
TMP347[10].name = "spriteMemory";
TMP432[10] = &TMP347[11];
TMP347[11].kind = 1;
TMP347[11].offset = offsetof(ppuobj222012, Virtualmemory);
TMP347[11].typ = (&NTI222030);
TMP347[11].name = "virtualMemory";
TMP432[11] = &TMP347[12];
TMP347[12].kind = 1;
TMP347[12].offset = offsetof(ppuobj222012, Scrollerwritecount);
TMP347[12].typ = (&NTI108);
TMP347[12].name = "scrollerWriteCount";
TMP432[12] = &TMP347[13];
TMP347[13].kind = 1;
TMP347[13].offset = offsetof(ppuobj222012, Vramaddresswritecount);
TMP347[13].typ = (&NTI108);
TMP347[13].name = "vramAddressWriteCount";
TMP432[13] = &TMP347[14];
TMP347[14].kind = 1;
TMP347[14].offset = offsetof(ppuobj222012, Scanline);
TMP347[14].typ = (&NTI108);
TMP347[14].name = "scanline";
TMP347[0].len = 14; TMP347[0].kind = 2; TMP347[0].sons = &TMP432[0];
NTI222012.node = &TMP347[0];
NTI222016.size = sizeof(maskobj222016);
NTI222016.kind = 17;
NTI222016.base = (&NTI3211);
NTI222016.flags = 1;
TMP434[0] = &TMP347[16];
TMP347[16].kind = 1;
TMP347[16].offset = offsetof(maskobj222016, Grayscale);
TMP347[16].typ = (&NTI108);
TMP347[16].name = "grayscale";
TMP434[1] = &TMP347[17];
TMP347[17].kind = 1;
TMP347[17].offset = offsetof(maskobj222016, Partialbackground);
TMP347[17].typ = (&NTI108);
TMP347[17].name = "partialBackground";
TMP434[2] = &TMP347[18];
TMP347[18].kind = 1;
TMP347[18].offset = offsetof(maskobj222016, Partialsprites);
TMP347[18].typ = (&NTI108);
TMP347[18].name = "partialSprites";
TMP434[3] = &TMP347[19];
TMP347[19].kind = 1;
TMP347[19].offset = offsetof(maskobj222016, Background);
TMP347[19].typ = (&NTI108);
TMP347[19].name = "background";
TMP434[4] = &TMP347[20];
TMP347[20].kind = 1;
TMP347[20].offset = offsetof(maskobj222016, Sprites);
TMP347[20].typ = (&NTI108);
TMP347[20].name = "sprites";
TMP434[5] = &TMP347[21];
TMP347[21].kind = 1;
TMP347[21].offset = offsetof(maskobj222016, Color);
TMP347[21].typ = (&NTI108);
TMP347[21].name = "color";
TMP347[15].len = 6; TMP347[15].kind = 2; TMP347[15].sons = &TMP434[0];
NTI222016.node = &TMP347[15];
NTI222020.size = sizeof(ppumemoryobj222020);
NTI222020.kind = 17;
NTI222020.base = (&NTI3211);
TMP347[22].kind = 1;
TMP347[22].offset = offsetof(ppumemoryobj222020, Bank);
TMP347[22].typ = (&NTI222030);
TMP347[22].name = "bank";
NTI222020.node = &TMP347[22];
NTI222018.size = sizeof(scrollerobj222018);
NTI222018.kind = 17;
NTI222018.base = (&NTI3211);
NTI222018.flags = 1;
TMP435[0] = &TMP347[24];
TMP347[24].kind = 1;
TMP347[24].offset = offsetof(scrollerobj222018, Xcoordinate);
TMP347[24].typ = (&NTI108);
TMP347[24].name = "xCoordinate";
TMP435[1] = &TMP347[25];
TMP347[25].kind = 1;
TMP347[25].offset = offsetof(scrollerobj222018, Ycoordinate);
TMP347[25].typ = (&NTI108);
TMP347[25].name = "yCoordinate";
TMP347[23].len = 2; TMP347[23].kind = 2; TMP347[23].sons = &TMP435[0];
NTI222018.node = &TMP347[23];
NTI222014.size = sizeof(controllerobj222014);
NTI222014.kind = 17;
NTI222014.base = (&NTI3211);
NTI222014.flags = 1;
TMP436[0] = &TMP347[27];
TMP347[27].kind = 1;
TMP347[27].offset = offsetof(controllerobj222014, Generatenmi);
TMP347[27].typ = (&NTI108);
TMP347[27].name = "generateNMI";
TMP436[1] = &TMP347[28];
TMP347[28].kind = 1;
TMP347[28].offset = offsetof(controllerobj222014, Masterslave);
TMP347[28].typ = (&NTI108);
TMP347[28].name = "masterSlave";
TMP436[2] = &TMP347[29];
TMP347[29].kind = 1;
TMP347[29].offset = offsetof(controllerobj222014, Spritesize);
TMP347[29].typ = (&NTI108);
TMP347[29].name = "spriteSize";
TMP436[3] = &TMP347[30];
TMP347[30].kind = 1;
TMP347[30].offset = offsetof(controllerobj222014, Bgaddress);
TMP347[30].typ = (&NTI108);
TMP347[30].name = "bgAddress";
TMP436[4] = &TMP347[31];
TMP347[31].kind = 1;
TMP347[31].offset = offsetof(controllerobj222014, Spriteaddress);
TMP347[31].typ = (&NTI108);
TMP347[31].name = "spriteAddress";
TMP436[5] = &TMP347[32];
TMP347[32].kind = 1;
TMP347[32].offset = offsetof(controllerobj222014, Vramincrement);
TMP347[32].typ = (&NTI108);
TMP347[32].name = "VRAMincrement";
TMP436[6] = &TMP347[33];
TMP347[33].kind = 1;
TMP347[33].offset = offsetof(controllerobj222014, Nametableaddress);
TMP347[33].typ = (&NTI108);
TMP347[33].name = "nameTableAddress";
TMP347[26].len = 7; TMP347[26].kind = 2; TMP347[26].sons = &TMP436[0];
NTI222014.node = &TMP347[26];
}

