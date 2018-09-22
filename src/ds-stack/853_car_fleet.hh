//
// Created by saber on 9/22/18.
//

#ifndef LEETCODE_853_CAR_FLEET_HH
#define LEETCODE_853_CAR_FLEET_HH
/*
 * N cars are going to the same destination along a one lane road.  The destination
 * is target miles away.
 *
 * Each car i has a constant speed speed[i] (in miles per hour), and initial position
 * position[i] miles towards the target along the road.
 *
 * A car can never pass another car ahead of it, but it can catch up to it, and drive
 * bumper to bumper at the same speed.
 *
 * The distance between these two cars is ignored - they are assumed to have the same
 * position.
 *
 * A car fleet is some non-empty set of cars driving at the same position and same speed.
 *  Note that a single car is also a car fleet.
 *
 * If a car catches up to a car fleet right at the destination point, it will still
 * be considered as one car fleet.
 *
 *
 * How many car fleets will arrive at the destination?
 */

#include <leetcode.h>
class Solution {
 public:
  int carFleet(int target, vector<int>& position, vector<int>& speed);
};
#endif //LEETCODE_853_CAR_FLEET_HH
