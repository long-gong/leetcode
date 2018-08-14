//
// Created by saber on 8/13/18.
//

#include "345_reverse_vowels.hh"

string ReverseVowels01::operator()(std::string s) {
  if ( s.size() <= 1 ) return s;
  size_t first = 0, last = s.size() - 1;

  while ( first < last ) {
    if ( isVowel(s.at(first)) && isVowel(s.at(last))) {
      std::swap(s[first], s[last]);
      ++ first; -- last;
    } else {
      if ( !isVowel(s.at(first)) ) ++ first;
      if ( !isVowel(s.at(last)) ) -- last;
    }
  }
  return s;
}
