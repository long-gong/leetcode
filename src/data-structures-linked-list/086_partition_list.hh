//
// Created by saber on 9/4/18.
//

#ifndef LEETCODE_086_PARTITION_LIST_HH
#define LEETCODE_086_PARTITION_LIST_HH
/*
 * Given a linked list and a value x, partition it such that all nodes
 * less than x come before nodes greater than or equal to x.
 *
 * You should preserve the original relative order of the nodes in each of the two partitions.
 */
#include <leetcode.h>
#include <common.h>
class Solution {
 public:
  ListNode* partition(ListNode* head, int x) ;
};
#endif //LEETCODE_086_PARTITION_LIST_HH
