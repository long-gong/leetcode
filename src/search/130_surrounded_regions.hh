//
// Created by saber on 8/25/18.
//

#ifndef LEETCODE_130_SURROUNDED_REGIONS_HH
#define LEETCODE_130_SURROUNDED_REGIONS_HH
/*
 * Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.

 * A region is captured by flipping all 'O's into 'X's in that surrounded region.
 */

#include <leetcode.h>

class Solution {
 public:
  void solve(vector<vector<char>>& board) ;
  void explore( int x, int y, vector<vector<char>>& board, bool start );
};
#endif //LEETCODE_130_SURROUNDED_REGIONS_HH
