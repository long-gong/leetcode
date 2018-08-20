//
// Created by saber on 8/18/18.
//
#include <src/dynamic_program/303_range_sum_query.hh>
#include <gtest/gtest.h>

TEST(RangeSumQueryTest, Solution01){
  RangeSumQuery01 rsq01({-2, 0, 3, -5, 2, -1});
  EXPECT_EQ(1, rsq01(0,2));
  EXPECT_EQ(-1,rsq01(2, 5));
  EXPECT_EQ(-3, rsq01(0, 5));
}

int 
main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
