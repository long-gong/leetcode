//
// Created by saber on 8/13/18.
//

#ifndef LEETCODE_088_MERGE_SORTED_ARRAY_HH
#define LEETCODE_088_MERGE_SORTED_ARRAY_HH
/*
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 */
#include <leetcode.h>

class MergeSortedArrayBase {
 public:
  virtual void operator()(std::vector<int>& nums1, int m, std::vector<int>&& nums2, int n) = 0;
};


class MergeSortedArray01 : public MergeSortedArrayBase {
 public:
  void operator()(std::vector<int> &nums1, int m, std::vector<int> &&nums2, int n) override;
};
#endif //LEETCODE_088_MERGE_SORTED_ARRAY_HH
