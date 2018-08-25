//
// Created by saber on 8/25/18.
//

#include "279_perfect_squares.hh"
int Solution::numSquares(int n) {
  int s = int(std::sqrt( n ));
  if ( s * s == n ) return 1;
  return numSquares_( n, s , 0);
}

int Solution::numSquares_(int n, int c, int k) {
  if ( n == 0 || k >= _min ) return k;
  if ( n < 4 ) return ( k + n );

  int next = std::min( int(std::sqrt(n)), c );
  int cnt;
  for ( int i = next; i > 0;-- i ) {
    cnt = numSquares_( n - i * i, i, 1 + k );
    _min = std::min(_min, cnt);
  }
  return _min;
}
