//
// Created by saber on 8/22/18.
//

#include "725_split_linked_list.hh"
vector<ListNode *> SplitLinkedList01::operator()(ListNode *root, int k) {
  vector<ListNode *>  v(k, nullptr);
  int n = 0;
  auto p = root;
  while ( p!= nullptr ) { p = p->next; ++ n; }

  int block = n / k;
  int remainder = n % k;

  p = root;
  int rel_block;

  for ( int b = 0;b < k;++ b ) {
    rel_block = ( remainder > 0 ? (block + 1) : block );
    -- remainder;
    auto q = p;
    for ( int m = 0;m < rel_block; ++ m, p = p->next ){
      if ( v[b] == nullptr ) {
        v[b] = p;
        q = p;
      } else {
        q->next = p;
        q = q->next;
      }
    }
    if ( q != nullptr) q->next = nullptr;
  }

  return v;
}
