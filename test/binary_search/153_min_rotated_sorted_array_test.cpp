//
// Created by saber on 8/19/18.
//
#include <src/binary_search/153_min_rotated_sorted_array.hh>
#include <gtest/gtest.h>

TEST(MinElementRotatedSortedTest, Solution01)
{
  MinElementRotatedSorted01 mers01;
  EXPECT_EQ(1, mers01({3,4,5,1,2}));
  EXPECT_EQ(0, mers01({4,5,6,7,0,1,2}));
  EXPECT_EQ(1, mers01({2,3,4,5,6,7,1}));
  EXPECT_EQ(2, mers01({9,2,3,4,5,6,7}));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
