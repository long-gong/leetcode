//
// Created by saber on 8/25/18.
//

#ifndef LEETCODE_200_NUMBER_OF_ISLANDS_HH
#define LEETCODE_200_NUMBER_OF_ISLANDS_HH
/*
 * Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
 * You may assume all four edges of the grid are all surrounded by water.
 */

#include <leetcode.h>
class Solution {
 public:
  int numIslands(vector<vector<char>>& grid) ;
  void explore(int x, int y, vector<vector<char>>& grid, int& cnt, bool start);
};
#endif //LEETCODE_200_NUMBER_OF_ISLANDS_HH
