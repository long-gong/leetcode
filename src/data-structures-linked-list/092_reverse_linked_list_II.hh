//
// Created by saber on 9/4/18.
//

#ifndef LEETCODE_092_REVERSE_LINKED_LIST_II_HH
#define LEETCODE_092_REVERSE_LINKED_LIST_II_HH
/*
 * Reverse a linked list from position m to n. Do it in one-pass.
 */
#include <leetcode.h>
#include <common.h>

class Solution {
 public:
  ListNode* reverseBetween(ListNode* head, int m, int n);
  std::pair<ListNode*/* head */, ListNode */* tail */> reverse(ListNode* first, int k);
};
#endif //LEETCODE_092_REVERSE_LINKED_LIST_II_HH
