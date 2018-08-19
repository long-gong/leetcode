//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_278_REMOVE_ELEMENT_HH
#define LEETCODE_278_REMOVE_ELEMENT_HH
/*
 * Given an array nums and a value val, remove all instances of that value in-place 
 * and return the new length.
 * 
 * Do not allocate extra space for another array, you must do this by modifying the 
 * input array in-place with O(1) extra memory.
 * 
 * The order of elements can be changed. It doesn't matter what you leave beyond the 
 * new length.
 */
#include <leetcode.h>

class RemoveElementBase {
 public:
  virtual int operator()(std::vector<int>&& nums, int val) = 0;
};

class RemoveElement01 : public RemoveElementBase {
 public:
  int operator()(std::vector<int> &&nums, int val) override;
};
#endif //LEETCODE_278_REMOVE_ELEMENT_HH
