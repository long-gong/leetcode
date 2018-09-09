//
// Created by saber on 9/8/18.
//

#include "659_split_array_into_consecutive_subsequences.hh"
bool Solution::isPossible(vector<int> &nums) {
  std::vector<std::pair<int, int> > subseq;

  for ( const auto& x : nums ) {
    if ( subseq.empty() ){
      subseq.emplace_back(x , 1);
      continue;
    }
    while ( !subseq.empty() && x > subseq.front().first + 1 ) {
      if ( subseq.front().second < 3 ) return false;
      std::pop_heap(subseq.begin(), subseq.end(), std::greater<>());
      subseq.pop_back();
    }
    if ( subseq.empty() || subseq.front().first == x ) subseq.emplace_back(x, 1);
    else {
      std::pop_heap(subseq.begin(), subseq.end(), std::greater<>());
      subseq.back().first += 1;
      subseq.back().second += 1;
    }

    std::push_heap(subseq.begin(), subseq.end(), std::greater<>());
  }
  for ( const auto & p : subseq ) {
    if ( p.second < 3 ) return false;
  }
  return true;
}
