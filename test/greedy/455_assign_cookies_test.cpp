#include "src/greedy/455_assign_cookies.hh"
#include <gtest/gtest.h>

TEST(CookieAssignTest, Solution01) {
  CookieAssignment01 ca01;
  // Example 1
  EXPECT_EQ(1, ca01(std::vector<int>({1, 2, 3}), std::vector<int>({1, 1})));
  // Example 2
  EXPECT_EQ(2, ca01(std::vector<int>({1, 2}), std::vector<int>({1, 2, 3})));
}

int
main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
