//
// Created by saber on 9/17/18.
//

#ifndef LEETCODE_503_NEXT_GREATER_ELEMENT_II_HH
#define LEETCODE_503_NEXT_GREATER_ELEMENT_II_HH
/*
 * Given a circular array (the next element of the last element is the first element
 * of the array), print the Next Greater Number for every element. The Next Greater
 * Number of a number x is the first greater number to its traversing-order next in
 * the array, which means you could search circularly to find its next greater number.
 * If it doesn't exist, output -1 for this number.
 */
#include <leetcode.h>
class Solution {
 public:
  vector<int> nextGreaterElements(vector<int>& nums) ;
};

class SolutionSteal {
 public:
  vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int> result(nums.size(), -1);
    if(nums.size() == 0) return result;
    stack<pair<int, int>> ele; //value and index

    for(int i = 0; i < nums.size(); i++){
      while(!ele.empty() && nums[i] > ele.top().first){
        result[ele.top().second] = nums[i];
        ele.pop();
      }
      ele.push({nums[i], i});
    }

    for(int i = 0; i < nums.size()-1; i++){
      while(!ele.empty() && nums[i] > ele.top().first){
        result[ele.top().second] = nums[i];
        ele.pop();
      }
      ele.push({nums[i], i});
    }

    return result;
  }
};
#endif //LEETCODE_503_NEXT_GREATER_ELEMENT_II_HH
