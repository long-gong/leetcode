//
// Created by saber on 8/13/18.
//

#ifndef LEETCODE_345_REVERSE_VOWELS_HH
#define LEETCODE_345_REVERSE_VOWELS_HH
/*
 * Write a function that takes a string as input and reverse only the vowels of a string.
 */
#include <leetcode.h>
#include <ostream>

class ReverseVowelsBase {
 public:
  bool isVowel(char ch) {
    switch(std::tolower(ch)) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        return true;
      default:
        return false;
    }
  }
 public:
  virtual std::string operator()(std::string s) = 0;
};

class ReverseVowels01 : public ReverseVowelsBase {
 public:
  string operator()(std::string s) override;
};
#endif //LEETCODE_345_REVERSE_VOWELS_HH
