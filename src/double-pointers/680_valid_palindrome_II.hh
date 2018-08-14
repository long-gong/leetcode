//
// Created by saber on 8/13/18.
//

#ifndef LEETCODE_680_VALID_PALINDROME_II_HH
#define LEETCODE_680_VALID_PALINDROME_II_HH
/*
 * Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome. 
 */
#include <leetcode.h>

class ValidPalindromeIIBase {
 public:
  virtual bool operator()(std::string s) = 0;
};

class ValidPalindromeII01 : public  ValidPalindromeIIBase {
 public:
  bool operator()(std::string s) override;
};
#endif //LEETCODE_680_VALID_PALINDROME_II_HH
