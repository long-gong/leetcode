//
// Created by saber on 8/15/18.
//

#include "451_sort_characters_by_frequency.hh"
string SortByFrequency01::operator()(std::string s) {
  if ( s.size() <= 2 ) return s;
  int freq[256];
  unsigned chars[256];
  unsigned i = 0;
  for ( auto& f: freq ) {
    f = 0;
    chars[i] = i;
    ++ i;
  }
  for ( const char ch : s ) ++ freq[ch];

//  std::sort( s.begin(), s.end(), [&](const char a, const char b){
//    return (freq[a] > freq[b] || ( freq[a] == freq[b] && a < b) );
//  });

  std::sort( chars, chars + 256, [&](const unsigned a, const unsigned b){
    return (freq[a] > freq[b]);
  });

  size_t j = 0;
  for ( const unsigned ch : chars ) {
    if ( freq[ch] == 0 ) break;
    while ( freq[ch] > 0 ) {
      s[j] = char(ch);
      -- freq[ch];
      ++ j;
    }
  }
  return s;
}
