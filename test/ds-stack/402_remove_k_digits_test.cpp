//
// Created by saber on 9/15/18.
//
#include <402_remove_k_digits.hh>
#include <gtest/gtest.h>

TEST(RemoveKDigitsTest, Solution01)
{
  std::string num = "1432219";
  int k = 3;
  Solution sol;
  string expected = "1219";
  EXPECT_EQ(expected, sol.removeKdigits(num, k));

  num = "10200", k = 1;
  expected = "200";
  EXPECT_EQ(expected, sol.removeKdigits(num, k));

  num = "10", k = 2;
  expected = "0";
  EXPECT_EQ(expected, sol.removeKdigits(num, k));

  k = 1;
  EXPECT_EQ(expected, sol.removeKdigits(num, k));
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
