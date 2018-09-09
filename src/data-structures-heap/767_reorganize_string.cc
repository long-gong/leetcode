//
// Created by saber on 9/9/18.
//

#include "767_reorganize_string.hh"
string Solution::reorganizeString(string S) {

  int counter[26];

  std::fill(counter, counter + 26, 0);

  int i;
  std::vector<char> us;
  for ( const char ch : S ) {
    i = ch - 'a';
    assert( i >= 0 && i < 27 );
    if ( counter[i] == 0 ) us.push_back( ch );
    ++ counter[i];
  }

  std::make_heap(us.begin(), us.end(), [&](const char a, const char b){
    return counter[a - 'a'] < counter[b - 'a'];
  });

  size_t re = S.size();
  std::string res(re, ' ');
  auto real_us_size = us.size();

  int j = 0;
  while ( re > 0 ) {
    std::pop_heap( us.begin(), us.begin() + real_us_size, [&](const char a, const char b){
      return counter[a - 'a'] < counter[b - 'a'];
    });
    auto largest = us[real_us_size - 1];
    auto how_many = counter[largest - 'a'];

    bool retry = false;
    for ( i = 0;i < how_many; ) {
      while ( j < S.size() && res[j] != ' ' ) ++ j;
      if ( j >= S.size() ) {
        if ( retry ) return "";
        else {
          j = 0;
          retry = true;
          continue;
        }
      }

      if ( j == 0 || (j == S.size() - 1 && res[j - 1] != largest) || (j < S.size() - 1 && res[j - 1] != largest && res[j + 1] != largest)) {
        res[j ++] = largest;
        ++ i;
      }
      ++ j;
    }
    re -= how_many;
    -- real_us_size;
  }
  return res;
}
