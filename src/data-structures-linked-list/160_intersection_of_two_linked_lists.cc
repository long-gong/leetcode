//
// Created by saber on 8/20/18.
//

#include "160_intersection_of_two_linked_lists.hh"
ListNode *IntersectionTwoLinkedList01::operator()(ListNode *headA, ListNode *headB) {
  if ( headA == nullptr || headB == nullptr ) return nullptr;
  if ( headA == headB ) return headA;
  if ( headB->next == nullptr ) return nullptr;
  ListNode *tailA = headA;

  while ( tailA->next != nullptr ) tailA = tailA->next;
  if ( headB->next == nullptr ) {
    return (headB == tailA ? tailA : nullptr);
  }

  tailA->next = headA;

  for ( ListNode *fast = headB->next->next, *slow = headB->next; fast != nullptr && fast->next != nullptr; fast = fast->next->next, slow = slow->next ) {
      if ( fast == slow ) {
        for ( ListNode *ptr = headB; ptr != slow; ptr = ptr->next, slow = slow->next );
        tailA->next = nullptr;
        return slow;
      }
  }
  tailA->next = nullptr;

  return nullptr;

}
