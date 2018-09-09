//
// Created by saber on 9/6/18.
//

#include "313_super_ugly_number.hh"
int Solution::nthSuperUglyNumber(int n, vector<int> &primes) {

  std::vector<int> uglies;
  uglies.push_back(1);
  std::priority_queue<std::tuple<int, int, int>,std::vector<std::tuple<int, int, int> >, std::greater<> > q;
  for ( const auto& p : primes ) {
    q.push({p, 0, p});
  }

  while ( n > 1 ) {
    auto x = q.top();
    q.pop();
    auto v = std::get<0>(x);
    uglies.push_back(v);
    auto next_id = std::get<1>(x) + 1;
    auto pri = std::get<2>(x);
    q.push({uglies[next_id] * pri, next_id, pri});
    while ( std::get<0>(q.top()) == v ) {
      next_id = std::get<1>(q.top()) + 1;
      pri = std::get<2>(q.top());
      q.push({uglies[next_id] * pri, next_id, pri});
      q.pop();
    }
    -- n;
  }

  for ( const auto &u : uglies )
  std::cout << u << " ";
  std::cout << std::endl;
  return uglies.back();
}
