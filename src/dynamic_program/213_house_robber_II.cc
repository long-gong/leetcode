//
// Created by saber on 8/17/18.
//

#include "213_house_robber_II.hh"
int HouseRobberII01::operator()(std::vector<int> &&nums) {
  if ( nums.size() <= 1 ) return ( nums.empty() ? 0 : nums.front() );
  int f1 = nums[0], f2 = std::max(nums[0], nums[1]), tmp;

  bool f1include1st = true, f2include1st = (f2 == nums[0] && f2 != nums[1]), tmpinclude;
  for ( size_t k = 2;k < nums.size() - 1;++ k ) {
    tmp = std::max(f2, f1 + nums[k]);
    tmpinclude = f2include1st;
    f2include1st = (tmp == f2 ? f2include1st : f1include1st);
    f1 = f2;
    f1include1st = tmpinclude;
    f2 = tmp;
  }
  int res = ( f1include1st ) ? std::max(f1, f2) : std::max(f1 + nums.back(), f2);

  if ( f1include1st ) {
    f1 = 0;
    f2 = nums[1];
    for ( size_t k = 2;k < nums.size();++ k ) {
      tmp = std::max(f2, f1 + nums[k]);
      f1 = f2;
      f2 = tmp;
    }

    res = std::max(res, f2);
  }

  return res;

}
