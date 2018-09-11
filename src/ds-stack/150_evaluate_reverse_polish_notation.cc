//
// Created by saber on 9/10/18.
//

#include "150_evaluate_reverse_polish_notation.hh"
int Solution::evalRPN(vector<string> &tokens) {
  if ( tokens.empty() ) return 0;

  std::stack<int> s;

  for ( const auto& t : tokens ) {

    if ( t == "+" || t == "-" || t == "*" || t == "/" ) {
      auto b = s.top();
      s.pop();
      auto a = s.top();
      s.pop();
      if ( t == "+") s.push( a + b );
      else if ( t == "-" ) s.push( a - b );
      else if ( t == "*" ) s.push( a * b );
      else s.push( a / b );
    } else {
      s.push(std::stoi(t));
    }
  }

  return s.top();
}
