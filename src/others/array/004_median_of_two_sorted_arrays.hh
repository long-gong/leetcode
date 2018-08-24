//
// Created by saber on 8/23/18.
//

#ifndef LEETCODE_004_MEDIAN_OF_TWO_SORTED_ARRAYS_HH
#define LEETCODE_004_MEDIAN_OF_TWO_SORTED_ARRAYS_HH
/*
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.
 * 
 * Find the median of the two sorted arrays. The overall run time complexity should 
 * be O(log (m+n)).
 * 
 * You may assume nums1 and nums2 cannot be both empty.
 */
#include <leetcode.h>

class Solution {
 public:
  using CIT = std::vector<int>::const_iterator;
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
  int kthElement(CIT f1, CIT l1, CIT f2, CIT l2, int k);
};
#endif //LEETCODE_004_MEDIAN_OF_TWO_SORTED_ARRAYS_HH
