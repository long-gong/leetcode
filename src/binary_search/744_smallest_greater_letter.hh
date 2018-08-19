//
// Created by saber on 8/18/18.
//

#ifndef LEETCODE_744_SMALLEST_GREATER_LETTER_HH
#define LEETCODE_744_SMALLEST_GREATER_LETTER_HH
/*
 * Given a list of sorted characters letters containing only lowercase letters, and 
 * given a target letter target, find the smallest element in the list that is larger 
 * than the given target.
 * 
 * Letters also wrap around. For example, if the target is target = 'z' and letters 
 * = ['a', 'b'], the answer is 'a'. 
 */
#include <leetcode.h>

class SmallestGreaterLetterBase {
 public:
  virtual char operator()(std::vector<char>&& letters, char target) = 0;
};

class SmallestGreaterLetter01 : public SmallestGreaterLetterBase {
 public:
  char operator()(std::vector<char> &&letters, char target) override;
};
#endif //LEETCODE_744_SMALLEST_GREATER_LETTER_HH
