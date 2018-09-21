//
// Created by saber on 9/20/18.
//
#include <856_score_of_parentheses.hh>
#include <gtest/gtest.h>

TEST(ScoreOfParenthesesTest, Solution01)
{
  string S = "(()(()))";
  int expected = 6;
  Solution sol;
  EXPECT_EQ(expected, sol.scoreOfParentheses(S));

  S = "()()";
  expected = 2;
  EXPECT_EQ(expected, sol.scoreOfParentheses(S));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
