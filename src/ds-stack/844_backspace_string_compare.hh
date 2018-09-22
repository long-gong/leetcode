//
// Created by saber on 9/22/18.
//

#ifndef LEETCODE_844_BACKSPACE_STRING_COMPARE_HH
#define LEETCODE_844_BACKSPACE_STRING_COMPARE_HH
/*
 * Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.
 */
#include <leetcode.h>
class Solution {
 public:
  bool backspaceCompare(string S, string T);
};

class SolutionSteal {
 public:
  bool backspaceCompare(string S, string T) {
    eval_bs(S);
    eval_bs(T);

    return S == T;
  }

  void eval_bs(string& s){
    int pos = 0, n = s.size();
    for(int i=0; i < n; i++){
      char c = s[i];
      switch(c){
        case '#':
          pos = max(0, pos - 1);
          break;
        default:
          s[pos++] =c;
          break;
      }
    }

    s.resize(pos);
  }
};
#endif //LEETCODE_844_BACKSPACE_STRING_COMPARE_HH
