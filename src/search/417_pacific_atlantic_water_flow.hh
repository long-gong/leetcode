//
// Created by saber on 8/26/18.
//

#ifndef LEETCODE_417_PACIFIC_ATLANTIC_WATER_FLOW_HH
#define LEETCODE_417_PACIFIC_ATLANTIC_WATER_FLOW_HH
/*
 * Given an m x n matrix of non-negative integers representing the height of each unit
 * cell in a continent, the "Pacific ocean" touches the left and top edges of the matrix
 * and the "Atlantic ocean" touches the right and bottom edges.
 *
 * Water can only flow in four directions (up, down, left, or right) from a cell to
 * another one with height equal or lower.
 *
 * Find the list of grid coordinates where water can flow to both the Pacific and Atlantic
 * ocean.
 *
 * Note:
 *
 *     The order of returned grid coordinates does not matter.
 *     Both m and n are less than 150.
 */
#include <leetcode.h>
class Solution {
 public:
  using Graph = vector<vector<int> > ;
  using Coordinate = pair<int, int> ;
  
  vector<Coordinate > pacificAtlantic(Graph & matrix) ;
  void explore(int x,int y, Graph& g, std::vector<std::vector<int> >& flag);

};
#endif //LEETCODE_417_PACIFIC_ATLANTIC_WATER_FLOW_HH
