/* Generated by Nimrod Compiler v0.9.6 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nimrod\lib -o c:\users\simon\rationalnes_\nimcache\mem.o c:\users\simon\rationalnes_\nimcache\mem.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tcpumem206043 tcpumem206043;
typedef struct TY129110 TY129110;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY206048 TY206048;
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
typedef struct trom205024 trom205024;
typedef struct NimStringDesc NimStringDesc;
typedef struct tbasechunk25438 tbasechunk25438;
typedef struct tfreecell25430 tfreecell25430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
struct  tcpumem206043  {
  TNimObject Sup;
TY206048* Wram;
TY206048* Sram;
TY206048* Prog;
TY206048* Ppuregisters;
TY206048* Apuregisters;
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
typedef NIM_CHAR TY205027[16];
struct  trom205024  {
  TNimObject Sup;
TY205027 Header;
TY129110* Prgbytes;
TY129110* Chrbytes;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tfreecell25430  {
tfreecell25430* Next;
NI Zerofield;
};
struct TY129110 {
  TGenericSeq Sup;
  NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY206048 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, setprogram_206062)(void* bank);
N_NIMCALL(TY129110*, newseq_129105)(NI len_129109);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_17801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(TY206048*, newseq_206193)(NI len_206197);
N_NIMCALL(void, TMP364)(void* p, NI op);
N_NIMCALL(void, initializememory_206173)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP366)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_49604)(tcell43933* c);
static N_INLINE(void, rtladdzct_49204)(tcell43933* c);
N_NOINLINE(void, addzct_47617)(tcellseq43949* s, tcell43933* c);
static N_INLINE(NIM_BOOL, canbecycleroot_47667)(tcell43933* c);
static N_INLINE(void, rtladdcycleroot_48429)(tcell43933* c);
N_NOINLINE(void, incl_44671)(tcellset43945* s, tcell43933* cell);
static N_INLINE(tcell43933*, usrtocell_47646)(void* usr);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, setmemoryvalueat_206341)(NI address, NI value);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NI, getmemoryshortat_206354)(NI address);
N_NIMCALL(void*, getmemoryaddressat_206366)(NI address);
N_NIMCALL(NI, getmemorybyteat_206377)(NI address);
STRING_LITERAL(TMP370, "Invalid address", 15);
tcpumem206043* cpumemory_206057;
extern TFrame* frameptr_15242;
extern TNimType NTI116; /* int */
TNimType NTI206048; /* seq[int] */
extern TNimType NTI2811; /* TObject */
TNimType NTI206043; /* TCPUMEM */
TNimType NTI206041; /* PCPUMEM */
extern tgcheap46016 gch_46044;
extern trom205024 nesrom_205043;

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

