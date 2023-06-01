#include "pch.h"
#include "../Project1/cal.cpp"
TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
    EXPECT_TRUE(cal != nullptr);
	delete cal;
}
TEST(TestCaseName, TestDivide) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(2, cal->getDivide(4, 2));
	delete cal;
}