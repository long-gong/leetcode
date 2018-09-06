//
// Created by saber on 9/5/18.
//

#include "203_remove_linked_list.hh"
ListNode *Solution::removeElements(ListNode *head, int val) {
  if ( head == nullptr ) return head;
  
  if ( head->val == val ) {
    auto tmp = head->next;
    delete( head );
    return tmp;
  }
  ListNode *ptr = head;
  while ( ptr->next != nullptr && ptr->next->val != val ) ptr = ptr->next;
  
  auto tmp = ptr->next;
  ptr->next = tmp->next;
  delete( tmp );
  
  return head;
}
