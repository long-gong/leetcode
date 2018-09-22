//
// Created by saber on 9/20/18.
//

#ifndef LEETCODE_907_SUM_OF_SUBARRAY_MINIMUMS_HH
#define LEETCODE_907_SUM_OF_SUBARRAY_MINIMUMS_HH
/*
 * Given an array of integers A, find the sum of min(B), where B ranges over every (contiguous) subarray of A.
 * Since the answer may be large, return the answer modulo 10^9 + 7.
 */
#include <leetcode.h>
class Solution {
 public:
  int sumSubarrayMins(vector<int>& A) ;
  int sumSubarrayMinsBase(vector<int>& A) ;
};

class SolutionSteal {
 public:
  int sumSubarrayMins(vector<int>& A) {
    stack<int> stk;
    int ans=0;
    A.push_back(INT_MIN);
    int mod=1000000007;
    for(int i=0;i<A.size();++i){
      while(!stk.empty()&&A[i]<A[stk.top()]){
        int curr=stk.top();
        stk.pop();
        int left=stk.empty()?-1:stk.top();
        int right=i;
        ans+=A[curr]*(curr-left)*(right-curr);
        ans%=mod;
      }
      stk.push(i);
    }
    return ans;
  }
};
#endif //LEETCODE_907_SUM_OF_SUBARRAY_MINIMUMS_HH
