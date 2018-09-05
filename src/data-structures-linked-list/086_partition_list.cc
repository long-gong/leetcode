//
// Created by saber on 9/4/18.
//

#include "086_partition_list.hh"
ListNode *Solution::partition(ListNode *head, int x) {
  if ( head == nullptr || head->next == nullptr ) return head;

  auto dummy = new ListNode(-1);
  dummy->next = head;

  ListNode *le = dummy;
  ListNode *ptr = dummy;
  for ( ;ptr->next != nullptr; ) {
    if ( ptr->next->val < x ) {
      if ( le != ptr ) {
        auto tmp = ptr->next;
        ptr->next = tmp->next;
        tmp->next = le->next;
        le->next = tmp;
      } else {
        ptr = ptr->next;
      }
      le = le->next;
    } else {
      ptr = ptr->next;
    }
  }

  head = dummy->next;
  delete( dummy );
  return head;
}
