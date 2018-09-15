//
// Created by saber on 9/15/18.
//

#ifndef LEETCODE_394_DECODE_STRING_HH
#define LEETCODE_394_DECODE_STRING_HH
/*
 *  Given an encoded string, return it's decoded string.
 *
 * The encoding rule is: k[encoded_string], where the encoded_string inside the square
 * brackets is being repeated exactly k times. Note that k is guaranteed to be a positive
 * integer.
 *
 * You may assume that the input string is always valid; No extra white spaces, square
 * brackets are well-formed, etc.
 *
 * Furthermore, you may assume that the original data does not contain any digits and
 * that digits are only for those repeat numbers, k. For example, there won't be input
 * like 3a or 2[4].
 */
#include <leetcode.h>
class Solution {
  bool isDigit(char ch) {
    return ( ch >= '0' && ch <= '9');
  }
  bool isSquareBrackets(char ch) {
    return ( ch == '[' || ch == ']' );
  }
 public:
  string decodeString(string s) ;
};
#endif //LEETCODE_394_DECODE_STRING_HH
