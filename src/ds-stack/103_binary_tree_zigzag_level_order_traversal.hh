//
// Created by saber on 9/10/18.
//

#ifndef LEETCODE_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_HH
#define LEETCODE_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_HH
/*
 * Given a binary tree, return the zigzag level order traversal of its nodes' values.
 * (ie, from left to right, then right to left for the next level and alternate between).
 */
#include <leetcode.h>
#include <ds.hpp>
class Solution {
 public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) ;
};
#endif //LEETCODE_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_HH
