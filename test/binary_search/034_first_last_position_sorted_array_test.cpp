//
// Created by saber on 8/19/18.
//
#include <src/binary_search/034_first_last_position_sorted_array.hh>
#include <gtest/gtest.h>


TEST(FirstLastPositionSortedTest, Solution01)
{
  FirstLastPositionSorted01 flps01;
  EXPECT_EQ(std::vector<int>({3,4}), flps01({5,7,7,8,8,10}, 8));
  EXPECT_EQ(std::vector<int>({-1,-1}), flps01({5,7,7,8,8,10}, 9));
  EXPECT_EQ(std::vector<int>({0,0}), flps01({5,7,7,8,8,10}, 5));
  EXPECT_EQ(std::vector<int>({-1,-1}), flps01({5,7,7,8,8,10}, 6));
  EXPECT_EQ(std::vector<int>({0,5}), flps01({5,5,5,5,5,5}, 5));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
