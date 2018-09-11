//
// Created by saber on 9/10/18.
//

#ifndef LEETCODE_DS_HPP
#define LEETCODE_DS_HPP

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
 };
#endif //LEETCODE_DS_HPP
