/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\simon\rationalnes_\rnes\src\nimcache\hex.o c:\users\simon\rationalnes_\rnes\src\nimcache\hex.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>

#include <stdio.h>
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSafePoint TSafePoint;
typedef struct tcell44933 tcell44933;
typedef struct tcellset44945 tcellset44945;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct TY131128 TY131128;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef NIM_CHAR TY131074[16];
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY14809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14809 raiseAction;
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
struct TY131128 {
  TGenericSeq Sup;
  NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, nibblefromchar_131003)(NIM_CHAR c);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_CHAR, nibbletochar_131069)(NI nibble);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44933* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44933* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44933* c);
N_NOINLINE(void, incl_45671)(tcellset44945* s, tcell44933* cell);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, decref_50604)(tcell44933* c);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TY131128*, newseq_131123)(NI len_131127);
N_NIMCALL(NimStringDesc*, encode_131101)(NimStringDesc* str);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, decode_131214)(NimStringDesc* str);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, seqtostring_131281)(TY131128* seq);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, failedassertimpl_86825)(NimStringDesc* msg);
NIM_CONST TY131074 bytemap_131073 = {48,
49,
50,
51,
52,
53,
54,
55,
56,
57,
97,
98,
99,
100,
101,
102}
;
STRING_LITERAL(TMP291, "Hex string character out of range for valid hex char", 52);
STRING_LITERAL(TMP301, "", 0);
STRING_LITERAL(TMP302, "(system.len|system.len|system.len|system.len|system.len|system."
"len|...)(a) (system.==|system.==|system.==|system.==|system.==|s"
"ystem.==|system.==|system.==|system.==|system.==|system.==|syste"
"m.==|system.==|system.==|system.==|system.==|system.==|system.=="
"|system.==|system.==|...)\015\012    L seq modified while iterating ov"
"er it", 324);
extern TFrame* frameptr_16242;
extern TSafePoint* exchandler_16243;
extern TNimType NTI3249; /* ValueError */
extern Exception* currexception_16245;
extern tgcheap47016 gch_47044;

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

