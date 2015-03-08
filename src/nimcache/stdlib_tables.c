/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\simon\rationalnes_\rnes\src\nimcache\stdlib_tables.o c:\users\simon\rationalnes_\rnes\src\nimcache\stdlib_tables.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY226211 TY226211;
typedef struct table226214 table226214;
typedef struct keyvaluepairseq226217 keyvaluepairseq226217;
typedef struct keyvaluepair226220 keyvaluepair226220;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct TY226803 TY226803;
typedef struct table226806 table226806;
typedef struct keyvaluepairseq226809 keyvaluepairseq226809;
typedef struct keyvaluepair226812 keyvaluepair226812;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY225155) (NI vbyte);
struct TY226211 {
NimStringDesc* Field0;
TY225155 Field1;
};
struct keyvaluepair226220 {
NU8 Field0;
NimStringDesc* Field1;
TY225155 Field2;
};
struct  table226214  {
keyvaluepairseq226217* Data;
NI Counter;
};
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef N_NIMCALL_PTR(NI, TY225853) (void);
struct TY226803 {
NimStringDesc* Field0;
TY225853 Field1;
};
struct keyvaluepair226812 {
NU8 Field0;
NimStringDesc* Field1;
TY225853 Field2;
};
struct  table226806  {
keyvaluepairseq226809* Data;
NI Counter;
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
struct keyvaluepairseq226217 {
  TGenericSeq Sup;
  keyvaluepair226220 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq226809 {
  TGenericSeq Sup;
  keyvaluepair226812 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_145302)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_86825)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_145410)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, inittable_226234)(NI initialsize_226239, table226214* Result);
N_NIMCALL(NIM_BOOL, ispoweroftwo_139518)(NI x);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP513)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nextpoweroftwo_139528)(NI x);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, HEX5BHEX5DHEX3D_226475)(table226214* t_226484, NimStringDesc* key_226488, TY225155 val_226490);
N_NIMCALL(NI, rawget_226493)(table226214 t_226500, NimStringDesc* key_226503);
N_NIMCALL(NI, hash_143842)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, enlarge_226550)(table226214* t_226559);
N_NIMCALL(void, rawinsert_226620)(table226214* t_226629, keyvaluepairseq226217** data_226637, NimStringDesc* key_226641, TY225155 val_226643);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void, inittable_226826)(NI initialsize_226831, table226806* Result);
N_NIMCALL(void, TMP518)(void* p, NI op);
N_NIMCALL(void, HEX5BHEX5DHEX3D_227075)(table226806* t_227084, NimStringDesc* key_227088, TY225853 val_227090);
N_NIMCALL(NI, rawget_227093)(table226806 t_227100, NimStringDesc* key_227103);
N_NIMCALL(void, enlarge_227150)(table226806* t_227159);
N_NIMCALL(void, rawinsert_227220)(table226806* t_227229, keyvaluepairseq226809** data_227237, NimStringDesc* key_227241, TY225853 val_227243);
STRING_LITERAL(TMP339, "length > counter ", 17);
STRING_LITERAL(TMP508, "isPowerOfTwo(initialSize) ", 26);
extern TFrame* frameptr_16242;
TNimType NTI226220; /* KeyValuePair */
TNimType NTI145009; /* SlotEnum */
extern TNimType NTI149; /* string */
extern TNimType NTI225155; /* proc (int){.locks: 0.} */
TNimType NTI226217; /* KeyValuePairSeq */
TNimType NTI226214; /* Table */
extern TNimType NTI108; /* int */
extern tgcheap47016 gch_47044;
TNimType NTI226812; /* KeyValuePair */
extern TNimType NTI225853; /* proc (): int{.locks: 0.} */
TNimType NTI226809; /* KeyValuePairSeq */
TNimType NTI226806; /* Table */

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

