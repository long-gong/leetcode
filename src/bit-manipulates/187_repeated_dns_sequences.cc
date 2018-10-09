//
// Created by saber on 9/23/18.
//

#include "187_repeated_dns_sequences.hh"
vector<string> Solution::findRepeatedDnaSequences(string s) {
  std::vector<std::string> res;
  if ( s.size() <= 10 ) return res;
  std::unordered_map<unsigned, bool> ht;
  int table[26];
  table[0] = 0;
  table['C' - 'A'] = 1;
  table['G' - 'A'] = 2;
  table['T' - 'A'] = 3;
  unsigned encode_val = 0;
  unsigned i = 0;
  for (;i < 10;++ i) {
    encode_val = (encode_val << 2) + table[s[i] - 'A'];
  }
  ht.insert({encode_val, false});
  for ( ;i < s.size();++ i) {
    encode_val = ((encode_val & 0x3ffff) << 2) + table[s[i] - 'A'];
    if ( ht.count(encode_val) > 0 ) {
      if ( !ht[encode_val] ) {
        res.emplace_back(s.substr(i - 9, 10));
        ht[encode_val] = true;
      }
    } else {
      ht[encode_val] = false;
    }
  }

  return res;
}
