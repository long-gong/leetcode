//
// Created by saber on 8/18/18.
//

#include "744_smallest_greater_letter.hh"
char SmallestGreaterLetter01::operator()(std::vector<char> &&letters, char target) {
  int n = letters.size();

  int l = 0, u = n - 1;
  int m;

  while ( l <= u ) {
    m = l + ( u - l ) / 2;
    if ( letters[m] == target ) {
      while ( m < n && letters[m] == target ) ++ m;
      return letters[( m % n )];
    } else if ( letters[m] > target ) u = m - 1;
    else l = m + 1;
  }
  while ( m < n && letters[m] < target ) ++ m;
  return letters[m % n];
}
