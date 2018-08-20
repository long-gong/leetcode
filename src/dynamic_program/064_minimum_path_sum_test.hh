//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_064_MINIMUM_PATH_SUM_HH
#define LEETCODE_064_MINIMUM_PATH_SUM_HH
/*
 * Given a m x n grid filled with non-negative numbers, find a path from top
 * left to bottom right which minimizes the sum of all numbers along its path.
 */
#include <leetcode.h>

class MinimumPathSumBase {
 public:
  virtual int operator()(std::vector<std::vector<int> >&& grid) = 0;
};

class MinimumPathSum01 : public MinimumPathSumBase {
 public:
  int operator()(std::vector<std::vector<int> > &&grid) override;
};

class MinimumPathSum02 : public MinimumPathSumBase {
 public:
  int operator()(std::vector<std::vector<int> > &&grid) override;
};
#endif //LEETCODE_064_MINIMUM_PATH_SUM_HH
