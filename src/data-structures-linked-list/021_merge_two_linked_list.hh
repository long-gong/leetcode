//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_021_MERGE_TWO_LINKED_LIST_HH
#define LEETCODE_021_MERGE_TWO_LINKED_LIST_HH
#include <leetcode.h>
#include "common.h"

class MergeTwoLinkedListBase {
 public:
  virtual ListNode*operator()(ListNode *l1, ListNode *l2) = 0;
};

class MergeTwoLinkedList01 : public MergeTwoLinkedListBase {
 public:
  ListNode *operator()(ListNode *l1, ListNode *l2) override;
};
#endif //LEETCODE_021_MERGE_TWO_LINKED_LIST_HH
