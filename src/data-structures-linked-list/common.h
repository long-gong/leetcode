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


template<typename T>
void deleten(T *&ptr) {
  delete ptr;
  ptr = NULL;
}
#endif //LEETCODE_COMMON_H
