#include <flow.h>
#include <gtest/gtest.h>

TEST(Low_number, Test1) {
  std::string str = "Once up on a time";

  size_t flow = Count(str);
  EXPECT_EQ(flow, 5);
}

TEST(Low_number, Test2) {
  std::string str = " Once up on a time ";

  size_t flow = Count(str);
  EXPECT_EQ(flow, 5);
}

TEST(Low_number, Test3) {
  std::string str = " Onceuponatime ";

  size_t flow = Count(str);
  EXPECT_EQ(flow, 1);
}

TEST(With_skip, Test1) {
  std::string str = " Onceuponatime ";
  str += '\n';
  str += " what?";

  size_t flow = Count(str);
  EXPECT_EQ(flow, 2);
}

TEST(With_skip, Test2) {
  std::string str = " Onceuponatime ";
  str += '\n';
  str += "what?";
  size_t flow = Count(str);
  EXPECT_EQ(flow, 2);
}
