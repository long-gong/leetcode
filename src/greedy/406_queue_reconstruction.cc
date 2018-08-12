
#include "406_queue_reconstruction.hh"

/*
 * Analysis
 *
 */
std::vector<std::pair<int, int> > QueueReconstruction01::operator()(std::vector<std::pair<int, int> > &&people) {
  if (people.size() <= 1) return people;
  std::vector<std::pair<int, int> > tmp(people.size(), std::make_pair(-1, -1));
  std::sort(people.begin(), people.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b){
    return (a.first < b.first || (a.first == b.first && a.second < b.second));
  });

  int cur_height = people.front().first;
  int cnt = 0;
  size_t first_empty_pos = 0, j;

  for (int i = 0;i < people.size();) {
    j = first_empty_pos;
    while (i < people.size() && people[i].first == cur_height) {
      int tmp_cnt = cnt;
      while (i < people.size() && tmp_cnt < people[i].second ) {
        if ( tmp[j].first == -1 ) ++ tmp_cnt;
        ++ j;
      }
      while (tmp[j].first != -1) ++j;
      tmp[j].first = people[i].first;
      tmp[j].second = people[i].second;
      if ( j == first_empty_pos ) {
        ++ first_empty_pos;
        while (first_empty_pos < tmp.size() && tmp[first_empty_pos].first != -1) {
          ++ first_empty_pos;
          ++ j;
        }
      }
      ++ j;
      ++ cnt;
      ++ i;
    }
    if ( i == people.size() ) break;
    cnt = 0;
    cur_height = people[i].first;
  }
  return tmp;
}

vector<pair<int, int>> QueueReconstruction02::operator()(std::vector<std::pair<int, int> > &&people) {
  if (people.size() <= 1) return people;
  std::vector<std::pair<int, int> > tmp{};
  std::sort(people.begin(), people.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b){
    return (a.first > b.first || (a.first == b.first && a.second < b.second));
  });

  for ( const auto& p : people ) {
    tmp.insert(tmp.begin() + p.second, p);
  }
  return tmp;
}

vector<pair<int, int>> QueueReconstruction01_v2::operator()(std::vector<std::pair<int, int> > &&people) {
  if (people.size() <= 1) return people;
  std::vector<std::pair<int, int> > result(people.size(), std::make_pair(-1, -1));
  std::sort(people.begin(), people.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b){
    return (a.first < b.first || (a.first == b.first && a.second < b.second));
  });

  int pre_height = -1;
  int k = 0;
  int first_avail_pos = 0, j = 0;

  for ( const auto& p : people ) {
    // std::cout << "Processing " << p.first << ", " << p.second << " : " << pre_height << std::endl;
    if ( p.first != pre_height ) {//// reset cnt & first_empty_pos & j
      k = 0;
      first_avail_pos = next_( result, first_avail_pos );
      j = first_avail_pos;
    }
    for (;k < p.second; j = next_(result, j+1), ++ k);
    // assert( j < result.size() && j != -1 );
    // assert( result[j].first == -1 );
    // std::cout << "Fill in " << j << std::endl;
    result[j ++] = p;
    ++ k;//// increase count
    j = next_(result, j);//// move j to next available position
    pre_height = p.first;
  }

  return result;
}
