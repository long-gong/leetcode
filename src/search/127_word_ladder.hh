//
// Created by saber on 8/25/18.
//

#ifndef LEETCODE_127_WORD_LADDER_HH
#define LEETCODE_127_WORD_LADDER_HH
/*
 * Given two words (beginWord and endWord), and a dictionary's word list, find the length
 * of shortest transformation sequence from beginWord to endWord, such that:
 *
 *     Only one letter can be changed at a time.
 *     Each transformed word must exist in the word list. Note that beginWord is not
 * a transformed word.
 *
 * Note:
 *
 *     Return 0 if there is no such transformation sequence.
 *     All words have the same length.
 *     All words contain only lowercase alphabetic characters.
 *     You may assume no duplicates in the word list.
 *     You may assume beginWord and endWord are non-empty and are not the same.
 */
#include <leetcode.h>


class Solution {
 public:
  int ladderLength(string beginWord, string endWord, vector<string> &wordList);
  int shortestPath(const std::vector<std::vector<int> >& g, const vector<string> &wordList, int t);
};
#endif //LEETCODE_127_WORD_LADDER_HH
