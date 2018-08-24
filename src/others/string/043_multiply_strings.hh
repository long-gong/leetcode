//
// Created by saber on 8/22/18.
//

#ifndef LEETCODE_043_MULTIPLY_STRINGS_HH
#define LEETCODE_043_MULTIPLY_STRINGS_HH
/*
 * Given two non-negative integers num1 and num2 represented as strings, 
 * return the product of num1 and num2, also represented as a string.
 */
#include <leetcode.h>

class Solution {
 public:
  string multiply(string num1, string num2) ;
  string multiply_(string num1, char ch );
  string add_(string num1, string num2) ;
};
 
#endif //LEETCODE_043_MULTIPLY_STRINGS_HH
