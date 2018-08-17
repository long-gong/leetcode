//
// Created by saber on 8/15/18.
//

#ifndef LEETCODE_075_SORT_COLORS_HH
#define LEETCODE_075_SORT_COLORS_HH
/*
 * Given an array with n objects colored red, white or blue, sort them in-place so that
 * objects of the same color are adjacent, with the colors in the order red, white and
 * blue.
 *
 * Here, we will use the integers 0, 1, and 2 to represent the color red, white, and
 * blue respectively.
 *
 * Note: You are not suppose to use the library's sort function for this problem.
 */
#include <leetcode.h>

class SortColorsBase {
 public:
  virtual void operator()(std::vector<int>& nums) = 0;
};


class SortColors01 : public SortColorsBase {
 public:
  void operator()(std::vector<int> &nums) override;
};

class SortColors02 : public SortColorsBase {
 public:
  void operator()(std::vector<int> &nums) override;
};
#endif //LEETCODE_075_SORT_COLORS_HH
