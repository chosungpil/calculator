#include "pch.h"
#include "../Project1/cal.cpp"
TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
    EXPECT_TRUE(cal != nullptr);
	EXPECT_EQ(30, cal->getMinus(100, 70));
}