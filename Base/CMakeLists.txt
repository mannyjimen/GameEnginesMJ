set(HEADER_FILES 
	include/Base.h
	src/Utilities.h
	src/BaseApplication.h
)

set(SOURCE_CODE_FILES 
	src/BaseApplication.cpp
)

add_library(Base SHARED ${HEADER_FILES} ${SOURCE_CODE_FILES})

target_compile_definitions(Base
PRIVATE
	BASE_LIB
PUBLIC
	$<$<CONFIG:Debug>:BASE_DEBUG=2>
	$<$<CONFIG:RelWithDebInfo>:BASE_DEBUG=1>
)

if(MSVC)
	target_compile_definitions(Base PUBLIC BASE_MSVC)
endif()

target_precompile_headers(Base PRIVATE src/pch.h)