#include "pch.h"
#include "../Project1/cal.cpp"
TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
	delete cal;
}
TEST(TestCaseName, TestMinus) {
	Cal* cal = new Cal();
	EXPECT_EQ(30, cal->getMinus(100, 70));
		delete cal;
}

TEST(TestCaseName, TestDivide) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(2, cal->getDivide(4, 2));
	delete cal;
}
TEST(TestCaseName, TestSum) {
	Cal* cal = new Cal();
	EXPECT_EQ(3, cal->getSum(1, 2));
}

TEST(TestCaseName, TestZegop) {
	Cal* cal = new Cal();
	EXPECT_EQ(9, cal->getZegop(3));
}

TEST(TestCaseName, TestGop) {
	Cal* cal = new Cal();
	EXPECT_EQ(9, cal->getGop(1, 9));
}

TEST(TestCaseName, TestSumSum) {
	Cal* cal = new Cal();
	EXPECT_EQ(17, cal->getSumSum(1, 9, 7));
}