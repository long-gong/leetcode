//
// Created by saber on 8/19/18.
//

#ifndef LEETCODE_153_MIN_ROTATED_SORTED_ARRAY_HH
#define LEETCODE_153_MIN_ROTATED_SORTED_ARRAY_HH
/*
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
 * 
 * (i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).
 * 
 * Find the minimum element.
 * 
 * You may assume no duplicate exists in the array.
 */
#include <leetcode.h>

class MinElementRotatedSortedBase {
 public:
  virtual int operator()(std::vector<int> &&nums) = 0;
};

class MinElementRotatedSorted01 : public MinElementRotatedSortedBase {
 public:
  int operator()(std::vector<int> &&nums) override;
};
#endif //LEETCODE_153_MIN_ROTATED_SORTED_ARRAY_HH
