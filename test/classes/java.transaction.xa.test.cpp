#include <java.transaction.xa.test.h>

#include <java.transaction.xa.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$transaction$xa$test$PreloadClass(void* eventData) {
}

void java$transaction$xa$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$transaction$xa$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$setCurrentObjectStack();
	}
}

$StringArray* java$transaction$xa$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$transaction$xa$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$transaction$xa$test$GetResource($String* name) {
	return nullptr;
}

void java$transaction$xa$test::init() {
	::java$transaction$xa::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.transaction.xa.test", "17.35", "",
		nullptr,
		java$transaction$xa$test$LibEventAction,
		java$transaction$xa$test$GetPackages,
		java$transaction$xa$test$GetClassEntry,
		java$transaction$xa$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}