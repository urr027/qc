// test_qc.cpp : Defines the entry point for the console application.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <gtest\gtest.h>


int wmain(int argc, wchar_t ** argv)
{
	::testing::InitGoogleTest(&argc, argv);

	RUN_ALL_TESTS();

    return 0;
}

