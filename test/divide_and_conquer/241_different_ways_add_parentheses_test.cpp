//
// Created by saber on 8/20/18.
//

#include <src/divide_and_conquer/241_different_ways_add_parentheses.hh>
#include <gtest/gtest.h>

TEST(DifferentWaysAddingParenthesesTest, Solution01)
{
  DifferentWaysAddingParentheses01 dwap01;
  auto res = dwap01("2-1-1");
  std::sort(res.begin(), res.end());
  EXPECT_EQ(std::vector<int>({0,2}), res);

  auto res2 = dwap01("2*3-4*5");
  std::sort(res2.begin(), res2.end());
  EXPECT_EQ(std::vector<int>({-34, -14, -10, -10, 10}), res2);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}