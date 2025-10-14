#ifndef _javax_transaction_xa_XAException_h_
#define _javax_transaction_xa_XAException_h_
//$ class javax.transaction.xa.XAException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

#pragma push_macro("XAER_ASYNC")
#undef XAER_ASYNC
#pragma push_macro("XAER_DUPID")
#undef XAER_DUPID
#pragma push_macro("XAER_INVAL")
#undef XAER_INVAL
#pragma push_macro("XAER_NOTA")
#undef XAER_NOTA
#pragma push_macro("XAER_OUTSIDE")
#undef XAER_OUTSIDE
#pragma push_macro("XAER_PROTO")
#undef XAER_PROTO
#pragma push_macro("XAER_RMERR")
#undef XAER_RMERR
#pragma push_macro("XAER_RMFAIL")
#undef XAER_RMFAIL
#pragma push_macro("XA_HEURCOM")
#undef XA_HEURCOM
#pragma push_macro("XA_HEURHAZ")
#undef XA_HEURHAZ
#pragma push_macro("XA_HEURMIX")
#undef XA_HEURMIX
#pragma push_macro("XA_HEURRB")
#undef XA_HEURRB
#pragma push_macro("XA_NOMIGRATE")
#undef XA_NOMIGRATE
#pragma push_macro("XA_RBBASE")
#undef XA_RBBASE
#pragma push_macro("XA_RBCOMMFAIL")
#undef XA_RBCOMMFAIL
#pragma push_macro("XA_RBDEADLOCK")
#undef XA_RBDEADLOCK
#pragma push_macro("XA_RBEND")
#undef XA_RBEND
#pragma push_macro("XA_RBINTEGRITY")
#undef XA_RBINTEGRITY
#pragma push_macro("XA_RBOTHER")
#undef XA_RBOTHER
#pragma push_macro("XA_RBPROTO")
#undef XA_RBPROTO
#pragma push_macro("XA_RBROLLBACK")
#undef XA_RBROLLBACK
#pragma push_macro("XA_RBTIMEOUT")
#undef XA_RBTIMEOUT
#pragma push_macro("XA_RBTRANSIENT")
#undef XA_RBTRANSIENT
#pragma push_macro("XA_RDONLY")
#undef XA_RDONLY
#pragma push_macro("XA_RETRY")
#undef XA_RETRY

namespace javax {
	namespace transaction {
		namespace xa {

class $export XAException : public ::java::lang::Exception {
	$class(XAException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XAException();
	void init$();
	void init$($String* s);
	void init$(int32_t errcode);
	static const int64_t serialVersionUID = (int64_t)0x8D833CC2DA0F2A59;
	int32_t errorCode = 0;
	static const int32_t XA_RBBASE = 100;
	static const int32_t XA_RBROLLBACK = XA_RBBASE;
	static const int32_t XA_RBCOMMFAIL = 101; // XA_RBBASE + 1
	static const int32_t XA_RBDEADLOCK = 102; // XA_RBBASE + 2
	static const int32_t XA_RBINTEGRITY = 103; // XA_RBBASE + 3
	static const int32_t XA_RBOTHER = 104; // XA_RBBASE + 4
	static const int32_t XA_RBPROTO = 105; // XA_RBBASE + 5
	static const int32_t XA_RBTIMEOUT = 106; // XA_RBBASE + 6
	static const int32_t XA_RBTRANSIENT = 107; // XA_RBBASE + 7
	static const int32_t XA_RBEND = XA_RBTRANSIENT;
	static const int32_t XA_NOMIGRATE = 9;
	static const int32_t XA_HEURHAZ = 8;
	static const int32_t XA_HEURCOM = 7;
	static const int32_t XA_HEURRB = 6;
	static const int32_t XA_HEURMIX = 5;
	static const int32_t XA_RETRY = 4;
	static const int32_t XA_RDONLY = 3;
	static const int32_t XAER_ASYNC = (-2);
	static const int32_t XAER_RMERR = (-3);
	static const int32_t XAER_NOTA = (-4);
	static const int32_t XAER_INVAL = (-5);
	static const int32_t XAER_PROTO = (-6);
	static const int32_t XAER_RMFAIL = (-7);
	static const int32_t XAER_DUPID = (-8);
	static const int32_t XAER_OUTSIDE = (-9);
	XAException(const XAException& e);
	XAException wrapper$();
	virtual void throwWrapper$() override;
};

		} // xa
	} // transaction
} // javax

#pragma pop_macro("XAER_ASYNC")
#pragma pop_macro("XAER_DUPID")
#pragma pop_macro("XAER_INVAL")
#pragma pop_macro("XAER_NOTA")
#pragma pop_macro("XAER_OUTSIDE")
#pragma pop_macro("XAER_PROTO")
#pragma pop_macro("XAER_RMERR")
#pragma pop_macro("XAER_RMFAIL")
#pragma pop_macro("XA_HEURCOM")
#pragma pop_macro("XA_HEURHAZ")
#pragma pop_macro("XA_HEURMIX")
#pragma pop_macro("XA_HEURRB")
#pragma pop_macro("XA_NOMIGRATE")
#pragma pop_macro("XA_RBBASE")
#pragma pop_macro("XA_RBCOMMFAIL")
#pragma pop_macro("XA_RBDEADLOCK")
#pragma pop_macro("XA_RBEND")
#pragma pop_macro("XA_RBINTEGRITY")
#pragma pop_macro("XA_RBOTHER")
#pragma pop_macro("XA_RBPROTO")
#pragma pop_macro("XA_RBROLLBACK")
#pragma pop_macro("XA_RBTIMEOUT")
#pragma pop_macro("XA_RBTRANSIENT")
#pragma pop_macro("XA_RDONLY")
#pragma pop_macro("XA_RETRY")

#endif // _javax_transaction_xa_XAException_h_