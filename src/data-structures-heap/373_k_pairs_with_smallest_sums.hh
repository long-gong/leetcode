//
// Created by saber on 9/8/18.
//

#ifndef LEETCODE_373_K_PAIRS_WITH_SMALLEST_SUMS_HH
#define LEETCODE_373_K_PAIRS_WITH_SMALLEST_SUMS_HH
/*
 * You are given two integer arrays nums1 and nums2 sorted in ascending order and an integer k.
 * Define a pair (u,v) which consists of one element from the first array and one element from the second array.
 * Find the k pairs (u1,v1),(u2,v2) ...(uk,vk) with the smallest sums.
 */
#include <leetcode.h>
class Solution {
 public:
  vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) ;
};

class SolutionSteal {
 public:
  class Compare
  {
   public:
    bool operator() (pair<int,int> a, pair<int,int> b)
    {
      return a.first+a.second > b.first + b.second;
    }
  };

  vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    vector<pair<int, int>> res;
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare > pq;

    for(int i=0; i < nums1.size(); i++){
      int lb =  k /(i+1) ;
      int size = nums2.size();
      for(int j=0; j < min(lb, size); j++)
        pq.push(pair<int,int>(nums1[i], nums2[j]));

    }


    while(pq.size() > 0 && k > 0){
      res.push_back(pq.top());
      pq.pop();
      k--;
    }

    return res;
  }
};
#endif //LEETCODE_373_K_PAIRS_WITH_SMALLEST_SUMS_HH
