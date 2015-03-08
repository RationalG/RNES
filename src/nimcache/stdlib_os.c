/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\simon\rationalnes_\rnes\src\nimcache\stdlib_os.o c:\users\simon\rationalnes_\rnes\src\nimcache\stdlib_os.c */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct TY13206 TY13206;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct oserror3233 oserror3233;
typedef struct systemerror3229 systemerror3229;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  systemerror3229  {
  Exception Sup;
};
struct  oserror3233  {
  systemerror3229 Sup;
NI32 Errorcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_STDCALL_PTR(NI32, TY102463) (NI32 dwflags, void* lpsource, NI32 dwmessageid, NI32 dwlanguageid, void* lpbuffer, NI32 nsize, void* arguments);
typedef N_STDCALL_PTR(void, TY102605) (void* p);
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
typedef N_STDCALL_PTR(NI32, TY102458) (void);
typedef N_STDCALL_PTR(NI16*, TY103235) (void);
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
struct TY13206 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
static N_INLINE(NimStringDesc*, pop_121076)(TY13206** s_121084);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_111020)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, HEX24_79395)(NI16* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(TY13206*, nosparseCmdLine)(NimStringDesc* c);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP359, "", 0);
STRING_LITERAL(TMP360, "unknown OS error", 16);
NIM_BOOL envcomputed_119607;
TY13206* environment_119609;
extern TFrame* frameptr_16242;
TY13206* ownargv_124009;
extern TNimType NTI111438; /* ref OSError */
extern TNimType NTI3233; /* OSError */
extern TY102463 Dl_102462;
extern TY102605 Dl_102604;
extern tgcheap47016 gch_47044;
extern TY102458 Dl_102457;
extern TNimType NTI13206; /* seq[string] */
extern TY103235 Dl_103234;

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

