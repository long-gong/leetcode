//
// Created by saber on 8/23/18.
//

#include "006_zigzag_conversion.hh"
string Solution::convert(string s, int numRows) {
  if ( numRows == 1 ) return s;
  std::string res(s.size(), ' ');
  size_t i = 0;
  if ( numRows == 2 ) {

    for (int j = 0;j < s.size(); j+=2) {
      res[i++] = s[j];
    }
    for (int j = 1;j < s.size(); j+=2) {
      res[i++] = s[j];
    }

    return res;
  }




  size_t k = 0, offset = 0, tmp = 2 * numRows - 2;

  while ( tmp * k < s.size() ) {
    res[i ++] = s[ tmp * k ];
    ++ k;
  }

  for ( size_t r = 1;r < numRows - 1 && r < s.size();++ r ) {
      res[i ++] = s[r];
      k = 1;
      while ( true ) {
        auto t1 = tmp * k - r;
        if ( t1 >= s.size() ) break;
        else {
          res[i ++] = s[t1];
          auto t2 = tmp * k + r;
          if ( t2 >= s.size() ) break;
          else res[i ++] = s[t2];
        }
        ++ k;
      }
  }
  k = 0;
  while ( tmp * k + numRows - 1 < s.size() ) {
    res[i ++] = s[ tmp * k + numRows - 1 ];
    ++ k;
  }
  return res;
}
