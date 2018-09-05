//
// Created by saber on 9/4/18.
//

#include "092_reverse_linked_list_II.hh"
ListNode *Solution::reverseBetween(ListNode *head, int m, int n) {
  if ( m == n ) return head;
  auto dummy = new ListNode(-1);
  dummy->next = head;
  int cnt = 1;
  ListNode *ptr = dummy;
  while ( cnt != m ) {
    ptr = ptr->next;
    ++ cnt;
  }

  auto p = reverse(ptr->next, n - m);
  ptr->next = p.first;

  head = dummy->next;
  delete( dummy );

  return head;

}

std::pair<ListNode*/* head */, ListNode */* tail */> Solution::reverse(ListNode *first, int k) {
  if ( k == 0 ) return {first, first};
  auto p = reverse( first->next, k - 1 );
  first->next = p.second->next;
  p.second->next = first;
  p.second = first;
  return p;
}
