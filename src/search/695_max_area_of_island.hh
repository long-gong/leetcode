//
// Created by saber on 8/25/18.
//

#ifndef LEETCODE_695_MAX_AREA_OF_ISLAND_HH
#define LEETCODE_695_MAX_AREA_OF_ISLAND_HH
/*
 * Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing 
 * land) connected 4-directionally (horizontal or vertical.) You may assume all four 
 * edges of the grid are surrounded by water.
 * 
 * Find the maximum area of an island in the given 2D array. (If there is no island, 
 * the maximum area is 0.) 
 */

#include <leetcode.h>

class Solution {
 public:
  using Coordinate = std::pair<size_t, size_t>;
  int maxAreaOfIsland(vector<vector<int>>& grid) ;
  void explore(size_t x, size_t y, vector<vector<int>>& grid, int& area);
};
#endif //LEETCODE_695_MAX_AREA_OF_ISLAND_HH
