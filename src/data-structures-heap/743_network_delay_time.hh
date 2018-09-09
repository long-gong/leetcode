//
// Created by saber on 9/9/18.
//

#ifndef LEETCODE_743_NETWORK_DELAY_TIME_HH
#define LEETCODE_743_NETWORK_DELAY_TIME_HH
/*
 * There are N network nodes, labelled 1 to N.
 *
 * Given times, a list of travel times as directed edges times[i] = (u, v, w), where
 * u is the source node, v is the target node, and w is the time it takes for a signal
 * to travel from source to target.
 *
 * Now, we send a signal from a certain node K. How long will it take for all nodes
 * to receive the signal? If it is impossible, return -1.
 */
#include <leetcode.h>

class Solution {
  class Cmp
  {
    const std::vector<int>& _metrics;
    int _inf;

   public:
    explicit Cmp(const std::vector<int>& metrics, int inf) : _metrics(metrics), _inf(inf){}
    bool operator() (const int& lhs, const int&rhs) const
    {
     return ( _metrics[lhs] != _inf && _metrics[lhs] < _metrics[rhs] );
    }
  };
 public:
  int networkDelayTime(vector<vector<int>>& times, int N, int K) ;
};
#endif //LEETCODE_743_NETWORK_DELAY_TIME_HH
