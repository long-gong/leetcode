//
// Created by saber on 8/22/18.
//

#include "328_odd_even_linked_list.hh"
ListNode *OddEvenLinkedList01::operator()(ListNode *head) {
  if ( head == nullptr ) return nullptr;

  ListNode *odd = head;
  ListNode *o = head;
  ListNode *e = head->next;
  head = e;


  while ( e != nullptr && e->next != nullptr ) {
    o->next = e->next;
    o = e->next;
    e->next = o->next;
    e = e->next;
  }

  o->next = head;

  return odd;
}
