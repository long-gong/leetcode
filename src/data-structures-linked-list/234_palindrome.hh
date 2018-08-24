//
// Created by saber on 8/22/18.
//

#ifndef LEETCODE_234_PALINDROME_HH
#define LEETCODE_234_PALINDROME_HH
/*
 * Given a singly linked list, determine if it is a palindrome.
 */
#include <leetcode.h>
#include "common.h"

class PalindromeBase {
 public:
  virtual bool operator()(ListNode* head) = 0;
};

class Palindrome01 : public PalindromeBase {
 public:
  bool operator()(ListNode *head) override;
};

class Palindrome02 : public PalindromeBase {
 public:
  size_t length(ListNode *head);
  ListNode* reverse(ListNode *head);
  bool operator()(ListNode *head) override;
};
#endif //LEETCODE_234_PALINDROME_HH
