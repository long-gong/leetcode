//
// Created by saber on 8/18/18.
//

#include "064_minimum_path_sum_test.hh"
int MinimumPathSum01::operator()(std::vector<std::vector<int> > &&grid) {
  if ( grid.empty() ) return 0;
  //// f(0,0) = grid[0][0]
  //// f(i,j) = min{f(i-1,j), f(i, j-1)} + grid[i][j]
  size_t m = grid.size();
  size_t n = grid[0].size();
  std::vector<std::vector<int> > T(m, std::vector<int>(n, 0));
  T[0][0] = grid[0][0];
  for ( size_t x = 1;x < n;++ x) T[0][x] = T[0][x - 1] + grid[0][x];
  for ( size_t y = 1;y < m;++ y) T[y][0] = T[y - 1][0] + grid[y][0];
  
  for (size_t y = 1;y < m;++ y){
    for ( size_t x = 1;x < n;++ x) {
      T[y][x] = std::min(T[y - 1][x], T[y][x - 1]) + grid[y][x];
    }
  }
  
  return T[m - 1][n - 1];
}

int MinimumPathSum02::operator()(std::vector<std::vector<int> > &&grid) {
  if (grid.empty()) return 0;
  //// f(0,0) = grid[0][0]
  //// f(i,j) = min{f(i-1,j), f(i, j-1)} + grid[i][j]
  size_t m = grid.size();
  size_t n = grid[0].size();
  std::vector<int> T(n, 0);
  T[0] = grid[0][0];
  for (size_t x = 1; x < n; ++x) T[x] = T[x - 1] + grid[0][x];

  for (size_t y = 1; y < m; ++y) {
    for (size_t x = 0; x < n; ++x) {
      if (x == 0) T[x] += grid[y][x];
      else {
        T[x] = std::min(T[x - 1]/* left */, T[x] /* above */) + grid[y][x];
      }
    }
  }
  return T[n - 1];
}
