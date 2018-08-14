//
// Created by saber on 8/13/18.
//

#include "633_sum_square_numbers.hh"
bool SumOfSquareNumers01::operator()(int c) {
  int sqrt_c = int(std::sqrt(c));
  int a = 0, b = sqrt_c;
  int sum;
  while ( a <= b ) {
    sum = a * a + b * b;
    if ( sum == c ) return true;
    else ( sum > c ? ( -- b ) : ( ++ a ) );
  }
  return false;
}
