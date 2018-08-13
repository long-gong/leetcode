//
// Created by gtuser on 8/12/18.
//

#include "392_is_subsequence.hh"

bool IsSubsequence01::operator()(std::string t, std::string s) {
  if ( t.empty() ) return true;
  if ( s.size() < t.size() ) return false;
  
  size_t i = 0, j = 0;
  for (;j < s.size() && i < t.size();++ j) {
    if ( s.at(j) == t.at(i) ) {
      ++ i;
    }
  }
  
  return (i == t.size());
}
