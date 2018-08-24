//
// Created by saber on 8/22/18.
//

#ifndef LEETCODE_725_SPLIT_LINKED_LIST_HH
#define LEETCODE_725_SPLIT_LINKED_LIST_HH
/*
 * 
 */
#include <leetcode.h>
#include "common.h"

class SplitLinkedListBase {
 public:
  virtual std::vector<ListNode*> operator()(ListNode *head, int k) = 0;
};

class SplitLinkedList01 : public SplitLinkedListBase {
 public:
  vector<ListNode *> operator()(ListNode *root, int k) override;
};
#endif //LEETCODE_725_SPLIT_LINKED_LIST_HH
