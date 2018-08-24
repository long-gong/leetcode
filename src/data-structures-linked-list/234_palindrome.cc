//
// Created by saber on 8/22/18.
//

#include "234_palindrome.hh"
bool Palindrome01::operator()(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return true;

  std::vector<int> v;
  auto p = head;

  while ( p != nullptr ) { v.push_back( p->val ); p = p->next; }

  p = head;
  for ( size_t k = v.size() - 1;k >= v.size() / 2; -- k ) {
    if ( v[k] != p->val ) return false;
    p = p->next;
  }

  return true;
}
size_t Palindrome02::length(ListNode *head) {
  size_t n = 0;
  auto p = head;

  while ( p != nullptr ) {
    p = p->next;
    ++ n;
  }
  return n;
}
ListNode *Palindrome02::reverse(ListNode *head) {
  if ( head == nullptr ) return nullptr;
  ListNode *pre = nullptr, *cur = head;
  for ( ; cur != nullptr; ) {
    auto next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre;
}
bool Palindrome02::operator()(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return true;
  auto len = length( head );
  auto p = head;

  size_t n = 1;
  while ( n < len / 2 ) {
    p = p->next;
    ++ n;
  }
  auto q = reverse(p->next);
  auto s = head;
  while ( s != p && s->val == q->val ) {
    s = s->next;
    q = q->next;
  }

  if ( s != p ) return false;
  else {
    return ( q == nullptr || q->val == s->val );
  }
}
