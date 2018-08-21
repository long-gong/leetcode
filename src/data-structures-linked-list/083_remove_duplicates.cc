//
// Created by saber on 8/21/18.
//

#include "083_remove_duplicates.hh"
ListNode *RemoveDuplicates01::operator()(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return head;

  ListNode *pre = head, *cur = head->next;

  while(cur != nullptr){
    if ( cur->val == pre->val ) {
      pre->next = cur->next;
      delete( cur );
      cur = pre->next;
    } else {
      pre = cur;
      cur = cur->next;
    }
  }

  return head;
}
