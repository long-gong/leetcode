//
// Created by saber on 9/22/18.
//

#include "853_car_fleet.hh"
int Solution::carFleet(int target, vector<int> &position, vector<int> &speed) {
  if ( position.empty() ) return 0;
  std::vector<int> assit(position.size(), 0);
  for ( int i = 0;i < assit.size();++ i) assit[i] = i;
  std::sort(assit.begin(),assit.end(),[&](const int &a, const int &b){
    return ( position[a] > position[b] ) ;
  });

  stack<int> s;
  s.push(assit.front());
  for ( size_t j = 1;j < assit.size();++ j) {
    auto i = assit[j];
    if ( position[i] < position[s.top()] && (
        ( target - position[i] ) * (long long) speed[s.top()] > ( target - position[s.top()] ) * (long long) speed[i]
        ) )
      s.push(i);
  }

  return s.size();
}
