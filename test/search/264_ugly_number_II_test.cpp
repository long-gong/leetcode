//
// Created by saber on 8/25/18.
//

#include <264_ugly_number_II.hh>
#include <gtest/gtest.h>

TEST(UglyNumberIITest, Solution01)
{
  Solution sol;
  EXPECT_EQ(1, sol.nthUglyNumber(1));
  EXPECT_EQ(2, sol.nthUglyNumber(2));
  EXPECT_EQ(3, sol.nthUglyNumber(3));
  EXPECT_EQ(4, sol.nthUglyNumber(4));
  EXPECT_EQ(5, sol.nthUglyNumber(5));
  EXPECT_EQ(6, sol.nthUglyNumber(6));
  EXPECT_EQ(8, sol.nthUglyNumber(7));
  EXPECT_EQ(9, sol.nthUglyNumber(8));
  EXPECT_EQ(10, sol.nthUglyNumber(9));
  EXPECT_EQ(12, sol.nthUglyNumber(10));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}