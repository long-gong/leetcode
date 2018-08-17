//
// Created by saber on 8/15/18.
//

#include "347_top_k_frequent.hh"
vector<int> TopKElement01::operator()(std::vector<int> &&nums, int k) {
  std::unordered_map<int /* value */, size_t /* frequency */ > frequency;
  for ( const auto &n : nums ) {
    std::unordered_map<int,size_t >::iterator it = frequency.find(n) ;
    if ( it == frequency.end() ) frequency[n] = 1;
    else it->second = it->second + 1;
  }
  std::vector<std::pair<int, size_t> > valFrequencies(frequency.size());
  size_t i = 0;
  for ( auto& kv : frequency ) {
    valFrequencies[i].first = kv.first;
    valFrequencies[i].second = kv.second;
    ++ i;
  }
  std::nth_element(valFrequencies.begin(), valFrequencies.begin() + k, valFrequencies.end(), [](const std::pair<int, size_t> &a, const std::pair<int, size_t>& b){
    return a.second > b.second;
  });
  
  std::vector<int> result(k);
  for ( i = 0;i < k;++ i ) result[i] = valFrequencies[i].first;
  return result;
}
