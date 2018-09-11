//
// Created by saber on 9/10/18.
//

#include "144_binary_tree_preorder_traversal.hh"
vector<int> Solution::preorderTraversal(TreeNode *root) {
  vector<int> res;
  if ( root == nullptr ) return res;

  std::stack<TreeNode*> s;
  s.push(root);

  while (!s.empty()) {
    auto c = s.top();
    s.pop();
    res.push_back(c->val);
    if ( c->right != nullptr ) s.push( c->right );
    if ( c->left != nullptr ) s.push( c->left );
  }

  return res;
}
