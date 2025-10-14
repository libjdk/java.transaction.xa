#include <java.transaction.xa.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <javax/transaction/xa/XAException.h>
#include <javax/transaction/xa/XAResource.h>
#include <javax/transaction/xa/Xid.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$transaction$xa_classes_[] = {
	$classEntry("javax.transaction.xa.XAException", ::javax::transaction::xa::XAException),
	$classEntry("javax.transaction.xa.XAResource", ::javax::transaction::xa::XAResource),
	$classEntry("javax.transaction.xa.Xid", ::javax::transaction::xa::Xid)
};

const char* _java$transaction$xa_packages_[] = {
	"javax.transaction.xa"
};

void java$transaction$xa$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$transaction$xa_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$transaction$xa_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$transaction$xa$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$transaction$xa$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$setCurrentObjectStack();
	}
}

$StringArray* java$transaction$xa$GetPackages() {
	int32_t length = $lengthOf(_java$transaction$xa_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$transaction$xa_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$transaction$xa$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$transaction$xa_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$transaction$xa_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$transaction$xa$GetResource($String* name) {
	return nullptr;
}

void java$transaction$xa::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"java.transaction.xa", "17.35", "",
		&_java$transaction$xa_ModuleInfo_,
		java$transaction$xa$LibEventAction,
		java$transaction$xa$GetPackages,
		java$transaction$xa$GetClassEntry,
		java$transaction$xa$GetResource
	};
	$System::addLibrary(&lib);
}