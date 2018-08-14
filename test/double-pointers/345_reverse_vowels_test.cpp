//
// Created by saber on 8/13/18.
//

#include <src/double-pointers/345_reverse_vowels.hh>
#include <gtest/gtest.h>

TEST(ReverseVowelsTest, Solution01)
{
  ReverseVowels01 rv01;
  EXPECT_EQ("holle", rv01("hello"));
  EXPECT_EQ("leotcede", rv01("leetcode"));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}