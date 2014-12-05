/* Generated by Nimrod Compiler v0.9.6 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nimrod\lib -o c:\users\simon\rationalnes_\nimcache\ppu.o c:\users\simon\rationalnes_\nimcache\ppu.c */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tppu225014 tppu225014;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tsurface222011 tsurface222011;
typedef struct tcell43933 tcell43933;
typedef struct tcellseq43949 tcellseq43949;
typedef struct tgcheap46016 tgcheap46016;
typedef struct tcellset43945 tcellset43945;
typedef struct tpagedesc43941 tpagedesc43941;
typedef struct tmemregion26210 tmemregion26210;
typedef struct tsmallchunk25440 tsmallchunk25440;
typedef struct tllchunk26204 tllchunk26204;
typedef struct tbigchunk25442 tbigchunk25442;
typedef struct tintset25417 tintset25417;
typedef struct ttrunk25413 ttrunk25413;
typedef struct tavlnode26208 tavlnode26208;
typedef struct tgcstat46014 tgcstat46014;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsurface215055 tsurface215055;
typedef struct tbasechunk25438 tbasechunk25438;
typedef struct tfreecell25430 tfreecell25430;
typedef struct tpixelformat215045 tpixelformat215045;
typedef struct trect215027 trect215027;
typedef struct tpalette215041 tpalette215041;
typedef struct tcolor215033 tcolor215033;
typedef N_NIMCALL_PTR(void, TY2689) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY2694) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2689 marker;
TY2694 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tppu225014  {
  TNimObject Sup;
tsurface222011* Screen;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell43933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq43949  {
NI Len;
NI Cap;
tcell43933** D;
};
struct  tcellset43945  {
NI Counter;
NI Max;
tpagedesc43941* Head;
tpagedesc43941** Data;
};
typedef tsmallchunk25440* TY26222[512];
typedef ttrunk25413* ttrunkbuckets25415[256];
struct  tintset25417  {
ttrunkbuckets25415 Data;
};
struct  tmemregion26210  {
NI Minlargeobj;
NI Maxlargeobj;
TY26222 Freesmallchunks;
tllchunk26204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk25442* Freechunkslist;
tintset25417 Chunkstarts;
tavlnode26208* Root;
tavlnode26208* Deleted;
tavlnode26208* Last;
tavlnode26208* Freeavlnodes;
};
struct  tgcstat46014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq43949 Zct;
tcellseq43949 Decstack;
tcellset43945 Cycleroots;
tcellseq43949 Tempstack;
NI Recgclock;
tmemregion26210 Region;
tgcstat46014 Stat;
};
typedef N_CDECL_PTR(NI, TY218226) (NI32 flags);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsurface222011  {
NI W;
NI H;
tsurface215055* S;
};
typedef NI TY25420[8];
struct  tpagedesc43941  {
tpagedesc43941* Next;
NI Key;
TY25420 Bits;
};
struct  tbasechunk25438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk25440  {
  tbasechunk25438 Sup;
tsmallchunk25440* Next;
tsmallchunk25440* Prev;
tfreecell25430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26204  {
NI Size;
NI Acc;
tllchunk26204* Next;
};
struct  tbigchunk25442  {
  tbasechunk25438 Sup;
tbigchunk25442* Next;
tbigchunk25442* Prev;
NI Align;
NF Data;
};
struct  ttrunk25413  {
ttrunk25413* Next;
NI Key;
TY25420 Bits;
};
typedef tavlnode26208* TY26214[2];
struct  tavlnode26208  {
TY26214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  trect215027  {
NI16 X;
NI16 Y;
NU16 W;
NU16 H;
};
struct  tsurface215055  {
NI32 Flags;
tpixelformat215045* Format;
int W;
int H;
NU16 Pitch;
void* Pixels;
int Offset;
void* Hwdata;
trect215027 Cliprect;
NI32 Unused1;
NI32 Locked;
void* Blitmap;
int Formatversion;
int Refcount;
};
struct  tfreecell25430  {
tfreecell25430* Next;
NI Zerofield;
};
struct  tpixelformat215045  {
tpalette215041* Palette;
NU8 Bitsperpixel;
NU8 Bytesperpixel;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
NI32 Rmask;
NI32 Gmask;
NI32 Bmask;
NI32 Amask;
NI32 Colorkey;
NU8 Alpha;
};
struct  tpalette215041  {
NI Ncolors;
tcolor215033* Colors;
};
struct  tcolor215033  {
NU8 R;
NU8 G;
NU8 B;
NU8 Unused;
};
N_NIMCALL(void, initializeppu_225025)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP949)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_49604)(tcell43933* c);
static N_INLINE(void, rtladdzct_49204)(tcell43933* c);
N_NOINLINE(void, addzct_47617)(tcellseq43949* s, tcell43933* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_17801)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, canbecycleroot_47667)(tcell43933* c);
static N_INLINE(void, rtladdcycleroot_48429)(tcell43933* c);
N_NOINLINE(void, incl_44671)(tcellset43945* s, tcell43933* cell);
static N_INLINE(tcell43933*, usrtocell_47646)(void* usr);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
N_NIMCALL(void, quit_84980)(NimStringDesc* errormsg, NI errorcode);
N_NIMCALL(tsurface222011*, newscreensurface_222312)(NI width, NI height);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, fillsurface_224301)(tsurface222011* sur, NI color);
STRING_LITERAL(TMP950, "SDL failed to initialize!", 25);
tppu225014* nesppu_225020;
extern TNimType NTI2811; /* TObject */
TNimType NTI225014; /* TPPU */
extern TNimType NTI222009; /* PSurface */
TNimType NTI225012; /* PPPU */
extern tgcheap46016 gch_46044;
extern TFrame* frameptr_15242;
extern TY218226 Dl_218225;
N_NIMCALL(void, TMP949)(void* p, NI op) {
	tppu225014* a;
	a = (tppu225014*)p;
	nimGCvisit((void*)(*a).Screen, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_15242 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_15242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_15242;
	frameptr_15242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_17801();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_15242 = (*frameptr_15242).prev;
}

static N_INLINE(void, rtladdzct_49204)(tcell43933* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_47617(&gch_46044.Zct, c);
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_47667)(tcell43933* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_48429)(tcell43933* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_44671(&gch_46044.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, decref_49604)(tcell43933* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_49204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_47667(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_48429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(tcell43933*, usrtocell_47646)(void* usr) {
	tcell43933* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell43933*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell43933))))));
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell43933* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_47646(p);
	decref_49604(LOC1);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell43933* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_47646(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell43933* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_47646((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_49204(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, initializeppu_225025)(void) {
	nimfr("initializePpu", "ppu.nim")
	nimln(15, "ppu.nim");
	if (nesppu_225020) nimGCunref(nesppu_225020);
	nesppu_225020 = (tppu225014*) newObjRC1((&NTI225012), sizeof(tppu225014));
	(*nesppu_225020).Sup.m_type = (&NTI225014);
	nimln(17, "ppu.nim");
	{
		NI LOC3;
		nimln(17, "ppu.nim");
		nimln(17, "ppu.nim");
		nimln(17, "ppu.nim");
		LOC3 = 0;
		LOC3 = Dl_218225(((NI32) 32));
		if (!!((LOC3 == 0))) goto LA4;
		nimln(18, "ppu.nim");
		quit_84980(((NimStringDesc*) &TMP950), 1);
	}
	LA4: ;
	nimln(20, "ppu.nim");
	asgnRefNoCycle((void**) &(*nesppu_225020).Screen, newscreensurface_222312(256, 240));
	nimln(21, "ppu.nim");
	fillsurface_224301((*nesppu_225020).Screen, 16777215);
	popFrame();
}
N_NOINLINE(void, HEX00_ppuInit)(void) {
	nimfr("ppu", "ppu.nim")
	popFrame();
}

N_NOINLINE(void, HEX00_ppuDatInit)(void) {
static TNimNode TMP546[1];
NTI225014.size = sizeof(tppu225014);
NTI225014.kind = 17;
NTI225014.base = (&NTI2811);
TMP546[0].kind = 1;
TMP546[0].offset = offsetof(tppu225014, Screen);
TMP546[0].typ = (&NTI222009);
TMP546[0].name = "screen";
NTI225014.node = &TMP546[0];
NTI225012.size = sizeof(tppu225014*);
NTI225012.kind = 22;
NTI225012.base = (&NTI225014);
NTI225012.marker = TMP949;
}

