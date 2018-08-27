//
// Created by saber on 8/25/18.
//

#include "130_surrounded_regions.hh"

void Solution::solve(vector<vector<char>> &board) {
  if ( board.empty() ) return;
  /// fill borders
  int m = board.size(), n = board[0].size();
  for ( int y = 0;y < n;++ y ) {
    if ( board[0][y] == 'O' ) board[0][y] = 'Z';
    if ( board[m - 1][y] == 'O' ) board[m - 1][y] = 'Z';
  }
  for ( int x = 0;x < m;++ x ) {
    if ( board[x][0] == 'O' ) board[x][0] = 'Z';
    if ( board[x][n - 1] == 'O' ) board[x][n - 1] = 'Z';
  }

  for ( int x = 0;x < board.size();++ x) {
    for ( int y = 0;y < board[x].size(); ++ y) {
        explore( x, y, board, false );
    }
  }

  for ( int x = 0;x < board.size();++ x) {
    for ( int y = 0;y < board[x].size(); ++ y) {
      if ( board[x][y] == 'O' ) board[x][y] = 'X';
      else if ( board[x][y] == 'Z' ) board[x][y] = 'O';
    }
  }

}

void Solution::explore( int x, int y, vector<vector<char>> &board, bool start ) {
  if ( x < 0 || x >= board.size() || y < 0 || y >= board[x].size() || board[x][y] == 'X' ) return ;

  if ( (board[x][y] == 'Z' && !start) || (board[x][y] == 'O' && start) ) {
    board[x][y] = 'Z';
    explore(x - 1, y, board, true);
    explore(x + 1, y, board, true);
    explore(x, y - 1, board, true);
    explore(x , y + 1, board, true);
  }
}

