//
// Created by saber on 9/22/18.
//

#include <844_backspace_string_compare.hh>
#include <gtest/gtest.h>


TEST(BackSpaceStringCompareTest, Solution01)
{
  Solution sol;
  string S = "y#fo##f";
  string T = "y#f#o##f";
  EXPECT_TRUE(sol.backspaceCompare(S, T));
}



int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}