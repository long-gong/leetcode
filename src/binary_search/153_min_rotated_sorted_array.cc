//
// Created by saber on 8/19/18.
//

#include "153_min_rotated_sorted_array.hh"
int MinElementRotatedSorted01::operator()(std::vector<int> &&nums) {
  if ( nums.size() == 1 ) return nums.front();

  int l = 0, u = static_cast<int>(nums.size() - 1), m;
  if ( nums[l] < nums[u] ) return nums[l];

  while ( l < u ) {
    m = l + ( u - l ) / 2;
    if ( nums[m] >= nums[l] ) {//// located in later interval
      if ( m < u && nums[m] > nums[m + 1] ) return nums[m + 1];
      l = m + 1;
    } else {//// located in former interval
      if ( m > 0 && nums[m - 1] > nums[m] ) return nums[m];
      u = m - 1;
    }
  }

  assert( m >= 0 && m < nums.size() );
  return nums[m];
}
