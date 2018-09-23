//
// Created by saber on 9/23/18.
//

#ifndef LEETCODE_078_SUBSETS_HH
#define LEETCODE_078_SUBSETS_HH
/*
 * Given a set of distinct integers, nums, return all possible subsets (the power set).
 */
#include <leetcode.h>
  class Solution {
 public:
  vector<vector<int>> subsets(vector<int>& nums) ;
    vector<vector<int>> subsets(vector<int>::iterator first, vector<int>::iterator last) ;
};
class SolutionSteal {
 public:
  void dfs(vector<vector<int>>& ans, vector<int>& nums, int cur, vector<int>& candidate) {
    ans.push_back(candidate);


    // solution 1
    for (int i = cur; i < nums.size(); ++i) {
      candidate.push_back(nums[i]);
      dfs(ans, nums, i + 1, candidate);
      candidate.pop_back();
    }

    // solution 2
    // candidate.push_back(nums[cur]);
    // dfs(ans, nums, cur + 1, candidate);
    // candidate.pop_back();
    // dfs(ans, nums, cur + 1, candidate);
  }

  vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> candidate;
    dfs(ans, nums, 0, candidate);
    return ans;
  }
};
  #endif //LEETCODE_078_SUBSETS_HH
