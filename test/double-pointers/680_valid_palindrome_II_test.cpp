//
// Created by saber on 8/13/18.
//
#include <src/double-pointers/680_valid_palindrome_II.hh>
#include <gtest/gtest.h>

TEST(ValidPalindromeIITest, Solution01)
{
  ValidPalindromeII01 vp01;
  EXPECT_TRUE(vp01("aba"));
  EXPECT_TRUE(vp01("abca"));
  EXPECT_TRUE(vp01("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
