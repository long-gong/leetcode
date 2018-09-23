//
// Created by saber on 9/23/18.
//

#ifndef LEETCODE_338_COUNTING_BITS_HH
#define LEETCODE_338_COUNTING_BITS_HH
/*
 * Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary
 * representation and return them as an array.
 */
#include <leetcode.h>
class Solution {
 public:
  vector<int> countBits(int num) ;
};
class SolutionSteal {
 public:
  vector<int> countBits(int num) {
    int cur = 1;
    vector<int> v;
    v.push_back(0);

    for (int i = 1; i <= num; i++) {
      if (i >= cur * 2) {
        cur *= 2;
      }

      v.push_back(v[i - cur] + 1);
    }

    return v;
  }
};
#endif //LEETCODE_338_COUNTING_BITS_HH
