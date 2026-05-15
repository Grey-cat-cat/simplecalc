#include <iostream>
#include <stdexcept>
#include <calc.h>
#include <gtest/gtest.h>

TEST(CalcTest, Add_0es) {
  Except_DOUBLE_EQ(Add(0, 0), 0);
}
/*
TEST(CalcTest, Add_0es) {
  Except_INT_EQ(Add(0, 0), 0)
}

TEST(CalcTest, Add) {
  Except_DOUBLE_EQ(Add(10.0, -10.0), 0)
}

TEST(CalcTest, Add) {
  Except_INT_EQ(Add(10, -10), 0)
}

TEST(CalcTest, Add) {
  Except_DOUBLE_EQ(Add(10.0, -1.0), 9.0)
}

TEST(CalcTest, Add) {
  Except_INT_EQ(Add(10, -1), 9)
}

TEST(CalcTest, Sub) {
  Except_DOUBLE_EQ(Sub(0, 0), 0)
}

TEST(CalcTest, Sub) {
  Except_INT_EQ(Sub(0, 0), 0)
}

TEST(CalcTest, Sub) {
  Except_DOUBLE_EQ(Sub(10.0, -10.0), 20.0)
}

TEST(CalcTest, Sub) {
  Except_INT_EQ(Sub(10, -10), 20)
}

TEST(CalcTest, Sub) {
  Except_DOUBLE_EQ(Sub(10.0, -1.0), 11.0)
}

TEST(CalcTest, Sub) {
  Except_INT_EQ(Sub(10, -1), 11)
}
*/