//
// Created by saber on 8/16/18.
//

#include "198_house_robber.hh"
int HouseRobber01::operator()(std::vector<int> &&nums) {
  if ( nums.empty() ) return 0;
  //// f(n): max up to nums[n]
  //// f(n) = max{f(n-1), f(n-2) + nums[n]}
  //// f(0) = nums[0]
  std::vector<int> obtain(nums.size() + 1, 0);
  obtain[1] = nums[0];

  for ( size_t k = 1;k < obtain.size(); ++ k ) {
    obtain[k + 1] = std::max(obtain[k], obtain[k - 1] + nums[k]);
  }

  return obtain.back();
}
int HouseRobber02::operator()(std::vector<int> &&nums) {
  if ( nums.empty() ) return 0;
  if ( nums.size() == 1 ) return nums.front();

  int f1 = nums[0], f2 = std::max(nums[0], nums[1]);
  int tmp;
  for ( size_t k = 2;k < nums.size(); ++ k)
  {
    tmp = std::max(f2, f1 + nums[k]);
    f1 = f2;
    f2 = tmp;
  }

  return f2;
}
