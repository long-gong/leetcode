//
// Created by saber on 8/18/18.
//

#include "303_range_sum_query.hh"
RangeSumQuery01::RangeSumQuery01(std::vector<int> &&nums) : RangeSumQueryBase(std::move(nums)){
  _prefix_sum.resize(_nums.size(), 0);
  std::partial_sum(_nums.begin(), _nums.end(), _prefix_sum.begin());
}
int RangeSumQuery01::operator()(int i, int j) {
  assert( i >= 0 && i < _nums.size() );
  assert( j >= 0 && j < _nums.size() );
  
  return (_prefix_sum[j] - (i == 0 ? 0 : _prefix_sum[i - 1]));
}
