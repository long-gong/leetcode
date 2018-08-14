//
// Created by saber on 8/13/18.
//

#include "680_valid_palindrome_II.hh"
bool ValidPalindromeII01::operator()(std::string s) {
  if ( s.size() <= 2 ) return true;
  size_t first = 0, last = s.size() - 1;

  while ( first < last && ( (s.at(first) == s.at(last) ? (++ first, -- last ) : -1) != -1 ) );
  if ( first >= last ) return true;

  //// pay special attention, both of the following two possibilities MUST be checked
  size_t first_bk = first, last_bk = last;
  if ( s.at(first + 1) == s.at(last) ) {
    first_bk += 2; -- last_bk;
    while ( first_bk < last_bk && ( (s.at(first_bk) == s.at(last_bk) ? (++ first_bk, -- last_bk) : -1) != -1 ) );
    if ( first_bk >= last_bk ) return true;
  }
  if ( s.at(first) == s.at(last - 1) ) {
    ++ first; last -= 2;
    while ( first < last && ( (s.at(first) == s.at(last) ? (++ first, -- last ) : -1) != -1 ) );
    if ( first >= last ) return true;
  }
  return false;
}
