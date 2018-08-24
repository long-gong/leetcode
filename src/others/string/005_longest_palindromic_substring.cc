//
// Created by saber on 8/23/18.
//

#include "005_longest_palindromic_substring.hh"

string Solution::longestPalindrome(string s) {
  if ( s.empty() || s.size() == 1 ) return s;
  std::vector<std::vector<bool> > T(s.size(), std::vector<bool>(s.size(), false));

  ////// T[i][i] = true;
  std::pair<size_t, size_t> max_se({0,1});
  size_t l;
  size_t i;
  for ( i = 0;i < s.size();++ i) T[i][i] = true;
  //std::cout << "Hello:\n";
  for ( l = 2; l <= s.size();++ l ) {
    for ( i = 0;i + l - 1 < s.size(); ++ i ) {
      T[i][i + l - 1] = (( l == 2 ? true : T[i+1][i + l - 2]) && ( s[i] == s[i + l - 1] ));
      if ( T[i][i + l - 1] ) {
        std::cout << "sub : " << s.substr(i, l) << std::endl;
        max_se = {i, l};
      }
    }
  }

  return s.substr(max_se.first, max_se.second);
}
