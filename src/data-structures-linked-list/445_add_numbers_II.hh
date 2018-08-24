//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_445_ADD_NUMBERS_II_HH
#define LEETCODE_445_ADD_NUMBERS_II_HH
/*
 * You are given two non-empty linked lists representing two non-negative integers.
 * The most significant digit comes first and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the number
 * 0 itself.
 *
 * Follow up:
 * What if you cannot modify the input lists? In other words, reversing the lists is
 * not allowed.
 */
#include <leetcode.h>
#include "common.h"

class AddNumbersIIBase {
 public:
  static ListNode *reverse(ListNode *&head);
  static ListNode *reverse(ListNode *&head, size_t& s);
  virtual ListNode*operator()(ListNode *l1, ListNode *l2) = 0;
};

class AddNumbersII01 : public AddNumbersIIBase {
 public:
  ListNode *operator()(ListNode *l1, ListNode *l2) override;
};

class AddNumbersII02 : public AddNumbersIIBase {
 public:
  ListNode *operator()(ListNode *l1, ListNode *l2) override;
};
#endif //LEETCODE_445_ADD_NUMBERS_II_HH
