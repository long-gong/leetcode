//
// Created by saber on 9/16/18.
//

#include "456_132_pattern.hh"
bool Solution::find132pattern(vector<int> &nums) {
  if ( nums.size() < 3 ) return false;

  int i, j ,k;
  auto m = nums.front();
  auto M = nums.front();

  for ( i = 1;i < nums.size();++ i ) {
    if ( nums[i] > m && nums[i] < M ) {
      for ( j = i - 1;j >= 0; -- j ) {
        if ( nums[j] > nums[i] ) break;
      }
      for ( k = j - 1;k >= 0; -- k ) {
        if ( nums[k] < nums[i] ) return true;
      }
    }
    m = std::min(m, nums[i]);
    M = std::max(M, nums[i]);
  }
  return false;
}
