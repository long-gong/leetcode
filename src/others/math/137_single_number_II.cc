//
// Created by saber on 8/22/18.
//

#include "137_single_number_II.hh"
int Solution::singleNumber(vector<int> &&nums) {
  int b ;
  size_t s = sizeof(nums.front()) * 8;
  int *val = new int[s];
  std::fill(val, val + s, 0);
  for (const auto &n : nums) {
    b = 0x1;
    for ( size_t i = 0;i < s;++ i ) {
      val[i] = (val[i] + ((n&b) == 0? 0:1) ) % 3;
      b = b << 1;
    }
  }
  int res = 0;
  for ( size_t i = 0;i < s;++ i) {
    res += (val[i] << i);
  }

  delete [] val;
  return res;
}
