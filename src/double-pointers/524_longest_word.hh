//
// Created by saber on 8/14/18.
//

#ifndef LEETCODE_524_LONGEST_WORD_HH
#define LEETCODE_524_LONGEST_WORD_HH
/*
 * Given a string and a string dictionary, find the longest string in the dictionary 
 * that can be formed by deleting some characters of the given string. If there are 
 * more than one possible results, return the longest word with the smallest lexicographical 
 * order. If there is no possible result, return the empty string. 
 */
#include <leetcode.h> 
class LongestWordBase {
 public:
  virtual std::string operator()(std::string s, std::vector<std::string>&& d) = 0;
}; 

 class LongestWord01 : public  LongestWordBase {
  public:
   string operator()(std::string s, std::vector<std::string> &&d) override;
 };
#endif //LEETCODE_524_LONGEST_WORD_HH
