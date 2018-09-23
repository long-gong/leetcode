//
// Created by saber on 9/23/18.
//

#include "078_subsets.hh"
vector<vector<int>> Solution::subsets(vector<int> &nums) {
  vector<vector<int> > res;
  res.push_back(vector<int>());
  if ( nums.empty() ) return res;

  return subsets(nums.begin(), nums.end());
}
vector<vector<int>> Solution::subsets(vector<int>::iterator first, vector<int>::iterator last) {
  auto n = std::distance(first, last);
  if ( n == 1 ) return {{*first}, {}};
  std::vector<vector<int>> res = subsets(first + 1, last);
  size_t s = res.size();
  for ( size_t i = 0;i < s;++ i) {
    vector<int> app(res[i]);
    app.push_back(*first);
    res.push_back(app);
  }
  return res;
}

