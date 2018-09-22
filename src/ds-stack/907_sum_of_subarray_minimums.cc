//
// Created by saber on 9/20/18.
//

#include "907_sum_of_subarray_minimums.hh"
int Solution::sumSubarrayMinsBase(vector<int> &A) {
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
int Solution::sumSubarrayMins(vector<int> &A) {
  const int M = int(1e9) + 7;
  int res = 0;
  std::vector<int> next(A.size(), A.size());
  std::vector<int> counts(A.size(), 0);
  std::stack<int> s;
  s.push(0);
  for ( int k = 1;k < A.size();++ k ) {
    while ( !s.empty() && A[s.top()] > A[k] ) {
      next[s.top()] = k;
      s.pop();
    }
    s.push(k);
  }

  for ( int k = 0;k < A.size(); ++ k ) {
    auto kk = k;
    do {
      counts[kk] += ( next[kk] - kk );
      kk = next[kk];
    } while ( kk < A.size() );
  }

  for ( int k = 0;k < A.size();++ k ) {
    res = (( ((long long)counts[k]) * A[k]  + res) % M );
  }

  return res;
}
