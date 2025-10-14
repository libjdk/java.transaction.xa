#include <javax/transaction/xa/XAException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef XAER_ASYNC
#undef XAER_DUPID
#undef XAER_INVAL
#undef XAER_NOTA
#undef XAER_OUTSIDE
#undef XAER_PROTO
#undef XAER_RMERR
#undef XAER_RMFAIL
#undef XA_HEURCOM
#undef XA_HEURHAZ
#undef XA_HEURMIX
#undef XA_HEURRB
#undef XA_NOMIGRATE
#undef XA_RBBASE
#undef XA_RBCOMMFAIL
#undef XA_RBDEADLOCK
#undef XA_RBEND
#undef XA_RBINTEGRITY
#undef XA_RBOTHER
#undef XA_RBPROTO
#undef XA_RBROLLBACK
#undef XA_RBTIMEOUT
#undef XA_RBTRANSIENT
#undef XA_RDONLY
#undef XA_RETRY

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace transaction {
		namespace xa {

$FieldInfo _XAException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XAException, serialVersionUID)},
	{"errorCode", "I", nullptr, $PUBLIC, $field(XAException, errorCode)},
	{"XA_RBBASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBBASE)},
	{"XA_RBROLLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBROLLBACK)},
	{"XA_RBCOMMFAIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBCOMMFAIL)},
	{"XA_RBDEADLOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBDEADLOCK)},
	{"XA_RBINTEGRITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBINTEGRITY)},
	{"XA_RBOTHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBOTHER)},
	{"XA_RBPROTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBPROTO)},
	{"XA_RBTIMEOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBTIMEOUT)},
	{"XA_RBTRANSIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBTRANSIENT)},
	{"XA_RBEND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RBEND)},
	{"XA_NOMIGRATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_NOMIGRATE)},
	{"XA_HEURHAZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_HEURHAZ)},
	{"XA_HEURCOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_HEURCOM)},
	{"XA_HEURRB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_HEURRB)},
	{"XA_HEURMIX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_HEURMIX)},
	{"XA_RETRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RETRY)},
	{"XA_RDONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XA_RDONLY)},
	{"XAER_ASYNC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_ASYNC)},
	{"XAER_RMERR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_RMERR)},
	{"XAER_NOTA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_NOTA)},
	{"XAER_INVAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_INVAL)},
	{"XAER_PROTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_PROTO)},
	{"XAER_RMFAIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_RMFAIL)},
	{"XAER_DUPID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_DUPID)},
	{"XAER_OUTSIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAException, XAER_OUTSIDE)},
	{}
};

$MethodInfo _XAException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XAException::*)()>(&XAException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XAException::*)($String*)>(&XAException::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(XAException::*)(int32_t)>(&XAException::init$))},
	{}
};

$ClassInfo _XAException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.transaction.xa.XAException",
	"java.lang.Exception",
	nullptr,
	_XAException_FieldInfo_,
	_XAException_MethodInfo_
};

$Object* allocate$XAException($Class* clazz) {
	return $of($alloc(XAException));
}

void XAException::init$() {
	$Exception::init$();
}

void XAException::init$($String* s) {
	$Exception::init$(s);
}

void XAException::init$(int32_t errcode) {
	$Exception::init$();
	this->errorCode = errcode;
}

XAException::XAException() {
}

XAException::XAException(const XAException& e) {
}

XAException XAException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XAException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XAException::load$($String* name, bool initialize) {
	$loadClass(XAException, name, initialize, &_XAException_ClassInfo_, allocate$XAException);
	return class$;
}

$Class* XAException::class$ = nullptr;

		} // xa
	} // transaction
} // javax