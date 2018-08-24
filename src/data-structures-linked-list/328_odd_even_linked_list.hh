//
// Created by saber on 8/22/18.
//

#ifndef LEETCODE_328_ODD_EVEN_LINKED_LIST_HH
#define LEETCODE_328_ODD_EVEN_LINKED_LIST_HH
/*
 * Given a singly linked list, group all odd nodes together followed by the even nodes. 
 * Please note here we are talking about the node number and not the value in the nodes.
 * 
 * You should try to do it in place. The program should run in O(1) space complexity 
 * and O(nodes) time complexity.
 */
#include <leetcode.h>
#include "common.h"

class OddEvenLinkedListBase {
 public:
  virtual ListNode *operator()(ListNode *head) = 0;
};


class OddEvenLinkedList01 : public OddEvenLinkedListBase {
 public:
  ListNode *operator()(ListNode *head) override;
};
#endif //LEETCODE_328_ODD_EVEN_LINKED_LIST_HH
