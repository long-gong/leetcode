//
// Created by saber on 8/19/18.
//

#include "034_first_last_position_sorted_array.hh"
vector<int> FirstLastPositionSorted01::operator()(std::vector<int> &&nums, int target) {

  int n = static_cast<int>(nums.size());
  int f = - 1, l = -1;
  if ( nums.empty() ||
      ( nums.size() == 1 && nums.front() != target ) ||
      nums.front() > target || nums.back() < target ) return {f, l};
  if ( nums.front() == target && nums.back() == target ) return {0, n - 1};
  int lower = 0, upper = n - 1, middle;

  while ( lower <= upper ) {
    middle = lower + ( upper - lower ) / 2;
    if ( target == nums[middle] ) {
      l = middle;
      //// find first
      if ( middle == 0 || nums[middle -1] != target ) f = middle;
      else {
        -- middle;
        while ( lower < middle ) {
          f = middle - ( middle - lower ) / 2;
          if ( nums[f] == target ) {
            if ( f == 0 ) { middle = 0; break; }
            if (nums[f - 1] == target ) middle = f - 1;
            else { middle = f; break;}
          }
          else lower = f + 1;
        }
        f = middle;
      }
      //// find last
      middle = l;
      if ( middle == n - 1 || nums[middle + 1] != target ) l = middle;
      else {
        ++ middle;
        while ( middle < upper ) {
          l = middle + ( upper - middle ) / 2;
          if ( nums[l] == target ) {
            if ( l == n - 1) { middle = l; break; }
            if ( nums[l + 1] == target ) middle = l + 1;
            else { middle = l; break;}
          } else upper = l - 1;
        }
        l = middle;
      }
      return {f, l};
    } else if ( target > nums[middle] ) lower = middle + 1;
    else upper = middle - 1;
  }
  return {f, l};
}