static N_INLINE(NimStringDesc*, pop_121076)(TY13206** s_121084) {
	NimStringDesc* result;
	NI l;
	NI TMP270;
	nimfr("pop", "system.nim")
	result = 0;
	nimln(1810, "system.nim");
	nimln(1810, "system.nim");
	nimln(1810, "system.nim");
	TMP270 = subInt((*s_121084)->Sup.len, 1);
	l = (NI64)(TMP270);
	nimln(1811, "system.nim");
	if ((NU)(l) >= (NU)((*s_121084)->Sup.len)) raiseIndexError();
	result = copyString((*s_121084)->data[l]);
	nimln(1812, "system.nim");
	(*s_121084) = (TY13206*) setLengthSeq(&((*s_121084))->Sup, sizeof(NimStringDesc*), l);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_111020)(NI32 errorcode) {
	NimStringDesc* result;
	nimfr("osErrorMsg", "os.nim")
	result = 0;
	nimln(245, "os.nim");
	result = copyString(((NimStringDesc*) &TMP359));
	nimln(247, "os.nim");
	{
		NI16* msgbuf;
		nimln(247, "os.nim");
		nimln(247, "os.nim");
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		msgbuf = 0;
		nimln(250, "os.nim");
		{
			NI32 LOC7;
			nimln(251, "os.nim");
			nimln(251, "os.nim");
			nimln(250, "os.nim");
			LOC7 = 0;
			LOC7 = Dl_102462(((NI32) 4864), NIM_NIL, errorcode, ((NI32) 0), ((void*) (&msgbuf)), ((NI32) 0), NIM_NIL);
			if (!!((LOC7 == ((NI32) 0)))) goto LA8;
			nimln(252, "os.nim");
			result = HEX24_79395(msgbuf);
			nimln(253, "os.nim");
			{
				nimln(253, "os.nim");
				nimln(253, "os.nim");
				if (!!((msgbuf == NIM_NIL))) goto LA12;
				nimln(253, "os.nim");
				Dl_102604(((void*) (msgbuf)));
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
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

N_NIMCALL(void, raiseoserror_111435)(NI32 errorcode) {
	oserror3233* e;
	nimfr("raiseOSError", "os.nim")
	e = 0;
	nimln(272, "os.nim");
	e = (oserror3233*) newObj((&NTI111438), sizeof(oserror3233));
	(*e).Sup.Sup.Sup.m_type = (&NTI3233);
	nimln(273, "os.nim");
	(*e).Errorcode = errorcode;
	nimln(274, "os.nim");
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_111020(errorcode));
	nimln(275, "os.nim");
	{
		NimStringDesc* LOC5;
		nimln(275, "os.nim");
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		nimln(276, "os.nim");
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP360));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	nimln(277, "os.nim");
	raiseException((Exception*)e, "OSError");
	popFrame();
}

N_NIMCALL(NI32, oslasterror_111467)(void) {
	NI32 result;
	result = 0;
	result = Dl_102457();
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

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(TY13206*, nosparseCmdLine)(NimStringDesc* c) {
	TY13206* result;
	NI i;
	NimStringDesc* a;
	nimfr("parseCmdLine", "os.nim")
	result = 0;
	nimln(1473, "os.nim");
	result = (TY13206*) newSeq((&NTI13206), 0);
	nimln(1474, "os.nim");
	i = 0;
	nimln(1475, "os.nim");
	a = copyString(((NimStringDesc*) &TMP359));
	{
		nimln(1476, "os.nim");
		while (1) {
			NIM_BOOL inquote;
			NimStringDesc* LOC49;
			nimln(1477, "os.nim");
			a = setLengthStr(a, 0);
			{
				nimln(1479, "os.nim");
				while (1) {
					NIM_BOOL LOC5;
					NIM_BOOL LOC6;
					NIM_BOOL LOC7;
					nimln(1479, "os.nim");
					LOC5 = 0;
					nimln(1479, "os.nim");
					LOC6 = 0;
					nimln(1479, "os.nim");
					LOC7 = 0;
					nimln(1479, "os.nim");
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					LOC7 = ((NU8)(c->data[i]) == (NU8)(32));
					if (LOC7) goto LA8;
					nimln(1479, "os.nim");
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					LOC7 = ((NU8)(c->data[i]) == (NU8)(9));
					LA8: ;
					LOC6 = LOC7;
					if (LOC6) goto LA9;
					nimln(1479, "os.nim");
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					LOC6 = ((NU8)(c->data[i]) == (NU8)(10));
					LA9: ;
					LOC5 = LOC6;
					if (LOC5) goto LA10;
					nimln(1479, "os.nim");
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					LOC5 = ((NU8)(c->data[i]) == (NU8)(13));
					LA10: ;
					if (!LOC5) goto LA4;
					nimln(1479, "os.nim");
					i = addInt(i, 1);
				} LA4: ;
			}
			nimln(1482, "os.nim");
			{
				nimln(1482, "os.nim");
				if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
				if (!((NU8)(c->data[i]) == (NU8)(0))) goto LA13;
				nimln(1482, "os.nim");
				goto LA1;
			}
			LA13: ;
			nimln(1483, "os.nim");
			inquote = NIM_FALSE;
			{
				nimln(1484, "os.nim");
				while (1) {
					nimln(1485, "os.nim");
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					switch (((NU8)(c->data[i]))) {
					case 0:
					{
						nimln(1486, "os.nim");
						goto LA15;
					}
					break;
					case 92:
					{
						NI j;
						nimln(1488, "os.nim");
						j = i;
						{
							nimln(1489, "os.nim");
							while (1) {
								nimln(1489, "os.nim");
								if ((NU)(j) > (NU)(c->Sup.len)) raiseIndexError();
								if (!((NU8)(c->data[j]) == (NU8)(92))) goto LA20;
								nimln(1489, "os.nim");
								j = addInt(j, 1);
							} LA20: ;
						}
						nimln(1490, "os.nim");
						{
							nimln(1490, "os.nim");
							if ((NU)(j) > (NU)(c->Sup.len)) raiseIndexError();
							if (!((NU8)(c->data[j]) == (NU8)(34))) goto LA23;
							{
								NI k_123025;
								NI HEX3Atmp_123110;
								NI TMP769;
								NI TMP770;
								NI res_123113;
								k_123025 = 0;
								HEX3Atmp_123110 = 0;
								nimln(1491, "os.nim");
								nimln(1491, "os.nim");
								nimln(1491, "os.nim");
								TMP769 = subInt(j, i);
								TMP770 = divInt((NI64)(TMP769), 2);
								HEX3Atmp_123110 = (NI64)(TMP770);
								nimln(1576, "system.nim");
								res_123113 = 1;
								{
									nimln(1577, "system.nim");
									while (1) {
										nimln(1577, "system.nim");
										if (!(res_123113 <= HEX3Atmp_123110)) goto LA27;
										nimln(1576, "system.nim");
										k_123025 = res_123113;
										nimln(1491, "os.nim");
										a = addChar(a, 92);
										nimln(1579, "system.nim");
										res_123113 = addInt(res_123113, 1);
									} LA27: ;
								}
							}
							nimln(1492, "os.nim");
							{
								NI TMP771;
								NI TMP772;
								nimln(1492, "os.nim");
								nimln(1492, "os.nim");
								nimln(1492, "os.nim");
								TMP771 = subInt(j, i);
								TMP772 = modInt((NI64)(TMP771), 2);
								if (!(((NI) ((NI64)(TMP772))) == 0)) goto LA30;
								nimln(1493, "os.nim");
								i = j;
							}
							goto LA28;
							LA30: ;
							{
								NI TMP773;
								nimln(1495, "os.nim");
								a = addChar(a, 34);
								nimln(1496, "os.nim");
								nimln(1496, "os.nim");
								TMP773 = addInt(j, 1);
								i = (NI64)(TMP773);
							}
							LA28: ;
						}
						goto LA21;
						LA23: ;
						{
							nimln(1498, "os.nim");
							if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
							a = addChar(a, c->data[i]);
							nimln(1499, "os.nim");
							i = addInt(i, 1);
						}
						LA21: ;
					}
					break;
					case 34:
					{
						nimln(1501, "os.nim");
						i = addInt(i, 1);
						nimln(1502, "os.nim");
						{
							nimln(1502, "os.nim");
							if (!!(inquote)) goto LA37;
							nimln(1502, "os.nim");
							inquote = NIM_TRUE;
						}
						goto LA35;
						LA37: ;
						{
							nimln(1503, "os.nim");
							if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
							if (!((NU8)(c->data[i]) == (NU8)(34))) goto LA40;
							nimln(1504, "os.nim");
							if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
							a = addChar(a, c->data[i]);
							nimln(1505, "os.nim");
							i = addInt(i, 1);
						}
						goto LA35;
						LA40: ;
						{
							nimln(1507, "os.nim");
							inquote = NIM_FALSE;
							nimln(1508, "os.nim");
							goto LA15;
						}
						LA35: ;
					}
					break;
					case 32:
					case 9:
					{
						nimln(1510, "os.nim");
						{
							nimln(1510, "os.nim");
							if (!!(inquote)) goto LA46;
							nimln(1510, "os.nim");
							goto LA15;
						}
						LA46: ;
						nimln(1511, "os.nim");
						if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
						a = addChar(a, c->data[i]);
						nimln(1512, "os.nim");
						i = addInt(i, 1);
					}
					break;
					default:
					{
						nimln(1514, "os.nim");
						if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
						a = addChar(a, c->data[i]);
						nimln(1515, "os.nim");
						i = addInt(i, 1);
					}
					break;
					}
				}
			} LA15: ;
			nimln(1530, "os.nim");
			result = (TY13206*) incrSeq(&(result)->Sup, sizeof(NimStringDesc*));
			LOC49 = 0;
			LOC49 = result->data[result->Sup.len-1]; result->data[result->Sup.len-1] = copyStringRC1(a);
			if (LOC49) nimGCunrefNoCycle(LOC49);
		}
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nosparamStr)(NI i) {
	NimStringDesc* result;
	nimfr("paramStr", "os.nim")
	result = 0;
	nimln(1685, "os.nim");
	{
		NI16* LOC5;
		NimStringDesc* LOC6;
		nimln(1685, "os.nim");
		if (!ownargv_124009 == 0) goto LA3;
		nimln(1685, "os.nim");
		nimln(1685, "os.nim");
		nimln(1685, "os.nim");
		LOC5 = 0;
		LOC5 = Dl_103234();
		LOC6 = 0;
		LOC6 = HEX24_79395(LOC5);
		asgnRefNoCycle((void**) (&ownargv_124009), nosparseCmdLine(LOC6));
	}
	LA3: ;
	nimln(1686, "os.nim");
	nimln(1686, "os.nim");
	if ((NU)(i) >= (NU)(ownargv_124009->Sup.len)) raiseIndexError();
	result = copyString(ownargv_124009->data[i]);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
	nimfr("os", "os.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
}

