//
// Created by saber on 9/23/18.
//

#include "338_counting_bits.hh"
vector<int> Solution::countBits(int num) {
  if ( num == 0 ) return {0};
  if ( num == 1 ) return {0,1};
  vector<int> res(num + 1,0);
  res[1] = 1;
  int cur = 2, n = 2;
  while ( cur <= num ) {
    for ( int i = 0;i < n && cur + i <= num;++ i ) {
      res[cur + i] = (res[i] + 1);
    }
    cur += n;
    n *= 2;
  }

  return res;
}
