//
// Created by saber on 9/8/18.
//

#include "373_k_pairs_with_smallest_sums.hh"
vector<pair<int, int>> Solution::kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k) {
  int m = nums1.size();
  int n = nums2.size();
  vector<pair<int, int> > res;
  if ( m * n <= k ) {
    for ( const auto& a : nums1 )
      for ( const auto& b : nums2 )
        res.emplace_back(a, b);
    return res;
  }
  auto cmp = [](const std::pair<int, int>& p1,
                const std::pair<int, int>& p2){
    return (p1.first + p1.second < p2.first + p2.second);
  };
  int cnt = 0;
  res.resize(k);
  for ( size_t i = 0;i < std::min(k, m);++ i )
    for ( size_t j = 0;j < std::min(k, n); ++ j , ++ cnt ){
      if ( cnt < k ) { res[cnt] = {nums1[i], nums2[j]}; continue; }
      if ( cnt == k ) std::make_heap(res.begin(), res.end(), cmp);

      auto sum = nums1[i] + nums2[j];
      auto largest = res.front();
      if ( sum < largest.first + largest.second ) {
        std::pop_heap(res.begin(), res.end(), cmp);
        res.back() = { nums1[i], nums2[j]};
        std::push_heap(res.begin(), res.end(), cmp);
      }
    }
  return res;
}
