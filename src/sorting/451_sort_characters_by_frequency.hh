//
// Created by saber on 8/15/18.
//

#ifndef LEETCODE_451_SORT_CHARACTERS_BY_FREQUENCY_HH
#define LEETCODE_451_SORT_CHARACTERS_BY_FREQUENCY_HH
/*
 * Given a string, sort it in decreasing order based on the frequency of characters.
 */
#include <leetcode.h>

class SortByFrequencyBase {
 public:
  virtual std::string operator()(std::string s) = 0;
  
};


class SortByFrequency01 : public SortByFrequencyBase {
 public:
  string operator()(std::string s) override;
};
#endif //LEETCODE_451_SORT_CHARACTERS_BY_FREQUENCY_HH
