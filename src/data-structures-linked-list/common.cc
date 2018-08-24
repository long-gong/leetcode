//
// Created by saber on 8/21/18.
//
#include "common.h"
std::ostream &operator<<(std::ostream &os, const ListNode &head) {
  os << head.val ;
  ListNode *ptr = head.next;
  while ( ptr != nullptr ) {
    os << " -> " << ptr->val;
    ptr = ptr->next;
  }

  return os;
}
ListNode *ListNode::create(std::initializer_list<int> l) {
  ListNode *head = nullptr;
  ListNode *tail = nullptr;

  for ( auto it = l.begin();it != l.end();++ it ) {
    auto *ptr = new ListNode(*it);
    if ( head == nullptr ) {
      head = ptr;
      tail = ptr;
    } else {
      tail->next = ptr;
      tail = tail->next;
    }
  }
  return head;
}

size_t ListNode::delete_me(ListNode *&head) {
  size_t cnt = 0;
  auto ptr = head;
  while ( ptr != nullptr ) {
    deleten( ptr );
    ++ cnt;
  }
  return cnt;
}
bool ListNode::compare(ListNode *la, ListNode *lb) {
  ListNode *pa = la;
  ListNode *pb = lb;
  while ( pa != nullptr && pb != nullptr && pa->val == pb->val ) {
    pa = pa->next;
    pb = pb->next;
  }
  return ( pa == nullptr && pb == nullptr );
}
bool ListNode::compare(ListNode *la, std::initializer_list<int> l) {
  ListNode *lb = ListNode::create(l);
  auto r = compare(la, lb);
  ListNode::delete_me( lb );
  return r;
}
bool ListNode::compare(std::initializer_list<int> l, ListNode *lb) {
  return ListNode::compare(lb, l);
}
