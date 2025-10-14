#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.transaction.xa_SRCS)
file(GLOB classes.javax.transaction.xa_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.transaction.xa_HEADERS}) 
list(LENGTH classes.javax.transaction.xa_SRCS classes.javax.transaction.xa_SRCS_LENGTH)
if(classes.javax.transaction.xa_SRCS_LENGTH)
	add_library(classes.javax.transaction.xa OBJECT "${classes.javax.transaction.xa_SRCS}" "${classes.javax.transaction.xa_HEADERS}")
	jcpp_enable_bigobj(classes.javax.transaction.xa)
endif()