N_NIMCALL(void, setprogram_206062)(void* bank) {
	TY129110* temporarybank;
	nimfr("setProgram", "mem.nim")
	nimln(42, "mem.nim");
	temporarybank = newseq_129105(32768);
	nimln(43, "mem.nim");
	if ((NU)(0) >= (NU)(temporarybank->Sup.len)) raiseIndexError();
	memcpy(((void*) (&temporarybank->data[0])), bank, 32768);
	{
		NI i_206151;
		NIM_CHAR value_206152;
		NI i_206157;
		i_206151 = 0;
		value_206152 = 0;
		nimln(1679, "system.nim");
		i_206157 = 0;
		{
			nimln(1680, "system.nim");
			while (1) {
				nimln(1680, "system.nim");
				nimln(1680, "system.nim");
				if (!(i_206157 < temporarybank->Sup.len)) goto LA3;
				nimln(1679, "system.nim");
				i_206151 = i_206157;
				nimln(1681, "system.nim");
				if ((NU)(i_206157) >= (NU)(temporarybank->Sup.len)) raiseIndexError();
				value_206152 = temporarybank->data[i_206157];
				nimln(45, "mem.nim");
				if ((NU)(i_206151) >= (NU)((*cpumemory_206057).Prog->Sup.len)) raiseIndexError();
				(*cpumemory_206057).Prog->data[i_206151] = ((NI) (((NU8)(value_206152))));
				nimln(1682, "system.nim");
				i_206157 = addInt(i_206157, 1);
			} LA3: ;
		}
	}
	popFrame();
}
N_NIMCALL(void, TMP364)(void* p, NI op) {
	TY206048* a;
	NI LOC1;
	a = (TY206048*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP366)(void* p, NI op) {
	tcpumem206043* a;
	a = (tcpumem206043*)p;
	nimGCvisit((void*)(*a).Wram, op);
	nimGCvisit((void*)(*a).Sram, op);
	nimGCvisit((void*)(*a).Prog, op);
	nimGCvisit((void*)(*a).Ppuregisters, op);
	nimGCvisit((void*)(*a).Apuregisters, op);
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

N_NIMCALL(void, initializememory_206173)(void) {
	nimfr("initializeMemory", "mem.nim")
	nimln(48, "mem.nim");
	if (cpumemory_206057) nimGCunref(cpumemory_206057);
	cpumemory_206057 = (tcpumem206043*) newObjRC1((&NTI206041), sizeof(tcpumem206043));
	(*cpumemory_206057).Sup.m_type = (&NTI206043);
	nimln(49, "mem.nim");
	asgnRefNoCycle((void**) &(*cpumemory_206057).Wram, newseq_206193(2048));
	nimln(50, "mem.nim");
	asgnRefNoCycle((void**) &(*cpumemory_206057).Sram, newseq_206193(8192));
	nimln(51, "mem.nim");
	asgnRefNoCycle((void**) &(*cpumemory_206057).Prog, newseq_206193(32768));
	nimln(52, "mem.nim");
	asgnRefNoCycle((void**) &(*cpumemory_206057).Ppuregisters, newseq_206193(8));
	nimln(53, "mem.nim");
	if ((NU)(0) >= (NU)(nesrom_205043.Prgbytes->Sup.len)) raiseIndexError();
	setprogram_206062(((void*) (&nesrom_205043.Prgbytes->data[0])));
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

N_NIMCALL(void, setmemoryvalueat_206341)(NI address, NI value) {
	nimfr("setMemoryValueAt", "mem.nim")
	nimln(56, "mem.nim");
	switch (address) {
	case 0 ... 2047:
	{
		nimln(58, "mem.nim");
		if ((NU)(address) >= (NU)((*cpumemory_206057).Wram->Sup.len)) raiseIndexError();
		(*cpumemory_206057).Wram->data[address] = value;
	}
	break;
	case 8192 ... 8199:
	{
		NI TMP367;
		nimln(60, "mem.nim");
		nimln(60, "mem.nim");
		TMP367 = subInt(address, 8192);
		if ((NU)((NI64)(TMP367)) >= (NU)((*cpumemory_206057).Ppuregisters->Sup.len)) raiseIndexError();
		(*cpumemory_206057).Ppuregisters->data[(NI64)(TMP367)] = value;
	}
	break;
	case 24576 ... 32767:
	{
		NI TMP368;
		nimln(62, "mem.nim");
		nimln(62, "mem.nim");
		TMP368 = subInt(address, 24576);
		if ((NU)((NI64)(TMP368)) >= (NU)((*cpumemory_206057).Sram->Sup.len)) raiseIndexError();
		(*cpumemory_206057).Sram->data[(NI64)(TMP368)] = value;
	}
	break;
	case 32768 ... 65535:
	{
		NI TMP369;
		nimln(64, "mem.nim");
		nimln(64, "mem.nim");
		TMP369 = subInt(address, 32768);
		if ((NU)((NI64)(TMP369)) >= (NU)((*cpumemory_206057).Prog->Sup.len)) raiseIndexError();
		(*cpumemory_206057).Prog->data[(NI64)(TMP369)] = value;
	}
	break;
	default:
	{
		nimln(66, "mem.nim");
		printf("%s\015\012", (((NimStringDesc*) &TMP370))->data);
		nimln(67, "mem.nim");
		goto BeforeRet;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(NI, getmemoryshortat_206354)(NI address) {
	NI result;
	NI lowbyte;
	NI TMP371;
	NI highbyte;
	NI TMP372;
	NI TMP373;
	nimfr("getMemoryShortAt", "mem.nim")
	result = 0;
	nimln(70, "mem.nim");
	nimln(70, "mem.nim");
	TMP371 = subInt(address, 32768);
	if ((NU)((NI64)(TMP371)) >= (NU)((*cpumemory_206057).Prog->Sup.len)) raiseIndexError();
	lowbyte = (*cpumemory_206057).Prog->data[(NI64)(TMP371)];
	nimln(71, "mem.nim");
	nimln(71, "mem.nim");
	nimln(71, "mem.nim");
	nimln(71, "mem.nim");
	TMP372 = addInt(address, 1);
	TMP373 = subInt((NI64)(TMP372), 32768);
	if ((NU)((NI64)(TMP373)) >= (NU)((*cpumemory_206057).Prog->Sup.len)) raiseIndexError();
	highbyte = (NI)((NU64)((*cpumemory_206057).Prog->data[(NI64)(TMP373)]) << (NU64)(8));
	nimln(72, "mem.nim");
	nimln(72, "mem.nim");
	nimln(72, "mem.nim");
	result = (NI)(highbyte | lowbyte);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void*, getmemoryaddressat_206366)(NI address) {
	void* result;
	NI TMP374;
	nimfr("getMemoryAddressAt", "mem.nim")
	result = 0;
	nimln(75, "mem.nim");
	nimln(75, "mem.nim");
	nimln(75, "mem.nim");
	TMP374 = subInt(address, 32768);
	if ((NU)((NI64)(TMP374)) >= (NU)((*cpumemory_206057).Prog->Sup.len)) raiseIndexError();
	result = ((void*) (&(*cpumemory_206057).Prog->data[(NI64)(TMP374)]));
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, getmemorybyteat_206377)(NI address) {
	NI result;
	nimfr("getMemoryByteAt", "mem.nim")
	result = 0;
	nimln(78, "mem.nim");
	switch (address) {
	case 0 ... 2047:
	{
		nimln(80, "mem.nim");
		nimln(80, "mem.nim");
		if ((NU)(address) >= (NU)((*cpumemory_206057).Wram->Sup.len)) raiseIndexError();
		result = (*cpumemory_206057).Wram->data[address];
		goto BeforeRet;
	}
	break;
	case 8192 ... 8199:
	{
		NI TMP375;
		nimln(82, "mem.nim");
		nimln(82, "mem.nim");
		nimln(82, "mem.nim");
		TMP375 = subInt(address, 8192);
		if ((NU)((NI64)(TMP375)) >= (NU)((*cpumemory_206057).Ppuregisters->Sup.len)) raiseIndexError();
		result = (*cpumemory_206057).Ppuregisters->data[(NI64)(TMP375)];
		goto BeforeRet;
	}
	break;
	case 24576 ... 32767:
	{
		NI TMP376;
		nimln(84, "mem.nim");
		nimln(84, "mem.nim");
		nimln(84, "mem.nim");
		TMP376 = subInt(address, 24576);
		if ((NU)((NI64)(TMP376)) >= (NU)((*cpumemory_206057).Sram->Sup.len)) raiseIndexError();
		result = (*cpumemory_206057).Sram->data[(NI64)(TMP376)];
		goto BeforeRet;
	}
	break;
	case 32768 ... 65535:
	{
		NI TMP377;
		nimln(86, "mem.nim");
		nimln(86, "mem.nim");
		nimln(86, "mem.nim");
		TMP377 = subInt(address, 32768);
		if ((NU)((NI64)(TMP377)) >= (NU)((*cpumemory_206057).Prog->Sup.len)) raiseIndexError();
		result = (*cpumemory_206057).Prog->data[(NI64)(TMP377)];
		goto BeforeRet;
	}
	break;
	default:
	{
		nimln(88, "mem.nim");
		nimln(88, "mem.nim");
		result = 0;
		goto BeforeRet;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, HEX00_memInit)(void) {
	nimfr("mem", "mem.nim")
	popFrame();
}

N_NOINLINE(void, HEX00_memDatInit)(void) {
static TNimNode* TMP365[5];
static TNimNode TMP362[6];
NTI206048.size = sizeof(TY206048*);
NTI206048.kind = 24;
NTI206048.base = (&NTI116);
NTI206048.flags = 2;
NTI206048.marker = TMP364;
NTI206043.size = sizeof(tcpumem206043);
NTI206043.kind = 17;
NTI206043.base = (&NTI2811);
TMP365[0] = &TMP362[1];
TMP362[1].kind = 1;
TMP362[1].offset = offsetof(tcpumem206043, Wram);
TMP362[1].typ = (&NTI206048);
TMP362[1].name = "wram";
TMP365[1] = &TMP362[2];
TMP362[2].kind = 1;
TMP362[2].offset = offsetof(tcpumem206043, Sram);
TMP362[2].typ = (&NTI206048);
TMP362[2].name = "sram";
TMP365[2] = &TMP362[3];
TMP362[3].kind = 1;
TMP362[3].offset = offsetof(tcpumem206043, Prog);
TMP362[3].typ = (&NTI206048);
TMP362[3].name = "prog";
TMP365[3] = &TMP362[4];
TMP362[4].kind = 1;
TMP362[4].offset = offsetof(tcpumem206043, Ppuregisters);
TMP362[4].typ = (&NTI206048);
TMP362[4].name = "ppuRegisters";
TMP365[4] = &TMP362[5];
TMP362[5].kind = 1;
TMP362[5].offset = offsetof(tcpumem206043, Apuregisters);
TMP362[5].typ = (&NTI206048);
TMP362[5].name = "apuRegisters";
TMP362[0].len = 5; TMP362[0].kind = 2; TMP362[0].sons = &TMP365[0];
NTI206043.node = &TMP362[0];
NTI206041.size = sizeof(tcpumem206043*);
NTI206041.kind = 22;
NTI206041.base = (&NTI206043);
NTI206041.marker = TMP366;
}

