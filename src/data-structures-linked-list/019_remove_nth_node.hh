//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_019_REMOVE_NTH_NODE_HH
#define LEETCODE_019_REMOVE_NTH_NODE_HH
/*
 * Given a linked list, remove the n-th node from the end of list and return its head.
 */
#include <leetcode.h>
#include "common.h"

class RemoveNthNodeBase {
 public:
  virtual ListNode*operator()(ListNode* head, int n) = 0;
};

class RemoveNthNode01 : public RemoveNthNodeBase {
 public:
  ListNode *operator()(ListNode *head, int n) override;
};
#endif //LEETCODE_019_REMOVE_NTH_NODE_HH
