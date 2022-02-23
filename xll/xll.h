// xll.h - Excel add-in interface
// Copyright (c) KALX, LLC. All rights reserved. No warranty made.
#pragma once

#include "xll/defines.h"
#include "xll/error.h"
#include "xll/exports.h"
#include "xll/addin.h"
#include "xll/register.h"
#include "xll/on.h"
#include "xll/handle.h"
#include "xll/fp.h"
#include "xll/platform.h"

namespace xll {
	bool Documentation(const char* category, const char* description);
}