//
// Created by saber on 8/25/18.
//

#include <279_perfect_squares.hh>
#include <gtest/gtest.h>


TEST(PerfectSquaresTest, Solution01)
{
  Solution sol;
  EXPECT_EQ(3, sol.numSquares(12));
  EXPECT_EQ(2, sol.numSquares(13));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}