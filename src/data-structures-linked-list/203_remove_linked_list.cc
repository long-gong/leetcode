//
// Created by saber on 9/5/18.
//

#include "203_remove_linked_list.hh"
ListNode *Solution::removeElements(ListNode *head, int val) {
  if ( head == nullptr ) return head;

  ListNode *tmp = nullptr;
  while( head != nullptr && head->val == val ) {
    tmp = head;
    head = head->next;
    delete tmp;
  }
  if ( head == nullptr ) return head;
  ListNode *ptr = head;
  while ( ptr->next != nullptr ) {
    if ( ptr->next->val != val ) ptr = ptr->next;
    else {
      tmp = ptr->next;
      ptr->next = tmp->next;
      delete tmp;
    }
  }

  return head;
}
