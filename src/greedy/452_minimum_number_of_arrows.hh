
#ifndef _452_minimum_number_of_arrows_HPP_
#define _452_minimum_number_of_arrows_HPP_

/*
  * There are a number of spherical balloons spread in two-dimensional space. For each
  * balloon, provided input is the start and end coordinates of the horizontal diameter.
  * Since it's horizontal, y-coordinates don't matter and hence the x-coordinates of
  * start and end of the diameter suffice. Start is always smaller than end. There will
  * be at most 10^4 balloons.
  *
  * An arrow can be shot up exactly vertically from different points along the x-axis.
  * A balloon with x_start and x_end bursts by an arrow shot at x if x_start ≤ x ≤ x_end.
  * There is no limit to the number of arrows that can be shot. An arrow once shot keeps
  * travelling up infinitely. The problem is to find the minimum number of arrows that
  * must be shot to burst all balloons.
 */

#include "leetcode.h"

class MinimumNumberOfArrowsBase {
 public:
  virtual size_t operator()(std::vector<std::pair<int, int> > && points) = 0;
};

class MinimumNumberOfArrows01 : public MinimumNumberOfArrowsBase {
 public:
  size_t operator()(std::vector<std::pair<int, int> > &&points) override;
};
#endif //_452_minimum_number_of_arrows_HPP_
