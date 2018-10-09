//
// Created by saber on 9/23/18.
//

#ifndef LEETCODE_187_REPEATED_DNS_SEQUENCES_HH
#define LEETCODE_187_REPEATED_DNS_SEQUENCES_HH
/*
 # All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for
 # example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated
 # sequences within the DNA.
 #
 # Write a function to find all the 10-letter-long sequences (substrings) that occur
 # more than once in a DNA molecule.
 */

#include <leetcode.h>
class Solution {
 public:
  vector<string> findRepeatedDnaSequences(string s) ;
};



class SolutionSteal {
public:
  vector<string> findRepeatedDnaSequences(string s) {
    if(s.size() <= 10) return vector<string>();
    bitset<1<<20> b1;  //记录之前有没有过
    bitset<1<<20> b2;  //记录之前有没有已经输出了
    int a = (1 << 20) - 1;  //a设置为20个1，作为掩码
    int hash = 0;
    vector<string> ans;

    //初始化，将最先十个字母都放好
    for(int i = 0; i < 10; i++){
      hash = (hash << 2) + f(s[i]);
    }
    b1.set(hash);

    for(int i = 10; i < s.size(); i++){
      hash = ((hash << 2) & a) + f(s[i]);
      if(!b1[hash]){
        b1.set(hash);
      }
      else if(!b2[hash]){
        ans.push_back(s.substr(i-9, 10));
        b2.set(hash);
      }
      else{
        continue;
      }
    }
    return ans;
  }

  int f(char c){
    switch(c){
    case 'A' : return 0;
    case 'C' : return 1;
    case 'G' : return 2;
    case 'T' : return 3;
    }
  }
};

#endif //LEETCODE_187_REPEATED_DNS_SEQUENCES_HH
