//
// Created by saber on 9/16/18.
//

#ifndef LEETCODE_496_NEXT_GREATER_ELEMENT_I_HH
#define LEETCODE_496_NEXT_GREATER_ELEMENT_I_HH
/*
 * You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements 
 * are subset of nums2. Find all the next greater numbers for nums1's elements in the 
 * corresponding places of nums2.
 * 
 * The Next Greater Number of a number x in nums1 is the first greater number to its 
 * right in nums2. If it does not exist, output -1 for this number. 
 */
#include <leetcode.h>
class Solution {
 public:
  vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums);
};
#endif //LEETCODE_496_NEXT_GREATER_ELEMENT_I_HH
