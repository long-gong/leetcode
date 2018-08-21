//
// Created by saber on 8/21/18.
//

#include "021_merge_two_linked_list.hh"
ListNode *MergeTwoLinkedList01::operator()(ListNode *l1, ListNode *l2) {
  if ( l1 == nullptr ) return l2;
  if ( l2 == nullptr ) return l1;

  ListNode *head, *ptr;

  if (l1->val < l2->val) {
    head = l1;
    l1 = l1->next;
  } else {
    head = l2;
    l2 = l2->next;
  }

  ptr = head;
  while ( l1 != nullptr && l2 != nullptr ) {
    if (l1->val < l2->val) {
      ptr->next = l1;
      l1 = l1->next;
    } else {
      ptr->next = l2;
      l2 = l2->next;
    }
    ptr = ptr->next;
  }
  if ( l1 != nullptr ) ptr->next = l1;
  if ( l2 != nullptr ) ptr->next = l2;

  return head;
}
