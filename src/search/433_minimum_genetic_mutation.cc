//
// Created by saber on 8/25/18.
//

#include "433_minimum_genetic_mutation.hh"
int Solution::minMutation(string start, string end, vector<string> &bank) {
  std::unordered_set<string> dict(bank.begin(), bank.end());
  if ( dict.count(end) == 0 ) return -1;
  std::unordered_map<string, int> dist;
  dist[start] = 0;
  std::queue<string> q;
  q.push(start);
  while (!q.empty()) {
    auto c = q.front();
    q.pop();
    for ( int i = 0;i < c.size();++ i ) {
      auto s = c;
      for ( char ch : {'A', 'C', 'G', 'T'} ) {
        if ( s[i] == ch ) continue;
        s[i] = ch;
        if ( dict.count(s) > 0 ) {
          if ( dist.count(s) == 0 || dist[s] > dist[c] + 1 ) {
            dist[s] = dist[c] + 1;
            q.push(s);
          }
        }
      } 
    }
  }
  return ( dist.count( end ) > 0 ? dist[end] : -1 );
}