N_NIMCALL(NI, nibblefromchar_131003)(NIM_CHAR c) {
	NI result;
	nimfr("nibbleFromChar", "hex.nim")
	result = 0;
	nimln(5, "hex.nim");
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		NI TMP285;
		nimln(6, "hex.nim");
		nimln(6, "hex.nim");
		nimln(6, "hex.nim");
		TMP285 = subInt(((NI) (((NU8)(c)))), 48);
		result = ((NI) ((NI64)(TMP285)));
	}
	break;
	case 97 ... 102:
	{
		NI TMP286;
		NI TMP287;
		nimln(7, "hex.nim");
		nimln(7, "hex.nim");
		nimln(7, "hex.nim");
		nimln(7, "hex.nim");
		TMP286 = subInt(((NI) (((NU8)(c)))), 97);
		TMP287 = addInt(((NI) ((NI64)(TMP286))), 10);
		result = ((NI) ((NI64)(TMP287)));
	}
	break;
	case 65 ... 70:
	{
		NI TMP288;
		NI TMP289;
		nimln(8, "hex.nim");
		nimln(8, "hex.nim");
		nimln(8, "hex.nim");
		nimln(8, "hex.nim");
		TMP288 = subInt(((NI) (((NU8)(c)))), 65);
		TMP289 = addInt(((NI) ((NI64)(TMP288))), 10);
		result = ((NI) ((NI64)(TMP289)));
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16243;
	exchandler_16243 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16243 = (*exchandler_16243).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_16242 = s;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2619, "system.nim");
	result = currexception_16245;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44933* c) {
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

static N_INLINE(void, rtladdcycleroot_49429)(tcell44933* c) {
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
		incl_45671((&gch_47044.Cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_51025)(tcell44933* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_49429(c);
	}
	LA4: ;
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

static N_INLINE(void, decref_50604)(tcell44933* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell44933* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell44933* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_16245), (*currexception_16245).parent);
}

N_NIMCALL(NIM_CHAR, nibbletochar_131069)(NI nibble) {
	NIM_CHAR volatile result;
	TSafePoint TMP290;
	nimfr("nibbleToChar", "hex.nim")
	result = 0;
	nimln(14, "hex.nim");
	pushSafePoint(&TMP290);
	TMP290.status = setjmp(TMP290.context);
	if (TMP290.status == 0) {
		nimln(15, "hex.nim");
		{
			nimln(15, "hex.nim");
			if (!(nibble < 16)) goto LA4;
			nimln(16, "hex.nim");
			nimln(16, "hex.nim");
			if ((NU)(nibble) > (NU)(15)) raiseIndexError();
			result = bytemap_131073[(nibble)- 0];
			popSafePoint();
			goto BeforeRet;
		}
		LA4: ;
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&F);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3249))) {
			TMP290.status = 0;
			nimln(18, "hex.nim");
			nimln(18, "hex.nim");
			printf("%s\015\012", (((NimStringDesc*) &TMP291))->data);
			popCurrentException();
		}
	}
	if (TMP290.status != 0) reraiseException();
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, encode_131101)(NimStringDesc* str) {
	NimStringDesc* result;
	NI length;
	TY131128* bytes;
	NI TMP293;
	NI i;
	nimfr("encode", "hex.nim")
	result = 0;
	nimln(21, "hex.nim");
	nimln(21, "hex.nim");
	length = str->Sup.len;
	nimln(22, "hex.nim");
	nimln(22, "hex.nim");
	TMP293 = mulInt(length, 2);
	bytes = newseq_131123((NI64)(TMP293));
	nimln(23, "hex.nim");
	i = 0;
	{
		nimln(24, "hex.nim");
		while (1) {
			NI a;
			NI b;
			NI TMP294;
			NI TMP295;
			NI TMP296;
			nimln(24, "hex.nim");
			if (!(i < length)) goto LA2;
			nimln(25, "hex.nim");
			nimln(25, "hex.nim");
			nimln(25, "hex.nim");
			if ((NU)(i) > (NU)(str->Sup.len)) raiseIndexError();
			a = (NI)((NU64)(((NI) (((NU8)(str->data[i]))))) >> (NU64)(4));
			nimln(26, "hex.nim");
			nimln(26, "hex.nim");
			nimln(26, "hex.nim");
			if ((NU)(i) > (NU)(str->Sup.len)) raiseIndexError();
			b = (NI)(((NI) (((NU8)(str->data[i])))) & 15);
			nimln(27, "hex.nim");
			nimln(27, "hex.nim");
			TMP294 = mulInt(i, 2);
			if ((NU)((NI64)(TMP294)) >= (NU)(bytes->Sup.len)) raiseIndexError();
			bytes->data[(NI64)(TMP294)] = nibbletochar_131069(a);
			nimln(28, "hex.nim");
			nimln(28, "hex.nim");
			nimln(28, "hex.nim");
			TMP295 = mulInt(i, 2);
			TMP296 = addInt((NI64)(TMP295), 1);
			if ((NU)((NI64)(TMP296)) >= (NU)(bytes->Sup.len)) raiseIndexError();
			bytes->data[(NI64)(TMP296)] = nibbletochar_131069(((NI) (b)));
			nimln(29, "hex.nim");
			i = addInt(i, 1);
		} LA2: ;
	}
	nimln(30, "hex.nim");
	nimln(30, "hex.nim");
	result = copyString(((NimStringDesc*) (bytes)));
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;
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

N_NIMCALL(NimStringDesc*, decode_131214)(NimStringDesc* str) {
	NimStringDesc* result;
	NI length;
	NI TMP297;
	TY131128* bytes;
	NI i;
	nimfr("decode", "hex.nim")
	result = 0;
	nimln(33, "hex.nim");
	nimln(33, "hex.nim");
	nimln(33, "hex.nim");
	TMP297 = divInt(str->Sup.len, 2);
	length = (NI64)(TMP297);
	nimln(34, "hex.nim");
	bytes = newseq_131123(length);
	nimln(35, "hex.nim");
	i = 0;
	{
		nimln(36, "hex.nim");
		while (1) {
			NI TMP298;
			NI LOC3;
			NI TMP299;
			NI TMP300;
			NI LOC4;
			nimln(36, "hex.nim");
			if (!(i < length)) goto LA2;
			nimln(37, "hex.nim");
			if ((NU)(i) >= (NU)(bytes->Sup.len)) raiseIndexError();
			nimln(37, "hex.nim");
			nimln(37, "hex.nim");
			nimln(37, "hex.nim");
			nimln(37, "hex.nim");
			nimln(37, "hex.nim");
			TMP298 = mulInt(2, i);
			if ((NU)((NI64)(TMP298)) > (NU)(str->Sup.len)) raiseIndexError();
			LOC3 = 0;
			LOC3 = nibblefromchar_131003(str->data[(NI64)(TMP298)]);
			nimln(37, "hex.nim");
			nimln(37, "hex.nim");
			nimln(37, "hex.nim");
			TMP299 = mulInt(2, i);
			TMP300 = addInt((NI64)(TMP299), 1);
			if ((NU)((NI64)(TMP300)) > (NU)(str->Sup.len)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nibblefromchar_131003(str->data[(NI64)(TMP300)]);
			bytes->data[i] = ((NIM_CHAR) (((NI)chckRange((NI)((NI)((NU64)(LOC3) << (NU64)(4)) | LOC4), 0, 255))));
			nimln(38, "hex.nim");
			i = addInt(i, 1);
		} LA2: ;
	}
	nimln(39, "hex.nim");
	nimln(39, "hex.nim");
	result = copyString(((NimStringDesc*) (bytes)));
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, seqtostring_131281)(TY131128* seq) {
	NimStringDesc* result_131285;
	NimStringDesc* result;
	nimfr("seqToString", "hex.nim")
	result_131285 = 0;
	nimln(42, "hex.nim");
	result = copyString(((NimStringDesc*) &TMP301));
	{
		NIM_CHAR i_131422;
		NI i_131426;
		NI l_131428;
		i_131422 = 0;
		nimln(2986, "system.nim");
		i_131426 = 0;
		nimln(2987, "system.nim");
		nimln(2987, "system.nim");
		l_131428 = seq->Sup.len;
		{
			nimln(2988, "system.nim");
			while (1) {
				nimln(2988, "system.nim");
				if (!(i_131426 < l_131428)) goto LA3;
				nimln(2989, "system.nim");
				if ((NU)(i_131426) >= (NU)(seq->Sup.len)) raiseIndexError();
				i_131422 = seq->data[i_131426];
				nimln(44, "hex.nim");
				result = addChar(result, i_131422);
				nimln(2990, "system.nim");
				i_131426 = addInt(i_131426, 1);
				nimln(2991, "system.nim");
				{
					nimln(2991, "system.nim");
					nimln(2991, "system.nim");
					nimln(2991, "system.nim");
					if (!!((seq->Sup.len == l_131428))) goto LA6;
					nimln(2991, "system.nim");
					failedassertimpl_86825(((NimStringDesc*) &TMP302));
				}
				LA6: ;
			} LA3: ;
		}
	}
	nimln(45, "hex.nim");
	nimln(45, "hex.nim");
	nimln(45, "hex.nim");
	result_131285 = copyString(result);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result_131285;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_hexInit)(void) {
	nimfr("hex", "hex.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_hexDatInit)(void) {
}
