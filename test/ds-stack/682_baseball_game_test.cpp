//
// Created by saber on 9/19/18.
//

#include <682_baseball_game.hh>
#include <gtest/gtest.h>


TEST(BaseballGameTest, Solution01)
{
  std::vector<string> ops = {
      "5","2","C","D","+"
  };
  int expected = 30;
  Solution sol;
  EXPECT_EQ(expected, sol.calPoints(ops));


  ops = {
      "5","-2","4","C","D","9","+","+"
  };
  expected = 27;
  EXPECT_EQ(expected, sol.calPoints(ops));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}