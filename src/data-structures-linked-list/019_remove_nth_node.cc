//
// Created by saber on 8/21/18.
//

#include "019_remove_nth_node.hh"
ListNode *RemoveNthNode01::operator()(ListNode *head, int n) {
  auto fptr = head;
  ListNode *sptr = nullptr;
  int cnt = 1;
  for (;fptr->next != nullptr;fptr = fptr->next){
    if ( cnt == n ) sptr = (sptr == nullptr ? head : sptr->next);
    else ++ cnt;
  }
  if ( sptr != nullptr ) {
    auto tmp = sptr->next;
    sptr->next = sptr->next->next;
    delete( tmp );
  } else {
    auto tmp = head;
    head = head->next;
    delete( tmp );
  }
  return head;
}
