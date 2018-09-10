//
// Created by saber on 9/9/18.
//

#ifndef LEETCODE_787_CHEAPEST_FLIGHTS_WTHIN_K_STOPS_HH
#define LEETCODE_787_CHEAPEST_FLIGHTS_WTHIN_K_STOPS_HH
/*
 * There are n cities connected by m flights. Each fight starts from city u and arrives at v with a price w.

 * Now given all the cities and fights, together with starting city src and the destination dst, your task is to find the cheapest price from src to
 * dst with up to k stops. If there is no such route, output -1.
 */
#include <leetcode.h>

class Solution {
 public:
  int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K);
  
};
#endif //LEETCODE_787_CHEAPEST_FLIGHTS_WTHIN_K_STOPS_HH
