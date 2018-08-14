//
// Created by saber on 8/13/18.
//

#ifndef LEETCODE_633_SUM_SQUARE_NUMBERS_HH
#define LEETCODE_633_SUM_SQUARE_NUMBERS_HH
/*
 * Given a non-negative integer c, your task is to decide whether there're two integers a and b such that a2 + b2 = c. 
 */
#include <leetcode.h>

class SumOfSquareNumbersBase {
 public:
  virtual bool operator()(int c) = 0;
};

class SumOfSquareNumers01 : public  SumOfSquareNumbersBase {
 public:
  bool operator()(int c) override;
};
#endif //LEETCODE_633_SUM_SQUARE_NUMBERS_HH
