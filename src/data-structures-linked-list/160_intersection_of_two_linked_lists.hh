//
// Created by saber on 8/20/18.
//

#ifndef LEETCODE_160_INTERSECTION_OF_TWO_LINKED_LISTS_HH
#define LEETCODE_160_INTERSECTION_OF_TWO_LINKED_LISTS_HH
/*
 * Write a program to find the node at which the intersection of two singly linked lists begins.
 */
#include <leetcode.h>
#include "common.h"


class IntersectionTwoLinkedListBase {
 public:
  virtual ListNode *operator()(ListNode *headA, ListNode *headB) = 0;
};

class IntersectionTwoLinkedList01 : public IntersectionTwoLinkedListBase {
 public:
  ListNode *operator()(ListNode *headA, ListNode *headB) override;
};
#endif //LEETCODE_160_INTERSECTION_OF_TWO_LINKED_LISTS_HH
