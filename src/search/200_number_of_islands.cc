//
// Created by saber on 8/25/18.
//

#include "200_number_of_islands.hh"
int Solution::numIslands(vector<vector<char>> &grid) {
  if ( grid.empty() ) return 0;
  int cnt = 0;

  for ( size_t i = 0;i < grid.size(); ++ i) {
    for ( size_t j = 0;j < grid[i].size(); ++ j) {
      explore(i, j, grid, cnt, true);
    }
  }
  

  return cnt;
}
void Solution::explore(int x, int y, vector<vector<char>> &grid, int& cnt, bool start) {
    if ( x < 0 || x >= grid.size() || y < 0 || y >= grid[x].size() || grid[x][y] == '0' ) return;
    if ( start ) ++ cnt;
    grid[x][y] = '0';
    explore(x - 1, y, grid, cnt, false);
    explore(x + 1, y, grid, cnt, false);
    explore(x , y - 1, grid, cnt, false);
    explore(x, y + 1, grid, cnt, false);
}
