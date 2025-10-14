#ifndef _javax_transaction_xa_Xid_h_
#define _javax_transaction_xa_Xid_h_
//$ interface javax.transaction.xa.Xid
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAXBQUALSIZE")
#undef MAXBQUALSIZE
#pragma push_macro("MAXGTRIDSIZE")
#undef MAXGTRIDSIZE

namespace javax {
	namespace transaction {
		namespace xa {

class $export Xid : public ::java::lang::Object {
	$interface(Xid, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* getBranchQualifier() {return nullptr;}
	virtual int32_t getFormatId() {return 0;}
	virtual $bytes* getGlobalTransactionId() {return nullptr;}
	static const int32_t MAXGTRIDSIZE = 64;
	static const int32_t MAXBQUALSIZE = 64;
};

		} // xa
	} // transaction
} // javax

#pragma pop_macro("MAXBQUALSIZE")
#pragma pop_macro("MAXGTRIDSIZE")

#endif // _javax_transaction_xa_Xid_h_