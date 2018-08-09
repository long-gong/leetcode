#ifndef _435_non_overlapping_intervals_HPP_
#define _435_non_overlapping_intervals_HPP_
/*
 * Given a collection of intervals, find the minimum
 * number of intervals you need to remove to make the
 * rest of the intervals non-overlapping.
 *
 * Note:
 * 1. You may assume the interval's end point is always bigger than its start point.
 * 2. Intervals like [1,2] and [2,3] have borders "touching" but they don't overlap each other.
 */

#include "leetcode.h"

struct Interval {
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e){}
};

class IntervalGreater {
 public:
  bool operator()(const Interval& a, const Interval& b) {
    return a.end > b.end;
  }
};

class IntervalLess {
 public:
  bool operator()(const Interval& a, const Interval& b) {
    return a.end < b.end;
  }
};
/*
 * Base class
 */
class NonOverlappingIntervalsBase {
 public:
  virtual size_t operator()(std::vector<Interval>&& intervals) = 0;
};

/*
 * Solution 1
 */
class NonOverlappingIntervals01 : public NonOverlappingIntervalsBase {
 public:
  size_t operator()(std::vector<Interval> &&intervals) override;
};
#endif //_435_non_overlapping_intervals_HPP_
