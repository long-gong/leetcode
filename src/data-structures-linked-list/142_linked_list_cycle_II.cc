//
// Created by saber on 9/4/18.
//

#include "142_linked_list_cycle_II.hh"
ListNode *Solution::detectCycle(ListNode *head) {
  if ( head == nullptr ) return nullptr;

  ListNode *fast = head;
  ListNode *slow = head;

  bool containCycle = false;
  while ( fast != nullptr && fast->next != nullptr ) {
    fast = fast->next->next;
    slow = slow->next;
    if ( fast == slow ) {
      containCycle = true;
      break;
    }
  }
  if (!containCycle) return nullptr;
  fast = head;
  while ( fast != slow ) {
    fast = fast->next;
    slow = slow->next;
  }

  return fast;
}
