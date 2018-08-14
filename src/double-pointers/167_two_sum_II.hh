//
// Created by saber on 8/13/18.
//

#ifndef LEETCODE_167_TWO_SUM_II_HH
#define LEETCODE_167_TWO_SUM_II_HH
/*
 * Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.
 * 
 * Note:
 * 
 *     Your returned answers (both index1 and index2) are not zero-based.
 *     You may assume that each input would have exactly one solution and you may not use the same element twice.
 * 
 */
#include "leetcode.h"

class TwoSumIIBase {
 public:
  virtual std::vector<int> operator()(std::vector<int>&& numbers, int target) = 0;
};


class TwoSumII01 : public TwoSumIIBase {
 public:
  vector<int> operator()(std::vector<int> &&numbers, int target) override;
};
#endif //LEETCODE_167_TWO_SUM_II_HH
