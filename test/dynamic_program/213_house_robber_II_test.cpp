//
// Created by saber on 8/17/18.
//
#include <src/dynamic_program/213_house_robber_II.hh>
#include <gtest/gtest.h>


TEST(HouseRobberIITest, Solution01)
{
  HouseRobberII01 hr01;
  EXPECT_EQ(3, hr01({2,3,2}));

  EXPECT_EQ(4, hr01({1,2,3,1}));

  EXPECT_EQ(3, hr01({2,1,1,2}));

  EXPECT_EQ(41, hr01({1,1,3,6,7,10,7,1,8,5,9,1,4,4,3}));

  EXPECT_EQ(10, hr01({2,2,4,3,2,5}));
}

int main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
