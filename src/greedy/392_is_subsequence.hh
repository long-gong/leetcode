//
// Created by gtuser on 8/12/18.
//

#ifndef LEETCODE_392_IS_SUBSEQUENCE_HH
#define LEETCODE_392_IS_SUBSEQUENCE_HH

/*
 * Given a string s and a string t, check if s is subsequence of t.
 * 
 * You may assume that there is only lower case English letters in both s and t. t is 
 * potentially a very long (length ~= 500,000) string, and s is a short string (<=100).
 * 
 * A subsequence of a string is a new string which is formed from the original string 
 * by deleting some (can be none) of the characters without disturbing the relative 
 * positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while 
 * "aec" is not). 
 */

#include <leetcode.h>

class IsSubsequenceBase {
 public:
  virtual bool operator()(std::string s, std::string t) = 0;
};


class IsSubsequence01 : public IsSubsequenceBase{
 public:
  bool operator()(std::string s, std::string t) override;
};
#endif //LEETCODE_392_IS_SUBSEQUENCE_HH
