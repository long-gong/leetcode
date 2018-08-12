
#include "452_minimum_number_of_arrows.hh"
size_t MinimumNumberOfArrows01::operator()(std::vector<std::pair<int, int> > &&points) {
  if ( points.empty() ) return 0;
  size_t cnt = 0;
  int e = 0;
  std::sort(points.begin(), points.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b){
    return (a.first < b.first || (a.first == b.first && a.second < b.second));
  });
  e = points.front().second;

  cnt = 1;

  for (size_t i = 1;i < points.size();++ i) {
    if ( points[i].first <= e ) {// can be burst by the previous arrow
      e = std::min(e, points[i].second); // update arrow range
    } else {
      ++ cnt;
      e = points[i].second;
    }
  }

  return cnt;
}
