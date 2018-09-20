//
// Created by saber on 9/19/18.
//

#include "682_baseball_game.hh"
int Solution::calPoints(vector<string> &ops) {
  int res = 0;
  if ( ops.empty() ) return res;
  std::stack<int> s;

  for ( const auto& str : ops ) {
    if ( str == "C" ) s.pop();
    else if ( str == "D" ) s.push(2 * s.top() );
    else if ( str == "+" ) {
      auto last = s.top();
      s.pop();
      auto new_s = last + s.top();
      s.push(last);
      s.push(new_s);
    } else {
      s.push(std::stoi(str));
    }
  }

  while (!s.empty()) {
    res += s.top();
    s.pop();
  }

  return res;
}
