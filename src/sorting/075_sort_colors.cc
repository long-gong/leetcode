//
// Created by saber on 8/15/18.
//

#include "075_sort_colors.hh"
void SortColors01::operator()(std::vector<int> &nums) {
  if ( nums.size() <= 1 ) return;

  size_t i = 0;

  for ( int c = 0; c < 2;++ c)
  {
    for ( size_t j = 0;j < nums.size();++ j ) {
      if ( nums[j] == c ) {
        std::swap(nums[i ++], nums[j]);
      }
    }
  }
}


void SortColors02::operator()(std::vector<int> &nums) {
  if ( nums.size() <= 1 ) return;

  int i = 0, j = nums.size() - 1, n = nums.size();

  while ( i < n && nums[i] == 0 ) ++ i;
  while ( j >= 0 && nums[j] == 2 ) -- j;

  for ( int k = i;k <= j ;++ k ) {
    switch ( nums[k] ) {
      case 0:
        swap( nums[k], nums[i ++] );
        while ( i < n && nums[i] == 0 ) ++ i;
        k = std::max(k, i - 1);
        break;
      case 1:
        break;
      case 2:
        swap(nums[k], nums[j--]);
        while ( j >= 0 && nums[j] == 2 ) -- j;
        if ( nums[k] == 0 ) {
          swap(nums[k], nums[i ++]);
          while (i < n && nums[i] == 0) ++ i;
          k = std::max(k, i - 1);
        }
        break;
      default:
        std::cerr << "Unknown color : " << nums[k] << std::endl;
    }
  }
}
