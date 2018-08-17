//
// Created by saber on 8/16/18.
//

#ifndef LEETCODE_198_HOUSE_ROBBER_HH
#define LEETCODE_198_HOUSE_ROBBER_HH
/*
 * You are a professional robber planning to rob houses along a street. Each house has
 * a certain amount of money stashed, the only constraint stopping you from robbing
 * each of them is that adjacent houses have security system connected and it will automatically
 * contact the police if two adjacent houses were broken into on the same night.
 *
 * Given a list of non-negative integers representing the amount of money of each house,
 * determine the maximum amount of money you can rob tonight without alerting the police.
 */
#include <leetcode.h>

class HouseRobberBase {
 public:
  virtual int operator()(std::vector<int>&& nums) = 0;
};


class HouseRobber01 : public HouseRobberBase {
 public:
  int operator()(std::vector<int> &&nums) override;
};

class HouseRobber02 : public HouseRobberBase {
 public:
  int operator()(std::vector<int> &&nums) override;
};
#endif //LEETCODE_198_HOUSE_ROBBER_HH
