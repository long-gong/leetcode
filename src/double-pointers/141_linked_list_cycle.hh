//
// Created by saber on 8/14/18.
//

#ifndef LEETCODE_141_LINKED_LIST_CYCLE_HH
#define LEETCODE_141_LINKED_LIST_CYCLE_HH
/*
 * Given a linked list, determine if it has a cycle in it.
 */

struct ListNode {
  int val;
  ListNode *next;
  explicit ListNode(int x) : val(x), next(nullptr){}
}; 


class LinkedListCycleBase {
 public:
  virtual bool operator()(ListNode *head) = 0;
};

class LinkedListCycle01 : public LinkedListCycleBase {
 public:
  bool operator()(ListNode *head) override;
};
#endif //LEETCODE_141_LINKED_LIST_CYCLE_HH
