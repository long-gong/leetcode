//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_062_UNIQUE_PATHS_HH
#define LEETCODE_062_UNIQUE_PATHS_HH
/*
 * A robot is located at the top-left corner of a m x n grid (marked 'Start' in the 
 * diagram below).
 * 
 * The robot can only move either down or right at any point in time. The robot is trying 
 * to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
 * 
 * How many possible unique paths are there? 
 */
#include <leetcode.h>
class UniquePathsBase {
 public:
  virtual int operator()(int m, int n) = 0;
};

class UniquePaths01 : public UniquePathsBase {
 public:
  int operator()(int m, int n) override;
};
#endif //LEETCODE_062_UNIQUE_PATHS_HH
