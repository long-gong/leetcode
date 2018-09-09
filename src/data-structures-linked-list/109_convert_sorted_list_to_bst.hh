//
// Created by saber on 9/5/18.
//

#ifndef LEETCODE_109_CONVERT_SORTED_LIST_TO_BST_HH
#define LEETCODE_109_CONVERT_SORTED_LIST_TO_BST_HH
/*
 * Given a singly linked list where elements are sorted in ascending order,
 * convert it to a height balanced BST.

 * For this problem, a height-balanced binary tree is defined as a binary tree
 * in which the depth of the two subtrees of every node never differ by more than 1.
 */
#include <leetcode.h>
#include <common.h>

class Solution {
 public:
  TreeNode* sortedListToBST(ListNode* head);
  TreeNode* sortedListToBST(ListNode *first, ListNode *last);
};

#endif //LEETCODE_109_CONVERT_SORTED_LIST_TO_BST_HH
