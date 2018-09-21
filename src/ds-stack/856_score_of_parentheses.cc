//
// Created by saber on 9/20/18.
//

#include "856_score_of_parentheses.hh"
int Solution::scoreOfParentheses(string S) {
  int res = 0;
  if ( S.empty() ) return res;
//  std::stack<std::pair<int,int> > s;
//  s.push({0,0});
  std::stack<int> s;
  s.push(0);
  for ( size_t i = 1;i < S.size();++ i) {
    if (S[i] == '(') s.push({0});
    else {
      auto t = s.top();
      s.pop();
      if ( t == 0 ) t = 1;
      if ( s.empty() ) {res += t; continue;}
      s.top() += ( 2 * t );
    }
  }
  while (!s.empty()) {
    res += s.top();
    s.pop();
  }

  return res;
}
