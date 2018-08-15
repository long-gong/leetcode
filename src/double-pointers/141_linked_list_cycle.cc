//
// Created by saber on 8/14/18.
//

#include "141_linked_list_cycle.hh"
bool LinkedListCycle01::operator()(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return false;
  ListNode *slow = head, *fast = head;
  do {
    slow = slow->next;
    fast = fast->next;
    fast = ( fast == nullptr ? nullptr : fast->next);
    if ( slow == fast ) return true;
  } while (slow != nullptr && fast != nullptr );
  
  return false;
}
