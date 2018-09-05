//
// Created by saber on 9/5/18.
//

#include "147_insertion_sort_list.hh"
ListNode *Solution::insertionSortList(ListNode *head) {
  if ( head == nullptr || head->next == nullptr ) return head;
  auto dummy = new ListNode(std::numeric_limits<int>::min());
  dummy->next = head;

  ListNode *ptr = head;
  while ( ptr->next != nullptr ) {
    auto tmp = dummy;
    while ( tmp->next->val < ptr->next->val ) {
      tmp = tmp->next;
    }
    if ( tmp != ptr ) {
      auto temp = ptr->next->next;
      ptr->next->next = tmp->next;
      tmp->next = ptr->next;
      ptr->next = temp;
    } else {
      ptr = ptr->next;
    }
  }

  head = dummy->next;
  delete( dummy );
  return head;
}
//ListNode* dummy = new ListNode(0);
//dummy -> next = head;
//ListNode *pre = dummy, *cur = head;
//while (cur) {
//if ((cur -> next) && (cur -> next -> val < cur -> val)) {
//while (pre -> next -> val < cur -> next -> val) {
//pre = pre -> next;
//}
//ListNode* temp = pre -> next;
//pre -> next = cur -> next;
//cur -> next = cur -> next -> next;
//pre -> next -> next = temp;
//
//pre = dummy;
////cur = cur->next;
//}
//else {
//cur = cur -> next;
//}
//}
//return dummy -> next;