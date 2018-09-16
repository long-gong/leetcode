//
// Created by saber on 9/16/18.
//

#include "496_next_greater_element_I.hh"
vector<int> Solution::nextGreaterElement(vector<int> &findNums, vector<int> &nums) {
  if ( findNums.empty() ) return {};
  vector<int> res(findNums.size(), -1);
  vector<int> next(nums.size(), -1);

  for ( int i = 0;i < nums.size() - 1;++ i ) {
    for ( int j = i + 1; j < nums.size(); ++ j ) {
      if ( nums[j] > nums[i] ) { next[i] = nums[j]; break; }
    }
  }

  int k = 0;
  for ( auto& x : findNums ) {
    for ( int i = 0;i < nums.size();++ i ) {
      if ( nums[i] == x ) res[k] = next[i];
    }
    ++ k;
  }

  return res;

}
