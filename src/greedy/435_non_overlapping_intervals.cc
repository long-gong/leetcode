#include "435_non_overlapping_intervals.hh"

size_t NonOverlappingIntervals01::operator()(std::vector<Interval> &&intervals) {
  if (intervals.empty()) return 0;
  std::sort(intervals.begin(), intervals.end(), IntervalLess());
  size_t del_cnt = 0;
  int last_end = intervals.front().end;
  
  for ( size_t i = 1;i < intervals.size();++ i) {
    if ( intervals[i].start < last_end ) {
      ++ del_cnt;
    } else {
      last_end = intervals[i].end;
    }
  }
  
  return del_cnt;
}
