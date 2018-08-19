//
// Created by saber on 8/18/18.
//

#include "069_sqrt.hh"

int Sqrt01::operator()(int x) {
  assert( x >= 0 );
  if ( x <= 1 ) return x;

  int l = 1, u = x - 1;
  int m;
  long long m_sq;///

  while ( l <= u ) {
    m = l + (u - l) / 2;
    m_sq = (long long) m * m;
    if ( m_sq == x ) return m;
    else if ( m_sq > x ) u = m - 1;
    else l = m + 1;
  }

  return ( m_sq > x ? ( m - 1 ) : m );
}
