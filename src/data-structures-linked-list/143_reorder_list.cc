//
// Created by saber on 9/4/18.
//

#include "143_reorder_list.hh"
void Solution::reorderList(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return ;

  ListNode *f = head;
  auto dummy = new ListNode(-1);
  ListNode *s = dummy;
  dummy->next = head;

  while ( f != nullptr && f->next != nullptr ) {
    f = f->next->next;
    s = s->next;
  }
  assert( s != nullptr );
  auto hp = reverse(s->next);
  //std::cout << (*(hp.first)) << std::endl;
  s->next = nullptr;
  //std::cout << (*head) << std::endl;
  f = head;
  s = hp.first;

  ListNode *ptr = dummy;
  while ( f != nullptr && s != nullptr ) {
    ptr->next = f;
    f = f->next;
    ptr->next->next = s;
    s = s->next;
    ptr = ptr->next->next;
  }
  if ( f != nullptr ) ptr->next = f;

  delete( dummy );
  //std::cout << (*head) << std::endl;
}

std::pair<ListNode *, ListNode *> Solution::reverse(ListNode *first) {
  if ( first->next == nullptr ) return {first, first};
  auto p = reverse(first->next);
  first->next = p.second->next;
  p.second->next = first;
  p.second = first;
  return p;
}
