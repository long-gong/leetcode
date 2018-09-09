//
// Created by saber on 9/9/18.
//

#include "743_network_delay_time.hh"


int Solution::networkDelayTime(vector<vector<int>> &times, int N, int K) {
  const int inf = -1;
  std::vector<int> delay(N, inf);

  std::vector<std::vector<std::pair<int, int> > > g(N);

  for ( const auto& e : times ) {
    g[e[0] - 1].push_back( {e[1] - 1, e[2]} );
  }
  delay[K - 1] = 0;
  std::priority_queue<int, std::vector<int>, Cmp> q{Solution::Cmp(delay, inf)};
  q.push(K - 1);
  while (!q.empty()) {
    auto c = q.top();
    q.pop();
    for  ( const auto &nei : g[c] ) {
      auto dis = delay[nei.first];
      if ( dis == inf ) {
        delay[nei.first] = delay[c] + nei.second;
        q.push( nei.first );
      } else {
        delay[nei.first] = std::min(delay[c] + nei.second, dis);
      }
    }
  }

  int de = 0;
  for ( const auto& d : delay ) {
    if ( d == inf ) return -1;
    else de = std::max( de, d );
  }
  return de;
}