static N_INLINE(NIM_BOOL, mustrehash_145302)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP340;
	NI TMP341;
	NI TMP342;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(120, "tables.nim");
	{
		nimln(120, "tables.nim");
		nimln(120, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(120, "tables.nim");
		failedassertimpl_86825(((NimStringDesc*) &TMP339));
	}
	LA3: ;
	nimln(121, "tables.nim");
	nimln(121, "tables.nim");
	LOC5 = 0;
	nimln(121, "tables.nim");
	nimln(121, "tables.nim");
	TMP340 = mulInt(length, 2);
	nimln(121, "tables.nim");
	TMP341 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP340) < (NI64)(TMP341));
	if (LOC5) goto LA6;
	nimln(121, "tables.nim");
	nimln(121, "tables.nim");
	TMP342 = subInt(length, counter);
	LOC5 = ((NI64)(TMP342) < 4);
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_145410)(NI h, NI maxhash) {
	NI result;
	NI TMP343;
	NI TMP344;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(124, "tables.nim");
	nimln(124, "tables.nim");
	nimln(124, "tables.nim");
	nimln(124, "tables.nim");
	TMP343 = mulInt(5, h);
	TMP344 = addInt((NI64)(TMP343), 1);
	result = (NI)((NI64)(TMP344) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP513)(void* p, NI op) {
	keyvaluepairseq226217* a;
	NI LOC1;
	a = (keyvaluepairseq226217*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_226234)(NI initialsize_226239, table226214* Result) {
	nimfr("initTable", "tables.nim")
	nimln(229, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(229, "tables.nim");
		nimln(229, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_139518(initialsize_226239);
		if (!!(LOC3)) goto LA4;
		nimln(229, "tables.nim");
		failedassertimpl_86825(((NimStringDesc*) &TMP508));
	}
	LA4: ;
	nimln(230, "tables.nim");
	(*Result).Counter = 0;
	nimln(231, "tables.nim");
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq226217*) newSeq((&NTI226217), initialsize_226239));
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, rawget_226493)(table226214 t_226500, NimStringDesc* key_226503) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("rawGet", "tables.nim")
	result = 0;
	nimln(127, "tables.nim");
	nimln(127, "tables.nim");
	nimln(127, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_143842(key_226503);
	nimln(127, "tables.nim");
	h = (NI)(LOC1 & (t_226500.Data->Sup.len-1));
	{
		nimln(128, "tables.nim");
		while (1) {
			nimln(128, "tables.nim");
			nimln(128, "tables.nim");
			if ((NU)(h) >= (NU)(t_226500.Data->Sup.len)) raiseIndexError();
			if (!!((t_226500.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			nimln(129, "tables.nim");
			{
				NIM_BOOL LOC6;
				nimln(129, "tables.nim");
				LOC6 = 0;
				nimln(129, "tables.nim");
				if ((NU)(h) >= (NU)(t_226500.Data->Sup.len)) raiseIndexError();
				LOC6 = eqStrings(t_226500.Data->data[h].Field1, key_226503);
				if (!(LOC6)) goto LA7;
				nimln(129, "tables.nim");
				if ((NU)(h) >= (NU)(t_226500.Data->Sup.len)) raiseIndexError();
				LOC6 = (t_226500.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				nimln(130, "tables.nim");
				nimln(130, "tables.nim");
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			nimln(131, "tables.nim");
			nimln(131, "tables.nim");
			h = nexttry_145410(h, (t_226500.Data->Sup.len-1));
		} LA3: ;
	}
	nimln(132, "tables.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44933* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_48646(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_50204(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, rawinsert_226620)(table226214* t_226629, keyvaluepairseq226217** data_226637, NimStringDesc* key_226641, TY225155 val_226643) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	nimfr("rawInsert", "tables.nim")
	nimln(135, "tables.nim");
	nimln(135, "tables.nim");
	nimln(135, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_143842(key_226641);
	nimln(135, "tables.nim");
	h = (NI)(LOC1 & ((*data_226637)->Sup.len-1));
	{
		nimln(136, "tables.nim");
		while (1) {
			nimln(136, "tables.nim");
			if ((NU)(h) >= (NU)((*data_226637)->Sup.len)) raiseIndexError();
			if (!((*data_226637)->data[h].Field0 == ((NU8) 1))) goto LA3;
			nimln(137, "tables.nim");
			nimln(137, "tables.nim");
			h = nexttry_145410(h, ((*data_226637)->Sup.len-1));
		} LA3: ;
	}
	nimln(138, "tables.nim");
	if ((NU)(h) >= (NU)((*data_226637)->Sup.len)) raiseIndexError();
	LOC4 = 0;
	LOC4 = (*data_226637)->data[h].Field1; (*data_226637)->data[h].Field1 = copyStringRC1(key_226641);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	nimln(139, "tables.nim");
	if ((NU)(h) >= (NU)((*data_226637)->Sup.len)) raiseIndexError();
	(*data_226637)->data[h].Field2 = val_226643;
	nimln(140, "tables.nim");
	if ((NU)(h) >= (NU)((*data_226637)->Sup.len)) raiseIndexError();
	(*data_226637)->data[h].Field0 = ((NU8) 1);
	popFrame();
}

N_NIMCALL(void, enlarge_226550)(table226214* t_226559) {
	keyvaluepairseq226217* n;
	NI TMP516;
	keyvaluepairseq226217* LOC8;
	nimfr("enlarge", "tables.nim")
	n = 0;
	nimln(178, "tables.nim");
	nimln(178, "tables.nim");
	nimln(178, "tables.nim");
	TMP516 = mulInt((*t_226559).Data->Sup.len, 2);
	n = (keyvaluepairseq226217*) newSeq((&NTI226217), (NI64)(TMP516));
	{
		NI i_226605;
		NI HEX3Atmp_226684;
		NI res_226687;
		i_226605 = 0;
		HEX3Atmp_226684 = 0;
		nimln(179, "tables.nim");
		nimln(179, "tables.nim");
		HEX3Atmp_226684 = ((*t_226559).Data->Sup.len-1);
		nimln(1569, "system.nim");
		res_226687 = 0;
		{
			nimln(1570, "system.nim");
			while (1) {
				nimln(1570, "system.nim");
				if (!(res_226687 <= HEX3Atmp_226684)) goto LA3;
				nimln(1569, "system.nim");
				i_226605 = res_226687;
				nimln(180, "tables.nim");
				{
					nimln(180, "tables.nim");
					if ((NU)(i_226605) >= (NU)((*t_226559).Data->Sup.len)) raiseIndexError();
					if (!((*t_226559).Data->data[i_226605].Field0 == ((NU8) 1))) goto LA6;
					nimln(180, "tables.nim");
					if ((NU)(i_226605) >= (NU)((*t_226559).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_226605) >= (NU)((*t_226559).Data->Sup.len)) raiseIndexError();
					rawinsert_226620(t_226559, (&n), (*t_226559).Data->data[i_226605].Field1, (*t_226559).Data->data[i_226605].Field2);
				}
				LA6: ;
				nimln(1572, "system.nim");
				res_226687 = addInt(res_226687, 1);
			} LA3: ;
		}
	}
	nimln(181, "tables.nim");
	LOC8 = 0;
	LOC8 = (*t_226559).Data;
	unsureAsgnRef((void**) (&(*t_226559).Data), n);
	n = LOC8;
	popFrame();
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_226475)(table226214* t_226484, NimStringDesc* key_226488, TY225155 val_226490) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(189, "tables.nim");
	index = rawget_226493((*t_226484), key_226488);
	nimln(190, "tables.nim");
	{
		nimln(190, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(191, "tables.nim");
		if ((NU)(index) >= (NU)((*t_226484).Data->Sup.len)) raiseIndexError();
		(*t_226484).Data->data[index].Field2 = val_226490;
	}
	goto LA1;
	LA3: ;
	{
		nimln(184, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(184, "tables.nim");
			nimln(184, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_145302((*t_226484).Data->Sup.len, (*t_226484).Counter);
			if (!LOC8) goto LA9;
			nimln(184, "tables.nim");
			enlarge_226550(t_226484);
		}
		LA9: ;
		nimln(185, "tables.nim");
		rawinsert_226620(t_226484, (&(*t_226484).Data), key_226488, val_226490);
		nimln(186, "tables.nim");
		(*t_226484).Counter = addInt((*t_226484).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, totable_226196)(TY226211* pairs_226209, NI pairs_226209Len0, table226214* Result) {
	NI TMP514;
	NI LOC1;
	nimfr("toTable", "tables.nim")
	nimln(236, "tables.nim");
	nimln(236, "tables.nim");
	nimln(236, "tables.nim");
	nimln(236, "tables.nim");
	TMP514 = addInt(pairs_226209Len0, 10);
	LOC1 = 0;
	LOC1 = nextpoweroftwo_139528((NI64)(TMP514));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI226214));
	inittable_226234(LOC1, Result);
	{
		NimStringDesc* key_226470;
		TY225155 val_226471;
		NI i_226750;
		key_226470 = 0;
		val_226471 = 0;
		nimln(1649, "system.nim");
		i_226750 = 0;
		{
			nimln(1650, "system.nim");
			while (1) {
				nimln(1650, "system.nim");
				nimln(1650, "system.nim");
				if (!(i_226750 < pairs_226209Len0)) goto LA4;
				nimln(1651, "system.nim");
				if ((NU)(i_226750) >= (NU)(pairs_226209Len0)) raiseIndexError();
				key_226470 = pairs_226209[i_226750].Field0;
				nimln(1651, "system.nim");
				if ((NU)(i_226750) >= (NU)(pairs_226209Len0)) raiseIndexError();
				val_226471 = pairs_226209[i_226750].Field1;
				nimln(237, "tables.nim");
				HEX5BHEX5DHEX3D_226475(Result, key_226470, val_226471);
				nimln(1652, "system.nim");
				i_226750 = addInt(i_226750, 1);
			} LA4: ;
		}
	}
	popFrame();
}
N_NIMCALL(void, TMP518)(void* p, NI op) {
	keyvaluepairseq226809* a;
	NI LOC1;
	a = (keyvaluepairseq226809*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_226826)(NI initialsize_226831, table226806* Result) {
	nimfr("initTable", "tables.nim")
	nimln(229, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(229, "tables.nim");
		nimln(229, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_139518(initialsize_226831);
		if (!!(LOC3)) goto LA4;
		nimln(229, "tables.nim");
		failedassertimpl_86825(((NimStringDesc*) &TMP508));
	}
	LA4: ;
	nimln(230, "tables.nim");
	(*Result).Counter = 0;
	nimln(231, "tables.nim");
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq226809*) newSeq((&NTI226809), initialsize_226831));
	popFrame();
}

N_NIMCALL(NI, rawget_227093)(table226806 t_227100, NimStringDesc* key_227103) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("rawGet", "tables.nim")
	result = 0;
	nimln(127, "tables.nim");
	nimln(127, "tables.nim");
	nimln(127, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_143842(key_227103);
	nimln(127, "tables.nim");
	h = (NI)(LOC1 & (t_227100.Data->Sup.len-1));
	{
		nimln(128, "tables.nim");
		while (1) {
			nimln(128, "tables.nim");
			nimln(128, "tables.nim");
			if ((NU)(h) >= (NU)(t_227100.Data->Sup.len)) raiseIndexError();
			if (!!((t_227100.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			nimln(129, "tables.nim");
			{
				NIM_BOOL LOC6;
				nimln(129, "tables.nim");
				LOC6 = 0;
				nimln(129, "tables.nim");
				if ((NU)(h) >= (NU)(t_227100.Data->Sup.len)) raiseIndexError();
				LOC6 = eqStrings(t_227100.Data->data[h].Field1, key_227103);
				if (!(LOC6)) goto LA7;
				nimln(129, "tables.nim");
				if ((NU)(h) >= (NU)(t_227100.Data->Sup.len)) raiseIndexError();
				LOC6 = (t_227100.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				nimln(130, "tables.nim");
				nimln(130, "tables.nim");
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			nimln(131, "tables.nim");
			nimln(131, "tables.nim");
			h = nexttry_145410(h, (t_227100.Data->Sup.len-1));
		} LA3: ;
	}
	nimln(132, "tables.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, rawinsert_227220)(table226806* t_227229, keyvaluepairseq226809** data_227237, NimStringDesc* key_227241, TY225853 val_227243) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	nimfr("rawInsert", "tables.nim")
	nimln(135, "tables.nim");
	nimln(135, "tables.nim");
	nimln(135, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_143842(key_227241);
	nimln(135, "tables.nim");
	h = (NI)(LOC1 & ((*data_227237)->Sup.len-1));
	{
		nimln(136, "tables.nim");
		while (1) {
			nimln(136, "tables.nim");
			if ((NU)(h) >= (NU)((*data_227237)->Sup.len)) raiseIndexError();
			if (!((*data_227237)->data[h].Field0 == ((NU8) 1))) goto LA3;
			nimln(137, "tables.nim");
			nimln(137, "tables.nim");
			h = nexttry_145410(h, ((*data_227237)->Sup.len-1));
		} LA3: ;
	}
	nimln(138, "tables.nim");
	if ((NU)(h) >= (NU)((*data_227237)->Sup.len)) raiseIndexError();
	LOC4 = 0;
	LOC4 = (*data_227237)->data[h].Field1; (*data_227237)->data[h].Field1 = copyStringRC1(key_227241);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	nimln(139, "tables.nim");
	if ((NU)(h) >= (NU)((*data_227237)->Sup.len)) raiseIndexError();
	(*data_227237)->data[h].Field2 = val_227243;
	nimln(140, "tables.nim");
	if ((NU)(h) >= (NU)((*data_227237)->Sup.len)) raiseIndexError();
	(*data_227237)->data[h].Field0 = ((NU8) 1);
	popFrame();
}

N_NIMCALL(void, enlarge_227150)(table226806* t_227159) {
	keyvaluepairseq226809* n;
	NI TMP521;
	keyvaluepairseq226809* LOC8;
	nimfr("enlarge", "tables.nim")
	n = 0;
	nimln(178, "tables.nim");
	nimln(178, "tables.nim");
	nimln(178, "tables.nim");
	TMP521 = mulInt((*t_227159).Data->Sup.len, 2);
	n = (keyvaluepairseq226809*) newSeq((&NTI226809), (NI64)(TMP521));
	{
		NI i_227205;
		NI HEX3Atmp_227284;
		NI res_227287;
		i_227205 = 0;
		HEX3Atmp_227284 = 0;
		nimln(179, "tables.nim");
		nimln(179, "tables.nim");
		HEX3Atmp_227284 = ((*t_227159).Data->Sup.len-1);
		nimln(1569, "system.nim");
		res_227287 = 0;
		{
			nimln(1570, "system.nim");
			while (1) {
				nimln(1570, "system.nim");
				if (!(res_227287 <= HEX3Atmp_227284)) goto LA3;
				nimln(1569, "system.nim");
				i_227205 = res_227287;
				nimln(180, "tables.nim");
				{
					nimln(180, "tables.nim");
					if ((NU)(i_227205) >= (NU)((*t_227159).Data->Sup.len)) raiseIndexError();
					if (!((*t_227159).Data->data[i_227205].Field0 == ((NU8) 1))) goto LA6;
					nimln(180, "tables.nim");
					if ((NU)(i_227205) >= (NU)((*t_227159).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_227205) >= (NU)((*t_227159).Data->Sup.len)) raiseIndexError();
					rawinsert_227220(t_227159, (&n), (*t_227159).Data->data[i_227205].Field1, (*t_227159).Data->data[i_227205].Field2);
				}
				LA6: ;
				nimln(1572, "system.nim");
				res_227287 = addInt(res_227287, 1);
			} LA3: ;
		}
	}
	nimln(181, "tables.nim");
	LOC8 = 0;
	LOC8 = (*t_227159).Data;
	unsureAsgnRef((void**) (&(*t_227159).Data), n);
	n = LOC8;
	popFrame();
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_227075)(table226806* t_227084, NimStringDesc* key_227088, TY225853 val_227090) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(189, "tables.nim");
	index = rawget_227093((*t_227084), key_227088);
	nimln(190, "tables.nim");
	{
		nimln(190, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(191, "tables.nim");
		if ((NU)(index) >= (NU)((*t_227084).Data->Sup.len)) raiseIndexError();
		(*t_227084).Data->data[index].Field2 = val_227090;
	}
	goto LA1;
	LA3: ;
	{
		nimln(184, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(184, "tables.nim");
			nimln(184, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_145302((*t_227084).Data->Sup.len, (*t_227084).Counter);
			if (!LOC8) goto LA9;
			nimln(184, "tables.nim");
			enlarge_227150(t_227084);
		}
		LA9: ;
		nimln(185, "tables.nim");
		rawinsert_227220(t_227084, (&(*t_227084).Data), key_227088, val_227090);
		nimln(186, "tables.nim");
		(*t_227084).Counter = addInt((*t_227084).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, totable_226788)(TY226803* pairs_226801, NI pairs_226801Len0, table226806* Result) {
	NI TMP519;
	NI LOC1;
	nimfr("toTable", "tables.nim")
	nimln(236, "tables.nim");
	nimln(236, "tables.nim");
	nimln(236, "tables.nim");
	nimln(236, "tables.nim");
	TMP519 = addInt(pairs_226801Len0, 10);
	LOC1 = 0;
	LOC1 = nextpoweroftwo_139528((NI64)(TMP519));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI226806));
	inittable_226826(LOC1, Result);
	{
		NimStringDesc* key_227070;
		TY225853 val_227071;
		NI i_227350;
		key_227070 = 0;
		val_227071 = 0;
		nimln(1649, "system.nim");
		i_227350 = 0;
		{
			nimln(1650, "system.nim");
			while (1) {
				nimln(1650, "system.nim");
				nimln(1650, "system.nim");
				if (!(i_227350 < pairs_226801Len0)) goto LA4;
				nimln(1651, "system.nim");
				if ((NU)(i_227350) >= (NU)(pairs_226801Len0)) raiseIndexError();
				key_227070 = pairs_226801[i_227350].Field0;
				nimln(1651, "system.nim");
				if ((NU)(i_227350) >= (NU)(pairs_226801Len0)) raiseIndexError();
				val_227071 = pairs_226801[i_227350].Field1;
				nimln(237, "tables.nim");
				HEX5BHEX5DHEX3D_227075(Result, key_227070, val_227071);
				nimln(1652, "system.nim");
				i_227350 = addInt(i_227350, 1);
			} LA4: ;
		}
	}
	popFrame();
}

N_NIMCALL(TY225853, HEX5BHEX5D_227659)(table226806 t_227666, NimStringDesc* key_227669) {
	TY225853 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(150, "tables.nim");
	index = rawget_227093(t_227666, key_227669);
	nimln(151, "tables.nim");
	{
		nimln(151, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(151, "tables.nim");
		if ((NU)(index) >= (NU)(t_227666.Data->Sup.len)) raiseIndexError();
		result = t_227666.Data->data[index].Field2;
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(TY225155, HEX5BHEX5D_227692)(table226214 t_227699, NimStringDesc* key_227702) {
	TY225155 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(150, "tables.nim");
	index = rawget_226493(t_227699, key_227702);
	nimln(151, "tables.nim");
	{
		nimln(151, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(151, "tables.nim");
		if ((NU)(index) >= (NU)(t_227699.Data->Sup.len)) raiseIndexError();
		result = t_227699.Data->data[index].Field2;
	}
	LA3: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP509[3];
static TNimNode* TMP510[3];
NI TMP512;
static char* NIM_CONST TMP511[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP515[2];
static TNimNode* TMP517[3];
static TNimNode* TMP520[2];
static TNimNode TMP330[18];
NTI226220.size = sizeof(keyvaluepair226220);
NTI226220.kind = 18;
NTI226220.base = 0;
NTI226220.flags = 2;
TMP509[0] = &TMP330[1];
NTI145009.size = sizeof(NU8);
NTI145009.kind = 14;
NTI145009.base = 0;
NTI145009.flags = 3;
for (TMP512 = 0; TMP512 < 3; TMP512++) {
TMP330[TMP512+2].kind = 1;
TMP330[TMP512+2].offset = TMP512;
TMP330[TMP512+2].name = TMP511[TMP512];
TMP510[TMP512] = &TMP330[TMP512+2];
}
TMP330[5].len = 3; TMP330[5].kind = 2; TMP330[5].sons = &TMP510[0];
NTI145009.node = &TMP330[5];
TMP330[1].kind = 1;
TMP330[1].offset = offsetof(keyvaluepair226220, Field0);
TMP330[1].typ = (&NTI145009);
TMP330[1].name = "Field0";
TMP509[1] = &TMP330[6];
TMP330[6].kind = 1;
TMP330[6].offset = offsetof(keyvaluepair226220, Field1);
TMP330[6].typ = (&NTI149);
TMP330[6].name = "Field1";
TMP509[2] = &TMP330[7];
TMP330[7].kind = 1;
TMP330[7].offset = offsetof(keyvaluepair226220, Field2);
TMP330[7].typ = (&NTI225155);
TMP330[7].name = "Field2";
TMP330[0].len = 3; TMP330[0].kind = 2; TMP330[0].sons = &TMP509[0];
NTI226220.node = &TMP330[0];
NTI226217.size = sizeof(keyvaluepairseq226217*);
NTI226217.kind = 24;
NTI226217.base = (&NTI226220);
NTI226217.flags = 2;
NTI226217.marker = TMP513;
NTI226214.size = sizeof(table226214);
NTI226214.kind = 18;
NTI226214.base = 0;
NTI226214.flags = 2;
TMP515[0] = &TMP330[9];
TMP330[9].kind = 1;
TMP330[9].offset = offsetof(table226214, Data);
TMP330[9].typ = (&NTI226217);
TMP330[9].name = "data";
TMP515[1] = &TMP330[10];
TMP330[10].kind = 1;
TMP330[10].offset = offsetof(table226214, Counter);
TMP330[10].typ = (&NTI108);
TMP330[10].name = "counter";
TMP330[8].len = 2; TMP330[8].kind = 2; TMP330[8].sons = &TMP515[0];
NTI226214.node = &TMP330[8];
NTI226812.size = sizeof(keyvaluepair226812);
NTI226812.kind = 18;
NTI226812.base = 0;
NTI226812.flags = 2;
TMP517[0] = &TMP330[12];
TMP330[12].kind = 1;
TMP330[12].offset = offsetof(keyvaluepair226812, Field0);
TMP330[12].typ = (&NTI145009);
TMP330[12].name = "Field0";
TMP517[1] = &TMP330[13];
TMP330[13].kind = 1;
TMP330[13].offset = offsetof(keyvaluepair226812, Field1);
TMP330[13].typ = (&NTI149);
TMP330[13].name = "Field1";
TMP517[2] = &TMP330[14];
TMP330[14].kind = 1;
TMP330[14].offset = offsetof(keyvaluepair226812, Field2);
TMP330[14].typ = (&NTI225853);
TMP330[14].name = "Field2";
TMP330[11].len = 3; TMP330[11].kind = 2; TMP330[11].sons = &TMP517[0];
NTI226812.node = &TMP330[11];
NTI226809.size = sizeof(keyvaluepairseq226809*);
NTI226809.kind = 24;
NTI226809.base = (&NTI226812);
NTI226809.flags = 2;
NTI226809.marker = TMP518;
NTI226806.size = sizeof(table226806);
NTI226806.kind = 18;
NTI226806.base = 0;
NTI226806.flags = 2;
TMP520[0] = &TMP330[16];
TMP330[16].kind = 1;
TMP330[16].offset = offsetof(table226806, Data);
TMP330[16].typ = (&NTI226809);
TMP330[16].name = "data";
TMP520[1] = &TMP330[17];
TMP330[17].kind = 1;
TMP330[17].offset = offsetof(table226806, Counter);
TMP330[17].typ = (&NTI108);
TMP330[17].name = "counter";
TMP330[15].len = 2; TMP330[15].kind = 2; TMP330[15].sons = &TMP520[0];
NTI226806.node = &TMP330[15];
}

