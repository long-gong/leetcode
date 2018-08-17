//
// Created by saber on 8/16/18.
//

#ifndef LEETCODE_070_CLIMBING_STAIRS_HH
#define LEETCODE_070_CLIMBING_STAIRS_HH
/*
 * You are climbing a stair case. It takes n steps to reach to the top.
 *
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 */
#include <leetcode.h>
class ClimbingStairsBase {
 public:
  virtual int operator()(int n) = 0;
};


class ClimbingStairs01 : public ClimbingStairsBase {
 public:
  int operator()(int n) override;
};

class ClimbingStairs02 : public ClimbingStairsBase {
 public:
  int operator()(int n) override;
};
#endif //LEETCODE_070_CLIMBING_STAIRS_HH
