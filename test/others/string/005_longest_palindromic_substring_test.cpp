//
// Created by saber on 8/23/18.
//
#include <005_longest_palindromic_substring.hh>
#include <gtest/gtest.h>


TEST(LongestPalindromeTest, Solution01)
{
  Solution sol;
  auto res = sol.longestPalindrome("babad");
  EXPECT_TRUE(std::string("bab") == res || std::string("aba") == res);

  EXPECT_EQ(std::string("bb"), sol.longestPalindrome("bb"));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
