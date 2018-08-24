//
// Created by saber on 8/21/18.
//

#include "445_add_numbers_II.hh"
ListNode *AddNumbersII01::operator()(ListNode *l1, ListNode *l2) {
  l1 = reverse(l1);
  l2 = reverse(l2);
  auto p1 = l1;
  auto p2 = l2;
  ListNode *p1_pre = nullptr;
  int carry = 0;
  while ( p1 != nullptr && p2 != nullptr ) {
    p1->val = (p1->val + p2->val + carry) ;
    carry = p1->val / 10;
    p1->val %= 10;
    p1_pre = p1;
    p1 = p1->next;
    p2 = p2->next;
  }

  if ( p1 != nullptr ) {
    p1->val += carry;
    carry = p1->val / 10;
    p1->val %= 10;
    p1_pre = p1;
  }
  if ( p2 != nullptr ) {
    p2->val += carry;
    carry = p2->val / 10;
    p2->val %= 10;
    p1_pre->next = p2;
    p1_pre = p2;
  }
  while ( carry > 0 ) {
    if ( p1_pre->next == nullptr ) {
      auto node = new ListNode(carry);
      p1_pre->next = node;
      carry = 0;
    } else {
      p1_pre->next->val += carry;
      carry = p1_pre->next->val / 10;
      p1_pre->next->val %= 10;
      p1_pre = p1_pre->next;
    }
  }

  return reverse(l1);
}

ListNode *AddNumbersIIBase::reverse(ListNode *&head, size_t& s) {
  s = 0;
  if ( head == nullptr ) return nullptr;
  ListNode *pre = nullptr, *cur = head;
  for ( ; cur != nullptr; ) {
    auto next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
    ++ s;
  }
  return pre;
}

ListNode *AddNumbersIIBase::reverse(ListNode *&head) {
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
ListNode *AddNumbersII02::operator()(ListNode *l1, ListNode *l2) {
  std::stack<int> v1, v2;
  auto p1 = l1;
  auto p2 = l2;
  int carry = 0;
  while ( p1 != nullptr ) { v1.push(p1->val); p1 = p1->next; }
  while ( p2 != nullptr ) { v2.push(p2->val); p2 = p2->next; }

  int a , b, c;
  auto newHead = new ListNode(-1);
  while ( !v1.empty() || !v2.empty() || carry > 0 ) {
    if ( v1.empty() ) { a = 0; }
    else { a = v1.top(); v1.pop(); }
    if ( v2.empty() ) { b = 0; }
    else { b = v2.top(); v2.pop(); }
    c = a + b + carry;
    auto node = new ListNode(c % 10);
    node->next = newHead->next;
    newHead->next = node;
    carry = c / 10;
  }

  auto head = newHead->next;
  delete( newHead );
  return head;
}
