//
// Created by saber on 9/20/18.
//

#include "907_sum_of_subarray_minimums.hh"
int Solution::sumSubarrayMins(vector<int> &A) {
  const int M = int(1e9) + 7;
  int res = 0;
  for ( size_t i = 0;i < A.size();++ i ) {
    int m  = A[i];
    res += m;
    for ( size_t j = i + 1;j < A.size();++ j ) {
      m = std::min(m, A[j]);
      res += m;
    }
    res %= M;
  }

  return res;
}
