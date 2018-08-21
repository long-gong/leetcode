//
// Created by saber on 8/21/18.
//

#include "206_reverse_linked_list.hh"
ListNode *ReverseLinkedList01::operator()(ListNode *head) {
  if ( head == nullptr ) return nullptr;
  if ( head->next == nullptr ) return head;
  auto next = head->next;
  auto reverse_remaining = (*this)(next);
  next->next = head;
  head->next = nullptr;
  return reverse_remaining;
}

ListNode *ReverseLinkedList02::operator()(ListNode *head) {
  if ( head == nullptr ) return nullptr;
  ListNode *pre = nullptr, *cur = head;
  for ( ; cur != nullptr; ) {
    auto next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
