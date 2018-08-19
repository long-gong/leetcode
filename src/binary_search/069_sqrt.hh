//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_069_SQRT_HH
#define LEETCODE_069_SQRT_HH
/*
 * Implement int sqrt(int x).
 * 
 * Compute and return the square root of x, where x is guaranteed to be a non-negative 
 * integer.
 * 
 * Since the return type is an integer, the decimal digits are truncated and only the 
 * integer part of the result is returned.
 */
#include <leetcode.h>

class SqrtBase {
 public:
  virtual int operator()(int x) = 0;
};

class Sqrt01 : public SqrtBase {
 public:
  int operator()(int x) override;
};
#endif //LEETCODE_069_SQRT_HH
