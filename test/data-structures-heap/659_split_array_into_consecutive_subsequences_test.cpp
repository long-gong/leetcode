//
// Created by saber on 9/8/18.
//

#include <659_split_array_into_consecutive_subsequences.hh>
#include <gtest/gtest.h>

TEST(SplitArrayTest, Solution01)
{
  std::vector<int> nums({1,2,3,3,4,5});
  Solution sol;
  EXPECT_TRUE(sol.isPossible(nums));

  nums = {1,2,3,3,4,4,5,5};
  EXPECT_TRUE(sol.isPossible(nums));

  nums = {1,2,3,4,4,5};
  EXPECT_FALSE(sol.isPossible(nums));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}