//
// Created by saber on 8/25/18.
//

#include "695_max_area_of_island.hh"
int Solution::maxAreaOfIsland(vector<vector<int>> &grid) {
  if ( grid.empty() ) return 0;
  size_t m = grid.size(), n = grid[0].size();
  int area = 0;
  for ( size_t x = 0;x < m;++ x ) {
    for ( size_t y = 0;y < n;++ y ) {
      auto a = 0;
      explore(x, y, grid, a);
      area = std::max(a, area);
    }
  }

  return area;
}

void Solution::explore(size_t x, size_t y, vector<vector<int>> &grid, int &area) {
  if ( grid[x][y] ) {
    ++area;
    grid[x][y] = 0;
    Coordinate left = {(x == 0 ? x : (x - 1)), y};
    Coordinate right = {(x == grid.size() - 1 ? x : (x + 1)), y};
    Coordinate up = {x, (y == 0 ? y : (y - 1))};
    Coordinate below = {x, (y == grid[x].size() - 1 ? y : (y + 1))};
    explore( left.first, left.second, grid, area);
    explore( right.first, right.second, grid, area);
    explore( up.first, up.second, grid, area);
    explore( below.first, below.second, grid, area);
  }
}
