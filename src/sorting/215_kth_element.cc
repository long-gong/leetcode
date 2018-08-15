//
// Created by saber on 8/15/18.
//

#include "215_kth_element.hh"
int KthElement01::operator()(std::vector<int> &&nums, int k) {
  assert ( k >= 1 && k <= nums.size() );
  if ( k == 1 ) return *std::max_element(nums.begin(), nums.end());
  if ( k == nums.size() ) return *std::min_element(nums.begin(), nums.end());

  return rand_select(nums.begin(), nums.end(), k);
}
