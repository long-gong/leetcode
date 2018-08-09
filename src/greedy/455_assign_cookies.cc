
#include "455_assign_cookies.hh"

size_t CookieAssignment01::operator()(std::vector<int> &&g, std::vector<int> &&s) {
  std::sort(g.begin(), g.end(), std::greater<int>());
  std::sort(s.begin(), s.end(), std::greater<int>());
  size_t cnt = 0, i = 0, j = 0;
  while ( i < g.size() && j < s.size() ) {
    if (g[i] <= s[j]) {
      ++ cnt;++ i; ++ j;
    } else {
      ++ i;
    }
  }
  return cnt;
}