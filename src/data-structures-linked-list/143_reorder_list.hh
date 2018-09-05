//
// Created by saber on 9/4/18.
//

#ifndef LEETCODE_143_REORDER_LIST_HH
#define LEETCODE_143_REORDER_LIST_HH
/*
 * Given a singly linked list L: L0→L1→…→Ln-1→Ln,
 * reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…
 * You may not modify the values in the list's nodes, only nodes itself may be changed.
 */
#include <leetcode.h>
#include <common.h>

class Solution {
 public:
  void reorderList(ListNode* head) ;
  std::pair<ListNode*,ListNode*> reverse(ListNode *first);
};

#endif //LEETCODE_143_REORDER_LIST_HH
