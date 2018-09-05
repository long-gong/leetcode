//
// Created by saber on 9/4/18.
//

#include "082_remove_duplicates_from_sorted_list_II.hh"
ListNode *Solution::deleteDuplicates(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return head;
  
  auto *dummy = new ListNode(-1);
  dummy->next = head;
  ListNode *pre = dummy;
  ListNode *fast = head->next;
  ListNode *slow = head;
  
  while ( fast != nullptr ) {
    while ( fast != nullptr && fast->val == slow->val ) {
      auto tmp = slow;
      slow = fast;
      fast = fast->next;
      delete ( tmp );
    }
    if ( pre->next != slow ){
      // duplicates
      pre->next = fast;
      delete( slow );
      if ( fast == nullptr ) {
        break;
      } else {
        slow = fast;
        fast = fast->next;
      }
    } else {
      pre = slow;
      slow = fast;
      assert( fast != nullptr );
      fast = fast->next;
    }
  }
  
  head = dummy->next;
  delete( dummy );
  
  return head;
}
