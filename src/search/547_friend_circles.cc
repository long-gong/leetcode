//
// Created by saber on 8/25/18.
//

#include "547_friend_circles.hh"
void Solution::explore(int c, const Solution::Graph &M, std::vector<bool> &visited) {
    for ( int nei = 0; nei < M[c].size();++ nei ) {
      if ( !visited[nei] && M[c][nei] == 1 ) 
      {
        visited[nei] = true;
        explore( nei, M, visited );
      }
    }
}
int Solution::findCircleNum(Solution::Graph &M) {
  if ( M.empty() ) return 0;
  
  std::vector<bool> visited(M.size(), false);
  
  int cnt = 0;
  
  for ( size_t i = 0;i < M.size();++ i ) {
    if ( !visited[i] ) {
      ++ cnt;
      visited[i] = true;
      explore( i, M, visited );
    }
  }
  
  return cnt;
}
