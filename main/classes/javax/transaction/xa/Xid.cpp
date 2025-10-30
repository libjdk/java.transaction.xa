#include <javax/transaction/xa/Xid.h>

#include <jcpp.h>

#undef MAXBQUALSIZE
#undef MAXGTRIDSIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace transaction {
		namespace xa {

$FieldInfo _Xid_FieldInfo_[] = {
	{"MAXGTRIDSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Xid, MAXGTRIDSIZE)},
	{"MAXBQUALSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Xid, MAXBQUALSIZE)},
	{}
};

$MethodInfo _Xid_MethodInfo_[] = {
	{"getBranchQualifier", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getFormatId", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlobalTransactionId", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Xid_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.transaction.xa.Xid",
	nullptr,
	nullptr,
	_Xid_FieldInfo_,
	_Xid_MethodInfo_
};

$Object* allocate$Xid($Class* clazz) {
	return $of($alloc(Xid));
}

$Class* Xid::load$($String* name, bool initialize) {
	$loadClass(Xid, name, initialize, &_Xid_ClassInfo_, allocate$Xid);
	return class$;
}

$Class* Xid::class$ = nullptr;

		} // xa
	} // transaction
} // javax