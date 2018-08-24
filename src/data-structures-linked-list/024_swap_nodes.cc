//
// Created by saber on 8/21/18.
//

#include "024_swap_nodes.hh"
ListNode *SwapNode01::operator()(ListNode *head) {
  if ( head == nullptr ) return head;
  auto *dummyHead = new ListNode(-1);
  ListNode *f, *s, *t;
  f = dummyHead;
  dummyHead->next = head;
  s = head->next;

  while ( s != nullptr ) {
    t = s->next;
    s->next = f->next;
    f->next = s;
    s->next->next = t;
    f = f->next;
    s = t;
    if ( s != nullptr ) { s = s->next; f = f->next; }
  }

  head = dummyHead->next;
  delete( dummyHead );
  return head;
}
