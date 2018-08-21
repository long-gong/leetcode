//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_206_REVERSE_LINKED_LIST_HH
#define LEETCODE_206_REVERSE_LINKED_LIST_HH
#include <leetcode.h>
#include "common.h"

class ReverseLinkedListBase {
 public:
  virtual ListNode *operator()(ListNode* head) = 0;
};

class ReverseLinkedList01 : public ReverseLinkedListBase {
 public:
  ListNode *operator()(ListNode *head) override;
};

class ReverseLinkedList02 : public ReverseLinkedListBase {
 public:
  ListNode *operator()(ListNode *head) override;
};
#endif //LEETCODE_206_REVERSE_LINKED_LIST_HH
