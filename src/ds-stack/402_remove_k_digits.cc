//
// Created by saber on 9/15/18.
//

#include "402_remove_k_digits.hh"
string Solution::removeKdigits(string num, int k) {
  if ( k == num.size() ) return "0";
  std::stack<char> s;
  size_t i = 0;
  s.push( num[i ++] );
  int remaining = k;
  for ( ;i < num.size()  ;++ i ){
    while ( !s.empty() && remaining > 0 && s.top() > num[i] )
    { s.pop(); -- remaining; }
    if ( remaining == 0 ) break;
    else {
      if ( !(s.empty() && num[i] == '0') ) s.push(num[i]);
    }
  }
  string res;
  while ( s.size() + k > num.size() ) s.pop();
  while ( !s.empty() ) {
    res.insert(res.begin(), s.top());
    s.pop();
  }
  if ( i < num.size() && res.size() + k < num.size() ) {
    auto si = num.size() - res.size() - k;
    if ( res.empty() ) {
      while ( i < num.size() && num[i] == '0' ) {++ i;}
      if ( i < num.size() ) res = num.substr(i);
    }
    else res.append(num.substr(i, si));
  }

  return ( res.empty() ? "0" : res );
}
