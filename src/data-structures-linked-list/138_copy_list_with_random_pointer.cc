//
// Created by saber on 9/5/18.
//

#include "138_copy_list_with_random_pointer.hh"
RandomListNode *Solution::copyRandomList(RandomListNode *head) {
  if (head == nullptr) return head;
  if (head->next == nullptr) {
    auto node = new RandomListNode(head->label);
    node->next = nullptr;
    node->random = (head->random == nullptr ? nullptr : node);
    return node;
  }
  RandomListNode *ptr = head;
  while (ptr != nullptr) {
    auto node = new RandomListNode(ptr->label);
    node->next = ptr->next;
    node->random = ptr->random;
    ptr->next = node;
    ptr = ptr->next->next;
  }

  ptr = head->next;

  while (ptr != nullptr) {

    ptr->random = (ptr->random == nullptr ? nullptr : ptr->random->next);

    ptr = (ptr->next == nullptr ? nullptr : ptr->next->next);
  }

  RandomListNode *newHead = head->next;
  ptr = newHead;
  RandomListNode *optr = head;
  while (ptr != nullptr && ptr->next != nullptr) {
    optr->next = optr->next->next;
    ptr->next = ptr->next->next;
    ptr = ptr->next;
    optr = optr->next;
  }
  if (optr->next != nullptr) optr->next = nullptr;
  return newHead;
}
