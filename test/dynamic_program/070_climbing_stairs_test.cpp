//
// Created by saber on 8/16/18.
//

#include <src/dynamic_program/070_climbing_stairs.hh>
#include <gtest/gtest.h>


TEST(ClimbingStairsTest, Solution01)
{
  ClimbingStairs01 cs01;
  EXPECT_EQ(2, cs01(2));

  EXPECT_EQ(3, cs01(3));
}

TEST(ClimbingStairsTest, Solution02)
{
  ClimbingStairs02 cs02;
  EXPECT_EQ(2, cs02(2));

  EXPECT_EQ(3, cs02(3));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
