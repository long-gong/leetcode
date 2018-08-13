//
// Created by gtuser on 8/12/18.
//

#ifndef LEETCODE_665_NON_DECREASING_ARRAY_HH
#define LEETCODE_665_NON_DECREASING_ARRAY_HH
/*
 * Given an array with n integers, your task is to check if it could become non-decreasing 
 * by modifying at most 1 element.
 * 
 * We define an array is non-decreasing if array[i] <= array[i + 1] holds for every 
 * i (1 <= i < n). 
 */

#include "leetcode.h"

class NonDecreasingArrayBase {
 public:
  virtual bool operator()(std::vector<int>&& nums) = 0;
};


class NonDecreasingArray01 : public NonDecreasingArrayBase {
 public:
  bool operator()(std::vector<int> &&nums) override;
};
#endif //LEETCODE_665_NON_DECREASING_ARRAY_HH
