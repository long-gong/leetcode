//
// Created by saber on 8/23/18.
//

#include <006_zigzag_conversion.hh>
#include <gtest/gtest.h>

TEST(ZigZagTest, Solution)
{
  Solution sol;
  EXPECT_EQ(std::string("PAHNAPLSIIGYIR"), sol.convert(std::string("PAYPALISHIRING"), 3));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}