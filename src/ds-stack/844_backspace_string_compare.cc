//
// Created by saber on 9/22/18.
//

#include "844_backspace_string_compare.hh"
bool Solution::backspaceCompare(string S, string T) {
  stack<char> s;
  stack<char> t;
  for ( char ch : S ) {
    if ( ch == '#' ) { if ( !s.empty() ) s.pop();}
    else s.push(ch);
  }
  for ( char ch : T ) {
    if ( ch == '#' ) { if ( !t.empty() ) t.pop(); }
    else t.push(ch);
  }

  while ( !s.empty() && !t.empty() ) {
    if ( s.top() != t.top() ) return false;
    s.pop();
    t.pop();
  }

  return ( s.empty() && t.empty() );
}
