//
// Created by saber on 9/16/18.
//

#include <496_next_greater_element_I.hh>
#include <gtest/gtest.h>

TEST(NextGreaterElementTest, Solution01)
{
  std::vector<int> nums1 = {4,1,2};
  std::vector<int> nums2 = {1,3,4,2};
  std::vector<int> expected = {-1,3,-1};
  Solution sol;
  EXPECT_EQ(expected, sol.nextGreaterElement(nums1, nums2));

  nums1 = {2,4};
  nums2 = {1,2,3,4};
  expected = {3,-1};
  EXPECT_EQ(expected, sol.nextGreaterElement(nums1, nums2));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}