#include <javax/transaction/xa/XAResource.h>

#include <javax/transaction/xa/Xid.h>
#include <jcpp.h>

#undef TMENDRSCAN
#undef TMFAIL
#undef TMJOIN
#undef TMNOFLAGS
#undef TMONEPHASE
#undef TMRESUME
#undef TMSTARTRSCAN
#undef TMSUCCESS
#undef TMSUSPEND
#undef XA_OK
#undef XA_RDONLY

using $XidArray = $Array<::javax::transaction::xa::Xid>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Xid = ::javax::transaction::xa::Xid;

namespace javax {
	namespace transaction {
		namespace xa {

$FieldInfo _XAResource_FieldInfo_[] = {
	{"TMENDRSCAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMENDRSCAN)},
	{"TMFAIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMFAIL)},
	{"TMJOIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMJOIN)},
	{"TMNOFLAGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMNOFLAGS)},
	{"TMONEPHASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMONEPHASE)},
	{"TMRESUME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMRESUME)},
	{"TMSTARTRSCAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMSTARTRSCAN)},
	{"TMSUCCESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMSUCCESS)},
	{"TMSUSPEND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, TMSUSPEND)},
	{"XA_RDONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, XA_RDONLY)},
	{"XA_OK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAResource, XA_OK)},
	{}
};

$MethodInfo _XAResource_MethodInfo_[] = {
	{"commit", "(Ljavax/transaction/xa/Xid;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"end", "(Ljavax/transaction/xa/Xid;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"forget", "(Ljavax/transaction/xa/Xid;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"getTransactionTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"isSameRM", "(Ljavax/transaction/xa/XAResource;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"prepare", "(Ljavax/transaction/xa/Xid;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"recover", "(I)[Ljavax/transaction/xa/Xid;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"rollback", "(Ljavax/transaction/xa/Xid;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"setTransactionTimeout", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{"start", "(Ljavax/transaction/xa/Xid;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.transaction.xa.XAException"},
	{}
};

$ClassInfo _XAResource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.transaction.xa.XAResource",
	nullptr,
	nullptr,
	_XAResource_FieldInfo_,
	_XAResource_MethodInfo_
};

$Object* allocate$XAResource($Class* clazz) {
	return $of($alloc(XAResource));
}

$Class* XAResource::load$($String* name, bool initialize) {
	$loadClass(XAResource, name, initialize, &_XAResource_ClassInfo_, allocate$XAResource);
	return class$;
}

$Class* XAResource::class$ = nullptr;

		} // xa
	} // transaction
} // javax