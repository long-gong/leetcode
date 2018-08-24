//
// Created by saber on 8/22/18.
//

#include "043_multiply_strings.hh"
string Solution::multiply(string num1, string num2) {
  if ( num1 == "0" || num2 == "0" ) return "0";
  std::string res("0");
  std::string fac;
  for ( int k = num1.size() - 1;k >= 0; -- k ) {
    auto tmp = multiply_(num2, num1[k]) + fac;
    //std::cout << " k = " << k << " : " << tmp << std::endl;
    res = add_(res, tmp );
    fac.append("0");
  }
  return res;
}
string Solution::add_(string num1, string num2) {
  if ( num1[0] == '0' ) return num2;
  if ( num2[0] == '0' ) return num1;
  int n1 = num1.size();
  int n2 = num2.size();
  int n3 = std::max(n1, n2) + 1;
  std::string sum(n3, '0');

  -- n1, -- n2, -- n3;
  int carry = 0;
  int a, b, s;
  while ( n1 >= 0 || n2 >= 0 || carry > 0 ) {
    a = ( n1 < 0 ? 0 : (num1[n1--] - '0'));
    b = ( n2 < 0 ? 0 : (num2[n2--] - '0'));
    s = a + b + carry;
    carry = s / 10;
    sum[n3--] = (char)(( s % 10 ) + '0');
  }

  if ( n3 >= 0 ) return sum.substr(n3 + 1);
  else return sum;
}
string Solution::multiply_(string num1, char ch) {
  if ( ch == '0' ) return "0";
  if ( ch == '1' ) return num1;
  int carry = 0;
  int f = int(ch - '0');
  int t;

  for ( int k = num1.size() - 1; k >= 0 ; -- k ) {
    t = int(num1[k] - '0') * f + carry;
    num1[k] = char ( (t % 10) + '0' );
    carry = ( t / 10 );
    //if ( carry == 0 ) break;
  }
  if ( carry > 0 ) return std::to_string(carry) + num1;
  else return num1;
}
