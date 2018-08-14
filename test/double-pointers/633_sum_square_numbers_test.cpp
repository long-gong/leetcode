//
// Created by saber on 8/13/18.
//

#include <src/double-pointers/633_sum_square_numbers.hh>
#include <gtest/gtest.h>

TEST(SumOfSquareNumbersTest, Solution01)
{
  SumOfSquareNumers01 ssqn01;
  EXPECT_TRUE(ssqn01(5));
  EXPECT_FALSE(ssqn01(3));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}