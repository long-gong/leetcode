//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_540_SINGLE_ELEMENT_HH
#define LEETCODE_540_SINGLE_ELEMENT_HH
/*
 * Given a sorted array consisting of only integers where every element appears twice 
 * except for one element which appears once. Find this single element that appears only once. 
 */
#include <leetcode.h>

class SingleElementBase {
 public:
  virtual int operator()(std::vector<int>&& nums) = 0;
};

class SingleElement01 : public SingleElementBase {
 public:
  int operator()(std::vector<int> &&nums) override;
};
#endif //LEETCODE_540_SINGLE_ELEMENT_HH
