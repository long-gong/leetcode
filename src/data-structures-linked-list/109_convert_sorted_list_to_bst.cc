//
// Created by saber on 9/5/18.
//

#include "109_convert_sorted_list_to_bst.hh"
TreeNode *Solution::sortedListToBST(ListNode *head) {
  if ( head == nullptr ) return nullptr;

  return sortedListToBST(head, nullptr);
}
TreeNode *Solution::sortedListToBST(ListNode *first, ListNode *last) {
  if ( first->next == last ) return new TreeNode(first->val);
  ListNode *fast = first, *slow = first;

  while ( fast != last && fast->next != last ) {
    fast = fast->next->next;
    slow = slow->next;
  }

  auto left = sortedListToBST(first, slow);
  auto right = (slow->next == last ? nullptr : sortedListToBST(slow->next, last));
  auto root = new TreeNode(slow->val);
  root->left = left;
  root->right = right;
  return root;
}
