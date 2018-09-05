//
// Created by saber on 9/3/18.
//

#include "061_rotate_list.hh"
ListNode *Solution::rotateRight(ListNode *head, int k) {
  if ( head == nullptr ) return nullptr;
  if ( k == 0 || head->next == nullptr ) return head;

  ListNode *p1, *p2 = nullptr;
  p1 = head;

  int cnt = 1;
  while ( p1->next != nullptr ) {
    if ( cnt >= k ) p2 = ( p2 == nullptr ? head : p2->next );
    ++ cnt;
    p1 = p1->next;
  }

  if ( cnt <= k ) {
    k = (k % cnt);
    if ( k == 0 ) return head;
    cnt = 1;
    p1 = head;
    p2 = nullptr;
    while ( p1->next != nullptr ) {
      if ( cnt >= k ) p2 = ( p2 == nullptr ? head : p2->next );
      ++ cnt;
      p1 = p1->next;
    }
  }

  assert( p2 != nullptr );
  ListNode *newHead = p2->next;
  p2->next = nullptr;
  p1->next = head;

  return newHead;
}
