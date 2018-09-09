//
// Created by saber on 9/8/18.
//

#include "378_kth_smallest_element_in_sorted_matrix.hh"
// This following idea is stealed from geekforgeek
int Solution::kthSmallest(vector<vector<int>> &matrix, int k) {
  std::vector<std::tuple<int, int, int> > res;
  for ( size_t i = 0;i < matrix[0].size();++ i)
    res.emplace_back(matrix[0][i], 0, i);

  std::make_heap(res.begin(), res.end(), std::greater<>());
  while ( k > 1 ) {
    assert( !res.empty() );
    std::pop_heap(res.begin(), res.end(), std::greater<>());
    auto smallest = res.back();
    auto x = std::get<1>(smallest);
    auto y = std::get<2>(smallest);
    if ( x + 1 < matrix.size() ) {
      res.back() = { matrix[x + 1][y], x + 1, y };
      std::push_heap(res.begin(), res.end(), std::greater<>());
    }
    else res.pop_back();

    -- k;
  }

 return std::get<0>(res.front());
}
