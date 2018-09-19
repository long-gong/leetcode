//
// Created by saber on 9/17/18.
//

#include "503_next_greater_element_II.hh"
vector<int> Solution::nextGreaterElements(vector<int> &nums) {
  if ( nums.empty() ) return {};
  if ( nums.size() == 1 ) return {-1};

  std::vector<int> res(nums.size(), -1);
  std::vector<int> next(nums.size(), -1);
  std::stack<size_t> s;
  s.push(0);

  for ( size_t i = 1;i < nums.size();++ i ) {
    auto p = s.top();
    while (  nums[i] > nums[p] ) {
      s.pop();
      res[p] = nums[i];
      next[p] = i;
      if ( !s.empty() ) p = s.top();
      else break;
    }
    s.push(i);
  }

  while ( s.size() > 1 ) {
    auto p = s.top();
    size_t j = 0;
    while ( j != -1 && nums[p] >= nums[j] ) {
      j = next[j];
    }
    if ( j == -1 ) break;
    res[p] = nums[j];
    next[p] = j;
    s.pop();
  }

  return res;
}
