//
// Created by saber on 9/5/18.
//

#include "148_sort_list.hh"
ListNode *Solution::sortList(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return head;
  return mergesort(head, nullptr);
}
ListNode* Solution::mergesort(ListNode *first, ListNode *last) {
  if ( first->next == last ) {
    first->next = nullptr;
    return first;
  }
  ListNode *f = first;
  ListNode *s = first;
  while ( f != last && f->next != last ) {
    f = f->next->next;
    s = s->next;
  }

  auto p1 = mergesort(first, s);
  auto p2 = mergesort(s, last);

  auto h =  new ListNode(-1);
  auto ptr = h;
  while ( p1 != nullptr && p2 != nullptr ) {
    if ( p1->val < p2->val ) {
      ptr->next = p1;
      p1 = p1->next;
    } else {
      ptr->next = p2;
      p2 = p2->next;
    }
    ptr = ptr->next;
  }
  ListNode *p = ( p1 != nullptr ? p1 : p2 );
  ptr->next = p;
  ptr = h->next;
  delete( h );
  return ptr;
}
