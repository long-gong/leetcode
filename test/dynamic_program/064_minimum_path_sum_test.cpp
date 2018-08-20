//
// Created by saber on 8/18/18.
//
#include <src/dynamic_program/064_minimum_path_sum_test.hh>
#include <gtest/gtest.h>

TEST(MinimumPathSumTest, Solution01)
{
  MinimumPathSum01 mps01;
  EXPECT_EQ(7, mps01({
                         {1,3,1},
                         {1,5,1},
                         {4,2,1}
                     }));
}
TEST(MinimumPathSumTest, Solution02)
{
  MinimumPathSum02 mps01;
  EXPECT_EQ(7, mps01({
                         {1,3,1},
                         {1,5,1},
                         {4,2,1}
                     }));
}

int main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
