//
// Created by saber on 9/20/18.
//

#include "739_daily_temperatures.hh"
vector<int> Solution::dailyTemperatures(vector<int> &temperatures) {
  if ( temperatures.empty() ) return {};
  if ( temperatures.size() == 1 ) return {0};
  std::vector<int> res(temperatures.size(), 0 );
  std::stack<size_t> s;

  for ( size_t i = 0;i < temperatures.size() ;++ i ) {
    while ( !s.empty() && temperatures[s.top()] < temperatures[i] ) {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
