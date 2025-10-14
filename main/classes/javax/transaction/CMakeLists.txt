#machine generated

add_subdirectory("xa")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.transaction_SRCS)
file(GLOB classes.javax.transaction_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.transaction_HEADERS}) 
list(LENGTH classes.javax.transaction_SRCS classes.javax.transaction_SRCS_LENGTH)
if(classes.javax.transaction_SRCS_LENGTH)
	add_library(classes.javax.transaction OBJECT "${classes.javax.transaction_SRCS}" "${classes.javax.transaction_HEADERS}")
	jcpp_enable_bigobj(classes.javax.transaction)
endif()