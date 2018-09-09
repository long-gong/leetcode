//
// Created by saber on 9/9/18.
//

#include "743_network_delay_time.hh"


int Solution::networkDelayTime(vector<vector<int>> &times, int N, int K) {
  const int inf = std::numeric_limits<int>::max();
  std::vector<int> delay(N, inf);

  std::vector<std::vector<std::pair<int, int> > > g(N);

  for ( const auto& e : times ) {
    g[e[0] - 1].push_back( {e[1] - 1, e[2]} );
  }
  delay[K - 1] = 0;
  //std::priority_queue<int, std::vector<int>, Cmp> q{Solution::Cmp(delay, inf)};
  std::vector<int> q;
  int i = 0;
  while ( i < N ) { q.push_back(i) ; ++ i; }
  while (!q.empty()) {
    auto mi = std::min_element(q.begin(), q.end(), [&](const int a, const int b){
      return delay[a] < delay[b];
    });
    std::swap(*mi, q.back());
    auto c = q.back();
    q.pop_back();
    for  ( const auto &nei : g[c] ) {
      auto dis = delay[c] + nei.second;
      delay[nei.first] = std::min(dis, delay[nei.first]);
    }
  }

  int de = 0;
  for ( const auto& d : delay ) {
    if ( d == inf ) return -1;
    else de = std::max( de, d );
  }
  return de;
}
