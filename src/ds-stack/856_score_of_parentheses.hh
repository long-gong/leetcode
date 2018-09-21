//
// Created by saber on 9/20/18.
//

#ifndef LEETCODE_856_SCORE_OF_PARENTHESES_HH
#define LEETCODE_856_SCORE_OF_PARENTHESES_HH
/*
 * Given a balanced parentheses string S, compute the score of the string based on the following rule:

    () has score 1
    AB has score A + B, where A and B are balanced parentheses strings.
    (A) has score 2 * A, where A is a balanced parentheses string.
 */
#include <leetcode.h>
class Solution {
 public:
  int scoreOfParentheses(string S) ;
};
#endif //LEETCODE_856_SCORE_OF_PARENTHESES_HH
