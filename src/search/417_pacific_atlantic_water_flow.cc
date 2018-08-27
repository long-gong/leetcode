//
// Created by saber on 8/26/18.
//

#include "417_pacific_atlantic_water_flow.hh"

vector<Solution::Coordinate> Solution::pacificAtlantic(Solution::Graph &matrix) {
  vector<Solution::Coordinate> res;
  if ( matrix.empty() ) return res;

  std::vector<std::vector<int> > p_flag(matrix.size(), std::vector<int>(matrix[0].size(), -1));
  std::vector<std::vector<int> > a_flag(matrix.size(), std::vector<int>(matrix[0].size(), -1));

  for (int x = 0; x < matrix.size(); ++x) {
    if (p_flag[x][0] == -1) {
      p_flag[x][0] = 1;
      explore(x, 0, matrix, p_flag);
    }
    if (a_flag[x][matrix[x].size() - 1] == -1) {
      a_flag[x][matrix[x].size() - 1] = 1;
      explore(x, matrix[x].size() - 1, matrix, a_flag);
    }
  }
  for (int y = 0; y < matrix[0].size(); ++y)
  {
    if (  p_flag[0][y] == -1 ) {
      p_flag[0][y] = 1;
      explore(0, y, matrix, p_flag);
    }
    if ( a_flag[matrix.size() - 1][y] == -1 ) {
      a_flag[matrix.size() - 1][y] = 1;
      explore(matrix.size() - 1, y, matrix, a_flag);
    }

  }
//  for (int x = 0; x < matrix.size(); ++x) {
//    for (int y = 0; y < matrix[x].size(); ++y) {
//      explore(x, y, matrix, p_flag);
//      explore(x, y, matrix, a_flag);
//    }
//  }
  for (int x = 0; x < matrix.size(); ++x) {
    for (int y = 0; y < matrix[x].size(); ++y) {
      if ( p_flag[x][y] == 1 && a_flag[x][y] == 1 )
        res.emplace_back(x, y);
    }
  }

  return res;
}
void Solution::explore(int cx, int cy, Solution::Graph &g, std::vector<std::vector<int> > &f) {
  vector<Coordinate> neighbors;
  std::cout << "[" << cx << ", " << cy << "]\n";
  if (cx != 0) neighbors.emplace_back(cx - 1, cy);
  if (cx != g.size() - 1) neighbors.emplace_back(cx + 1, cy);
  if (cy != 0) neighbors.emplace_back(cx, cy - 1);
  if (cy != g[0].size() - 1) neighbors.emplace_back(cx, cy + 1);

  for ( const auto& nei : neighbors ) {
    int x = nei.first;
    int y = nei.second;
    if ( f[x][y] == -1 ) {//// unvisited before
      if ( g[x][y] >= g[cx][cy] ) {
        f[x][y] = 1;
        explore(x, y, g, f);
      }
    }
  }
}
