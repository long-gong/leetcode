//
// Created by saber on 8/13/18.
//

#include <src/double-pointers/088_merge_sorted_array.hh>
#include <gtest/gtest.h>


TEST(MergeSortedArrayTest, Solution01)
{
  MergeSortedArray01 msa01;
  std::vector<int> nums1({1,2,3,0,0,0});
  msa01(nums1, 3, std::vector<int>({2, 5, 6}), 3);
  EXPECT_EQ(std::vector<int>({1,2,2,3,5,6}), nums1);

  std::vector<int> nums02({4,5,6,0,0,0});
  msa01(nums02, 3, std::vector<int>({1, 2, 3}), 3);
  EXPECT_EQ(std::vector<int>({1,2,3,4,5,6}), nums02);
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}