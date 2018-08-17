//
// Created by saber on 8/15/18.
//

#ifndef LEETCODE_347_TOP_K_FREQUENT_HH
#define LEETCODE_347_TOP_K_FREQUENT_HH
/*
 * Given a non-empty array of integers, return the k most frequent elements.
 */
#include <leetcode.h>

class TopKElementsBase {
 public:
  virtual std::vector<int> operator()(std::vector<int>&& nums, int k) = 0;
};

class TopKElement01 : public TopKElementsBase {
 public:
  vector<int> operator()(std::vector<int> &&nums, int k) override;
};
#endif //LEETCODE_347_TOP_K_FREQUENT_HH
