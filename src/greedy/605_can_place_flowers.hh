
#ifndef _605_can_place_flowers_HPP_
#define _605_can_place_flowers_HPP_
/*
 * Suppose you have a long flowerbed in which some of the plots are planted and some
 * are not. However, flowers cannot be planted in adjacent plots - they would compete
 * for water and both would die.
 *
 * Given a flowerbed (represented as an array containing 0 and 1, where 0 means empty
 * and 1 means not empty), and a number n, return if n new flowers can be planted in
 * it without violating the no-adjacent-flowers rule.
 */

#include "leetcode.h"

class PlaceFlowersBase {
 public:
  virtual bool operator()(vector<int>&& flowerbed, int n) = 0;
};


class PlaceFlowers01 : public PlaceFlowersBase {
 public:
  bool operator()(vector<int> &&flowerbed, int n) override;
};
#endif //_605_can_place_flowers_HPP_
