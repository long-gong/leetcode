//
// Created by saber on 9/10/18.
//

#ifndef LEETCODE_239_SLIDING_WINDOWS_MAX_HH
#define LEETCODE_239_SLIDING_WINDOWS_MAX_HH
/*
 * Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window.
 * Each time the sliding window moves right by one position. Return the max sliding window.
 */
#include <leetcode.h>
class Solution {
 public:
  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      std::vector<int> res;
      if ( k == 0 ) return res;
      if ( nums.size() < k ) return res;
      else if ( nums.size() == k ) {
        res.push_back(*std::max_element(nums.begin(), nums.end()));
        return res;
      }
      if ( k == 1 ) return nums;
      std::vector<std::pair<int, int> > sliding_win;
      int i;
      sliding_win.reserve(k);
      for ( i = 0; i < k; ++ i ) sliding_win.emplace_back(nums[i], i);
//      auto cmp = [](const std::pair<int, int>& p1, const std::pair<int,int>& p2){
//        return ( p1.first < p2.first || ( p1.first == p2.first && p1.second > p2.second ) );
//      };
      std::make_heap(sliding_win.begin(), sliding_win.end());

      for ( ;i <= nums.size(); ++ i ) {
        auto largest = sliding_win.front();
        while ( i - largest.second > k ) {
          std::pop_heap(sliding_win.begin(), sliding_win.end());
          sliding_win.pop_back();
          largest = sliding_win.front();
        }
        res.push_back(largest.first);
        if ( i < nums.size() ) {sliding_win.emplace_back(nums[i], i);
        std::push_heap(sliding_win.begin(), sliding_win.end());}
      }


      return res;

  }
};


class SolutionSteal {
 public:
  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> rst;
    if (nums.size() == 0)
      return rst;
    if (k == 0)
      return rst;
    int max = 0x80000000;
    int sum = 0;
    int maxIndex = 0;
    for(int i=0; i<k; i++)
      if (nums[i] > max)
      {
        max = nums[i];
        maxIndex = i;
      }

    for (int i = 0, j = k; j < nums.size(); i++, j++)
    {
      rst.push_back(max);
      if (i == maxIndex)
      {
        max = 0x80000000;
        for (int l = i + 1; l <= k+i; l++)
        {
          if (nums[l] > max)
          {
            max = nums[l];
            maxIndex = l;
          }
        }
      }
      else if (nums[j] > max)
      {
        max = nums[j];
        maxIndex = j;
      }
    }
    max = 0x80000000;
    for (int i = 0; i < k; i++)
    {
      if (nums[nums.size() - 1 - i] > max)
        max = nums[nums.size() - 1 - i];
    }
    rst.push_back(max);
    return rst;
  }
};
#endif //LEETCODE_239_SLIDING_WINDOWS_MAX_HH
