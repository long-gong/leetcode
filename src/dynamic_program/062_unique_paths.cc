//
// Created by saber on 8/18/18.
//

#include "062_unique_paths.hh"
int UniquePaths01::operator()(int m, int n) {
  assert( m >= 0 && n >= 0 );
  if ( m == 0 || n == 0 ) return 0;

  std::vector<int> cnt(m, 1);

  for ( int i = 1; i < n;++ i) {
    for (int j = 0;j < m;++ j) {
        cnt[j] = (j == 0 ? 1 : (cnt[j] /* from above */ + cnt[j - 1] /* from left */));
    }
  }

  return cnt[m - 1];
}
