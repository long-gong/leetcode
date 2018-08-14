//
// Created by saber on 8/13/18.
//

#include "src/double-pointers/167_two_sum_II.hh"
#include <gtest/gtest.h>


TEST(TwoSumIITest, Solution01)
{
  TwoSumII01 ts01;
  EXPECT_EQ(std::vector<int>({1, 2}), ts01(std::vector<int>({2, 7, 11, 15}), 9));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}