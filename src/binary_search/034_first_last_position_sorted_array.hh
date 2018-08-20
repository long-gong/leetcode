//
// Created by saber on 8/19/18.
//

#ifndef LEETCODE_034_FIRST_LAST_POSITION_SORTED_ARRAY_HH
#define LEETCODE_034_FIRST_LAST_POSITION_SORTED_ARRAY_HH
/*
 * Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
 * 
 * Your algorithm's runtime complexity must be in the order of O(log n).
 * 
 * If the target is not found in the array, return [-1, -1].
 */
#include <leetcode.h>
class FirstLastPositionSortedBase {
 public:
  virtual std::vector<int> operator()(std::vector<int> &&nums, int target) = 0;
};

class FirstLastPositionSorted01 : public FirstLastPositionSortedBase {
 public:
  vector<int> operator()(std::vector<int> &&nums, int target) override;
};
#endif //LEETCODE_034_FIRST_LAST_POSITION_SORTED_ARRAY_HH
