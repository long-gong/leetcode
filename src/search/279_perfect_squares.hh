//
// Created by saber on 8/25/18.
//

#ifndef LEETCODE_279_PERFECT_SQUARES_HH
#define LEETCODE_279_PERFECT_SQUARES_HH
/*
 * Given a positive integer n, find the least number of perfect square numbers
 * (for example, 1, 4, 9, 16, ...) which sum to n.
 */
#include <leetcode.h>

class Solution {
  int _min{std::numeric_limits<int>::max()};
 public:
  int numSquares(int n) ;
  int numSquares_(int n, int c, int k);
};
#endif //LEETCODE_279_PERFECT_SQUARES_HH
