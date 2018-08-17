//
// Created by saber on 8/16/18.
//

#include "070_climbing_stairs.hh"
int ClimbingStairs01::operator()(int n) {
  // f(n) = f(n - 1) + f(n - 2)
  // f(1) = 1, f(2) = 2
  if ( n <= 2 ) return n;
  std::vector<int> cnt(n, 0);
  cnt[1] = 1;
  cnt[2] = 2;
  for ( size_t t = 3; t < n; ++ t) {
    cnt[t] = cnt[t - 1] + cnt[t - 2];
  }
  return cnt[n - 2] + cnt[n - 1];
}


int ClimbingStairs02::operator()(int n) {
  if ( n <= 2 ) return n;
  int f1 = 1, f2 = 2, tmp;
  for ( int i = 3;i < n; ++ i ) {
    tmp = f1 + f2;
    f1 = f2;
    f2 = tmp;
  }
  return f1 + f2;
}
