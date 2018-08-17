//
// Created by saber on 8/17/18.
//

#ifndef LEETCODE_213_HOUSE_ROBBER_II_HH
#define LEETCODE_213_HOUSE_ROBBER_II_HH
/*
 * You are a professional robber planning to rob houses along a street. Each house has 
 * a certain amount of money stashed. All houses at this place are arranged in a circle. 
 * That means the first house is the neighbor of the last one. Meanwhile, adjacent houses 
 * have security system connected and it will automatically contact the police if two 
 * adjacent houses were broken into on the same night.
 * 
 * Given a list of non-negative integers representing the amount of money of each house, 
 * determine the maximum amount of money you can rob tonight without alerting the police. 
 */
#include <leetcode.h>

class HouseRobberIIBase {
 public:
  virtual int operator()(std::vector<int>&& nums) = 0;
};

class HouseRobberII01 : public HouseRobberIIBase {
 public:
  int operator()(std::vector<int> &&nums) override;
};
#endif //LEETCODE_213_HOUSE_ROBBER_II_HH
