//
// Created by gtuser on 8/12/18.
//
#include "src/greedy/665_non_decreasing_array.hh"
#include <gtest/gtest.h>


TEST(NonDecreasingArrayTest, Solution01)
{
  NonDecreasingArray01 nda01;

  EXPECT_TRUE(nda01(std::vector<int>({4,2,3})));

  EXPECT_FALSE(nda01(std::vector<int>({4, 2, 1})));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
