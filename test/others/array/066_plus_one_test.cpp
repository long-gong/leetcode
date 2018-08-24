//
// Created by saber on 8/22/18.
//
#include <066_plus_one.hh>
#include <gtest/gtest.h>

TEST(PlusOneTest, Solution01)
{
  Solution sol;
  EXPECT_EQ(std::vector<int>({1,2,4}), sol.plusOne({1,2,3}));
  EXPECT_EQ(std::vector<int>({1,0,0}), sol.plusOne({9,9}));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
