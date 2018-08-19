//
// Created by saber on 8/18/18.
//

#include "540_single_element.hh"
int SingleElement01::operator()(std::vector<int> &&nums) {
  if ( nums.size() == 1 ) return nums.front();
  
  int l = 0, u = nums.size() - 1;
  
  if ( nums[l] != nums[l + 1] ) return nums[l];
  if ( nums[u] != nums[u - 1] ) return nums[u];
  
  l = 2, u = u - 2;
  int m;
  while ( l <= u )
  {
    m = l + ( u - l ) / 2;
    if ( nums[m] != nums[m - 1] && nums[m] != nums[m + 1]) return nums[m];
    if ( m % 2 == 0 ) {
      if ( nums[m] == nums[m - 1] ) u = m - 1; //// before me
      else l = m + 1;
    } else {
      if ( nums[m] == nums[m - 1] ) l = m + 1; 
      else u = m - 1;      
    }
  }
  //// should not reach
  assert(true && "This line should not be reached");
  return 0;
}
