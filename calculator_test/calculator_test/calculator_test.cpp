// calculator_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <gtest/gtest.h>
#include "calculator.h"

Calculator Bob;

TEST(CalTest, AddMinusMultiplyDivide)
{
	EXPECT_DOUBLE_EQ(15, Bob.add(5, 10));
	EXPECT_DOUBLE_EQ(25, Bob.add(7, 18));

	EXPECT_DOUBLE_EQ(90, Bob.add(100, 10));
	EXPECT_DOUBLE_EQ(-5, Bob.add(5, 10));

	EXPECT_DOUBLE_EQ(54, Bob.add(6, 9));
	EXPECT_DOUBLE_EQ(121, Bob.add(11, 11));

	EXPECT_DOUBLE_EQ(5, Bob.add(10, 2));
	EXPECT_DOUBLE_EQ(11, Bob.add(55, 5));
	
}


int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
