//
// Created by saber on 9/9/18.
//

#include "787_cheapest_flights_wthin_k_stops.hh"
int Solution::findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K) {
  ++ K;
  const int inf = std::numeric_limits<int>::max();
  std::vector<std::vector<std::pair<int, int> >> g(n);
  for ( const auto& edge : flights ) {
    g[edge[0]].push_back({edge[1], edge[2]});
  }

  std::vector<int> prices(n, inf);
  std::vector<int> prices_pre(prices);
  prices_pre[src] = 0;
  int k = 0;
  for ( ;k < K;++ k ) {
    for ( int v = 0;v < n;++ v ) {
      for ( const auto& nei : g[v] ) {
        if ( prices_pre[v] == inf ) continue;
        auto tmp = std::min(prices_pre[nei.first], prices_pre[v] + nei.second);
        prices[nei.first] = std::min(prices[nei.first], tmp);
      }

    }
    std::copy(prices.begin(), prices.end(), prices_pre.begin());
  }

  return ( prices[dst] == inf ? -1 : prices[dst] );
}
