//
// Created by saber on 9/6/18.
//

#ifndef LEETCODE_313_SUPER_UGLY_NUMBER_HH
#define LEETCODE_313_SUPER_UGLY_NUMBER_HH
/*
 * Write a program to find the nth super ugly number.
 *
 * Super ugly numbers are positive numbers whose all prime factors are in the given prime list primes of size k.
 */
#include <leetcode.h>
class Solution {
 public:
  int nthSuperUglyNumber(int n, vector<int>& primes) ;
  int nthSuperUglyNumber02(int n, vector<int>& primes)
  {
    /*
    primes        [2 7 13 19]
      x             \ \ /  /
    ugly          [    1    ]
      ||            / / \  \
    candicates    [2 7 13 19] => min(candicates) => next ugly => ugly [1 2]
    candicates    [_ 7 13 19] => fill blank in candicates
    */
    vector<int> ugly(n, 0);
    vector<int> idx(primes.size(), 0);
    vector<int> candicates(primes.size(), 1);

    int next = 1;
    for (int i = 0; i < n; i++)
    {
      ugly[i] = next;

      next = INT_MAX;
      for (int j = 0; j < primes.size(); j++)
      {
        if (candicates[j] == ugly[i]) candicates[j] = ugly[idx[j]++] * primes[j];
        next = min(next, candicates[j]);
      }
    }
    return ugly[n - 1];
  }
};
#endif //LEETCODE_313_SUPER_UGLY_NUMBER_HH
