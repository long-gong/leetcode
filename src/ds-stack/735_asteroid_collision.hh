//
// Created by saber on 9/20/18.
//

#ifndef LEETCODE_735_ASTEROID_COLLISION_HH
#define LEETCODE_735_ASTEROID_COLLISION_HH
/*
 *  We are given an array asteroids of integers representing asteroids in a row.
 * 
 * For each asteroid, the absolute value represents its size, and the sign represents 
 * its direction (positive meaning right, negative meaning left). Each asteroid moves 
 * at the same speed.
 * 
 * Find out the state of the asteroids after all collisions. If two asteroids meet, 
 * the smaller one will explode. If both are the same size, both will explode. Two asteroids 
 * moving in the same direction will never meet. 
 */
#include <leetcode.h>
class Solution {
 public:
  vector<int> asteroidCollision(vector<int>& asteroids) ;
};
#endif //LEETCODE_735_ASTEROID_COLLISION_HH
