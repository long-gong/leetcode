//
// Created by saber on 8/25/18.
//

#include "264_ugly_number_II.hh"
int Solution::nthUglyNumber(int n) {
  if ( n == 1 ) return 1;
  std::vector<int> uglys(1,1);
  int i2 = 0, i3 = 0, i5 = 0;
  int n2 = 2, n3 = 3, n5 = 5;
  int ugly = 1;
  while ( uglys.size() < n ) {
    // std::cout << ugly << " ";

    ugly = std::min(n2, std::min(n3, n5));
    uglys.push_back(ugly);
    if ( n2 == ugly ) {
      ++ i2;
      n2 = uglys[i2] * 2;
    }
    if ( n3 == ugly ) {
      ++ i3;
      n3 = uglys[i3] * 3;
    }
    if ( n5 == ugly ) {
      ++ i5;
      n5 = uglys[i5] * 5;
    }
  }
  // std::cout << ugly << std::endl;
  return ugly;
}
