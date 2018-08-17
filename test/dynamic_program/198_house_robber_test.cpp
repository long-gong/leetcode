//
// Created by saber on 8/16/18.
//

#include <src/dynamic_program/198_house_robber.hh>
#include <gtest/gtest.h>

TEST(HouseRobberTest, Solution01)
{
  HouseRobber01 hr01;
  EXPECT_EQ(4, hr01(std::vector<int>({1,2,3,1})));

  EXPECT_EQ(12, hr01(std::vector<int>({2,7,9,3,1})));
}

TEST(HouseRobberTest, Solution02)
{
  HouseRobber02 hr02;
  EXPECT_EQ(4, hr02(std::vector<int>({1,2,3,1})));

  EXPECT_EQ(12, hr02(std::vector<int>({2,7,9,3,1})));
}


int main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}