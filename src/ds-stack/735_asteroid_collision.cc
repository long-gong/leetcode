//
// Created by saber on 9/20/18.
//

#include "735_asteroid_collision.hh"
vector<int> Solution::asteroidCollision(vector<int> &asteroids) {
  std::vector<int> res;
  if (asteroids.empty()) return res;
  int start = 0, ed = asteroids.size() - 1;
  while (start <= ed && asteroids[start] < 0) res.push_back(asteroids[start++]);
  while (start <= ed && asteroids[ed] > 0) --ed;

  std::stack<int> s;
  for (; start <= ed; ++start) {
    auto as = asteroids[start];
    if (!s.empty() && as < 0) {
      while (!s.empty() && (s.top() > 0 && s.top() < -as)) s.pop();
      if ((!s.empty() && s.top() < 0) || s.empty()) s.push(as);
      else if (!s.empty() && s.top() + as == 0) s.pop();
    } else s.push(as);
  }

  if (s.size() > 0) {
    auto len = s.size() + res.size();
    res.resize(len, 0);
    while (!s.empty()) {
      res[len - 1] = s.top();
      s.pop();
      --len;
    }
  }
  if ( asteroids.size() - ed - 1 > 0 ) res.insert(res.end(), asteroids.begin() + ed + 1, asteroids.end());
  return res;
}
