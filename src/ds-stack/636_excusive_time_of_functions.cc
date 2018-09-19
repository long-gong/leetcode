//
// Created by saber on 9/18/18.
//

#include "636_excusive_time_of_functions.hh"
vector<int> Solution::exclusiveTime(int n, vector<string> &logs) {
  vector<int> res;
  if ( n == 0 ) return res;
  res.resize(n, 0);

  std::stack<std::vector<int> > s;
  std::stack<std::pair<int, int> > exec_tm;

  int i = 0;
  s.push(get(logs.front()));

  //int exec_t = 0;
  for ( i = 1;i < logs.size();++ i ) {
    auto vec = get(logs[i]);
    if ( vec[1] == 1 ) {
      assert( s.top()[1] == 0 && s.top()[0] == vec[0] );
      auto e_t = ( vec[2] - s.top()[2] + 1 );
      if ( !exec_tm.empty() ) {
        if ( s.top()[2] < exec_tm.top().first ) {
          int gap = 0;
          do {
            gap += (exec_tm.top().second - exec_tm.top().first + 1);
            exec_tm.pop();
          } while ( !exec_tm.empty() && s.top()[2] < exec_tm.top().first );
          exec_tm.push({s.top()[2], vec[2]});
          res[vec[0]] += (e_t - gap);
        } else if ( s.top()[2] == exec_tm.top().second + 1 ) {
          exec_tm.top().second = vec[2];
          if ( exec_tm.top().first == 0 ) exec_tm.pop();
          res[vec[0]] += e_t;
        } else {
          exec_tm.push({s.top()[2], vec[2]});
          res[vec[0]] += e_t;
        }
      } else {
        exec_tm.push({s.top()[2], vec[2]});
        res[vec[0]] += e_t;
      }
      s.pop();
    } else {
      s.push(vec);
    }

  }

  return res;

}

std::vector<int> Solution::get(string &log) {
  std::vector<int> res(3, 0);

  size_t i = 0, j = 0;
  size_t start ;

  for ( auto& r : res ) {
    start = i;
    while ( i < log.size() && log[i] != ':' ) ++ i;
    if ( j != 1 ) r = std::stoi(log.substr(start, i - start));
    else r = ( log.substr(start, i - start) == "start" ? 0: 1 );
    ++ j;++ i;
  }

  return res;
}
