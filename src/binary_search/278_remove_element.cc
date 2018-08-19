//
// Created by saber on 8/18/18.
//

#include "278_remove_element.hh"
int RemoveElement01::operator()(std::vector<int> &&nums, int val) {
  int n = static_cast<int>(nums.size());
  int f = 0, l = n - 1;
  while ( l >= 0 && nums[l] == val ) { --l; -- n; }
  
  if ( l < 0 ) return n;
  while ( f <= l ) {
    if ( nums[f] == val ) {
      std::swap(nums[f], nums[l]);
      ++ f; 
      while ( f <= l && nums[l] == val ) { --l; --n; }
    } else {
      ++ f;
    }
  }
  
  return n;
}
