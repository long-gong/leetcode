//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_303_RANGE_SUM_QUERY_HH
#define LEETCODE_303_RANGE_SUM_QUERY_HH
/*
 * Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.
 */
#include <leetcode.h> 
class RangeSumQueryBase {
 protected:
  std::vector<int> _nums;
 public:
  explicit RangeSumQueryBase(std::vector<int>&& nums) : _nums(std::move(nums)){}
  virtual int operator()(int i, int j) = 0;
}; 

class RangeSumQuery01 : public RangeSumQueryBase {
 protected:
  std::vector<int> _prefix_sum;
 public:
  explicit RangeSumQuery01(std::vector<int> &&nums);
  int operator()(int i, int j) override;
};
#endif //LEETCODE_303_RANGE_SUM_QUERY_HH
