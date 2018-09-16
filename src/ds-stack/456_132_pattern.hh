//
// Created by saber on 9/16/18.
//

#ifndef LEETCODE_456_132_PATTERN_HH
#define LEETCODE_456_132_PATTERN_HH
/*
 * Given a sequence of n integers a1, a2, ..., an, a 132 pattern is a subsequence ai, aj, ak such that i < j < k and ai < ak < aj.
 * Design an algorithm that takes a list of n numbers as input and checks whether there is a 132 pattern in the list.
 */
#include <leetcode.h>
class Solution {
 public:
  bool find132pattern(vector<int>& nums);
};

class SolutionSteal {
 public:
  bool find132pattern(vector<int>& nums) {
    int n = nums.size();
    if (n<3) return 0;
    stack<int> sk;
    int two = INT_MIN; // two is 2 of 132;
    //finding 32, record 2, if (num < 2) return true;
    // stack num from bottom to top, is from max to min
    for (int i=n-1; i>=0; i--)
    {
      if (nums[i]<two) return 1;
      while(!sk.empty() && sk.top() < nums[i]) {two = sk.top(); sk.pop();}
      sk.push(nums[i]);
    }
    return 0;
  }

};
#endif //LEETCODE_456_132_PATTERN_HH
