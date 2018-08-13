//
// Created by gtuser on 8/12/18.
//

#include "665_non_decreasing_array.hh"
bool NonDecreasingArray01::operator()(std::vector<int> &&nums) {
  if ( nums.size() <= 1 ) return true;

  int cnt = 0;
  for (size_t i = 0;i < nums.size() - 1;++ i){
    if ( nums[i] > nums[i + 1] ) {
      ++ cnt;
      if ( cnt > 1 ) return false;
      if ( i >= 1 ) {//// modify whom
        nums[i + 1] =  (nums[i - 1] > nums[i + 1]?nums[i]:nums[i+1]);
      }
    }
  }

  return true;
}
