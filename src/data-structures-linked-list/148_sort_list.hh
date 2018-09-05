//
// Created by saber on 9/5/18.
//

#ifndef LEETCODE_148_SORT_LIST_HH
#define LEETCODE_148_SORT_LIST_HH
/*
 * Sort a linked list in O(n log n) time using constant space complexity.
 */
#include <leetcode.h>
#include <common.h>

class Solution {
 public:
  ListNode* sortList(ListNode* head);
  ListNode* mergesort(ListNode *first, ListNode *last);
};
#endif //LEETCODE_148_SORT_LIST_HH
