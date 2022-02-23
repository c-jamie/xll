add_library(xll
	STATIC
	addin.h
	args.h
	auto.h
	concepts.h
	defines.h
	ensure.h
	error.h
	excel.h
	exports.h
	fp.h
	handle.h
	on.h
	oper.h
	platform.h
	register.h
	registry.h
	splitpath.h
	sref.h
	traits.h
	utf8.h
	win.h
	XLCALL.H
	xll_codec.h
	xll.h
	xllio.h
	xloper.h

	XLCALL.CPP
	error.cpp
	dllmain.cpp
	defines.c
	debug.cpp
	auto.cpp

	macro/xll_addin_manager.h
	macro/xll_addin.cpp
	macro/xll_document.cpp
	macro/xll_function.cpp
	macro/xll_install.cpp
	macro/xll_macro.cpp
	macro/xll_macro.h
	macro/xll_paste.cpp
	macro/xll_paste.h
	macro/xll_spreadsheet.cpp
	macro/xll_trace.cpp
	macro/xll_utility.cpp
)

target_compile_definitions(xll PUBLIC _UNICODE)
target_compile_definitions(xll PUBLIC UNICODE)
target_include_directories(xll PUBLIC ${CMAKE_SOURCE_DIR})