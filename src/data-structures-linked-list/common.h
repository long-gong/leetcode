//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_COMMON_H
#define LEETCODE_COMMON_H

#include <iostream>
#include <initializer_list>

struct ListNode {
  int val;
  ListNode *next;
  explicit ListNode(int x) : val(x), next(nullptr) {}
 public:
  friend std::ostream& operator<<(std::ostream& os, const ListNode& head);
  static ListNode* create(std::initializer_list<int> l);
  static size_t delete_me(ListNode *&head);
  static bool compare(ListNode *la, ListNode *lb);
  static bool compare(ListNode *la, std::initializer_list<int> l);
  static bool compare(std::initializer_list<int> l, ListNode *lb);
};

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
  explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct RandomListNode {
       int label;
       RandomListNode *next, *random;
       explicit RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

template<typename T>
void deleten(T *&ptr) {
  delete ptr;
  ptr = NULL;
}
#endif //LEETCODE_COMMON_H
