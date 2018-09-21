//
// Created by saber on 9/20/18.
//

#ifndef LEETCODE_880_DECODED_STRING_AT_INDEX_HH
#define LEETCODE_880_DECODED_STRING_AT_INDEX_HH
/*
 * An encoded string S is given.  To find and write the decoded string to a tape, the 
 * encoded string is read one character at a time and the following steps are taken:
 * 
 *     If the character read is a letter, that letter is written onto the tape.
 *     If the character read is a digit (say d), the entire current tape is repeatedly 
 * written d-1 more times in total.
 * 
 * Now for some encoded string S, and an index K, find and return the K-th letter (1 
 * indexed) in the decoded string.
 */
#include <leetcode.h>

class Solution {
 public:
  bool isLetter(char ch) {
    return ( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ); 
  }
  string decodeAtIndex(string S, int K) ;
};
#endif //LEETCODE_880_DECODED_STRING_AT_INDEX_HH
