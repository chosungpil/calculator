#include "pch.h"
#include "../Project1/cal.cpp"
TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
    EXPECT_TRUE(cal != nullptr);
}
TEST(TestCaseName, TestSum) {
	Cal* cal = new Cal();
	EXPECT_EQ(3, cal->getSum(1, 2));
}

TEST(TestCaseName, TestZegop) {
	Cal* cal = new Cal();
	EXPECT_EQ(9, cal->getZegop(3));
}