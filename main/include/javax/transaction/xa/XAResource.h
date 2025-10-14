#ifndef _javax_transaction_xa_XAResource_h_
#define _javax_transaction_xa_XAResource_h_
//$ interface javax.transaction.xa.XAResource
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TMENDRSCAN")
#undef TMENDRSCAN
#pragma push_macro("TMFAIL")
#undef TMFAIL
#pragma push_macro("TMJOIN")
#undef TMJOIN
#pragma push_macro("TMNOFLAGS")
#undef TMNOFLAGS
#pragma push_macro("TMONEPHASE")
#undef TMONEPHASE
#pragma push_macro("TMRESUME")
#undef TMRESUME
#pragma push_macro("TMSTARTRSCAN")
#undef TMSTARTRSCAN
#pragma push_macro("TMSUCCESS")
#undef TMSUCCESS
#pragma push_macro("TMSUSPEND")
#undef TMSUSPEND
#pragma push_macro("XA_OK")
#undef XA_OK
#pragma push_macro("XA_RDONLY")
#undef XA_RDONLY

namespace javax {
	namespace transaction {
		namespace xa {
			class Xid;
		}
	}
}

namespace javax {
	namespace transaction {
		namespace xa {

class $import XAResource : public ::java::lang::Object {
	$interface(XAResource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void commit(::javax::transaction::xa::Xid* xid, bool onePhase) {}
	virtual void end(::javax::transaction::xa::Xid* xid, int32_t flags) {}
	virtual void forget(::javax::transaction::xa::Xid* xid) {}
	virtual int32_t getTransactionTimeout() {return 0;}
	virtual bool isSameRM(::javax::transaction::xa::XAResource* xares) {return false;}
	virtual int32_t prepare(::javax::transaction::xa::Xid* xid) {return 0;}
	virtual $Array<::javax::transaction::xa::Xid>* recover(int32_t flag) {return nullptr;}
	virtual void rollback(::javax::transaction::xa::Xid* xid) {}
	virtual bool setTransactionTimeout(int32_t seconds) {return false;}
	virtual void start(::javax::transaction::xa::Xid* xid, int32_t flags) {}
	static const int32_t TMENDRSCAN = 0x00800000;
	static const int32_t TMFAIL = 0x20000000;
	static const int32_t TMJOIN = 0x00200000;
	static const int32_t TMNOFLAGS = 0;
	static const int32_t TMONEPHASE = 0x40000000;
	static const int32_t TMRESUME = 0x08000000;
	static const int32_t TMSTARTRSCAN = 0x01000000;
	static const int32_t TMSUCCESS = 0x04000000;
	static const int32_t TMSUSPEND = 0x02000000;
	static const int32_t XA_RDONLY = 3;
	static const int32_t XA_OK = 0;
};

		} // xa
	} // transaction
} // javax

#pragma pop_macro("TMENDRSCAN")
#pragma pop_macro("TMFAIL")
#pragma pop_macro("TMJOIN")
#pragma pop_macro("TMNOFLAGS")
#pragma pop_macro("TMONEPHASE")
#pragma pop_macro("TMRESUME")
#pragma pop_macro("TMSTARTRSCAN")
#pragma pop_macro("TMSUCCESS")
#pragma pop_macro("TMSUSPEND")
#pragma pop_macro("XA_OK")
#pragma pop_macro("XA_RDONLY")

#endif // _javax_transaction_xa_XAResource_h_