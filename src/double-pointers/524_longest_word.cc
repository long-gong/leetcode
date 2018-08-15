//
// Created by saber on 8/14/18.
//

#include "524_longest_word.hh"
string LongestWord01::operator()(std::string s, std::vector<std::string> &&d) {
  if ( d.empty() ) return std::string();
  std::sort(d.begin(), d.end(), [](const std::string &s1, const std::string &s2){
    return ( s1.size() == s2.size() ? (s1 < s2) : (s1.size() > s2.size()) );
  });
  
  size_t i, j;
  for ( const auto& ds : d ) {
    if ( ds.size() > s.size() ) continue;
    
    i = 0; j = 0;
    while ( i < s.size() && j < ds.size() ) {
      s[i] == ds[j] ? ( ++ i, ++ j ) : (++ i);
    }
    if ( j == ds.size() ) return ds;
  }
  return std::string();
}
