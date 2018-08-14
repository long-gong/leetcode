//
// Created by saber on 8/13/18.
//

#include "167_two_sum_II.hh"
vector<int> TwoSumII01::operator()(std::vector<int> &&numbers, int target) {
  int first = 0, last = static_cast<int>(numbers.size() - 1);
  int sum;
  while ( first < last ) {
    sum = numbers[first] + numbers[last];
    if ( sum == target ) break;
    else ( sum > target ? ( -- last ) : ( ++ first ) );
  }
  //// Note that, here we assume there is always a feasible solution!
  //// Otherwise, we should check the equality.
  return std::vector<int>({first + 1, last + 1});
}
