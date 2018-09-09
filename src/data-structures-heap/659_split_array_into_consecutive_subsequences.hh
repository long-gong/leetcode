//
// Created by saber on 9/8/18.
//

#ifndef LEETCODE_659_SPLIT_ARRAY_INTO_CONSECUTIVE_SUBSEQUENCES_HH
#define LEETCODE_659_SPLIT_ARRAY_INTO_CONSECUTIVE_SUBSEQUENCES_HH
/*
 * You are given an integer array sorted in ascending order (may contain duplicates), you need to split them into several subsequences,
 * where each subsequences consist of at least 3 consecutive integers. Return whether you can make such a split.
 */
#include <leetcode.h>

class Solution {
 public:
  bool isPossible(vector<int>& nums) ;
};

class SolutionSteal {
 public:
  bool isPossible(vector<int>& nums) {
    int n = nums.size();
    int pre = INT_MIN, p1 = 0, p2 = 0, p3 = 0;
    int cur = 0, cnt = 0, c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; pre = cur, p1 = c1, p2 = c2, p3 = c3) {
      for (cur = nums[i], cnt = 0; i < n && cur == nums[i]; cnt++, i++);

      if (cur != pre + 1) {
        if (p1 != 0 || p2 != 0) return false;
        c1 = cnt; c2 = 0; c3 = 0;

      } else {
        if (cnt < p1 + p2) return false;
        c1 = max(0, cnt - (p1 + p2 + p3));
        c2 = p1;
        c3 = p2 + min(p3, cnt - (p1 + p2));
      }
    }

    return (p1 == 0 && p2 == 0);
  }
};
#endif //LEETCODE_659_SPLIT_ARRAY_INTO_CONSECUTIVE_SUBSEQUENCES_HH
