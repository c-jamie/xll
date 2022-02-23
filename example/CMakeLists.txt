add_library(xll_example
	SHARED
	test2.cpp
)

if("${CMAKE_GENERATOR_PLATFORM}" STREQUAL "x64") 
    message(
        STATUS
		"Targeting Win64 LIB | ${CMAKE_GENERATOR_PLATFORM}"
    )
	target_link_libraries(
		xll_example 
		PUBLIC xll XLCALL32 
	)
	target_link_directories(xll_example PUBLIC ${CMAKE_SOURCE_DIR}/xll/x64)
else()
    message(
        STATUS
		"Targeting Win32 LIB | ${CMAKE_GENERATOR_PLATFORM}"
    )
	target_link_libraries(xll_example xll XLCALL32 arrow_shared)
	target_link_directories(xll_example PUBLIC ${CMAKE_SOURCE_DIR}/xll/)
endif()

set_target_properties(xll_example PROPERTIES SUFFIX ".xll")