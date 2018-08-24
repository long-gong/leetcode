//
// Created by saber on 8/23/18.
//

#include <004_median_of_two_sorted_arrays.hh>
#include <gtest/gtest.h>

TEST(MedianOfSortedArraysTest, Solution01)
{
  Solution sol;
  std::vector<int> nums1({1,3});
  std::vector<int> nums2({2});
//  EXPECT_EQ(2.0, sol.findMedianSortedArrays(nums1, nums2));
//
//  nums1 = {1,2};
//  nums2 = {3,4};
//  EXPECT_EQ(2.5, sol.findMedianSortedArrays(nums1, nums2));

  nums1 = {1,2};
  nums2 = {1,2};
  EXPECT_EQ(1.5, sol.findMedianSortedArrays(nums1, nums2));
}




int
main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}