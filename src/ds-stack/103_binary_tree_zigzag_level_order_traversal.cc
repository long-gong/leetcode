//
// Created by saber on 9/10/18.
//

#include "103_binary_tree_zigzag_level_order_traversal.hh"
vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *root) {
  vector<vector<int>> res;
  if ( root == nullptr ) return res;
  std::stack<TreeNode*> s1, s2;
  s1.push(root);

  int cnt = 0;

  while ( !(s1.empty() && s2.empty() )) {
      std::vector<int> row;
      if ( cnt % 2 == 0 ) {
        while (!s1.empty()) {
          auto c = s1.top();
          s1.pop();
          row.push_back(c->val);
          if (c->left != nullptr) s2.push(c->left);
          if (c->right != nullptr) s2.push(c->right);
        }
      } else {
        while (!s2.empty()) {
          auto c = s2.top();
          s2.pop();
          row.push_back(c->val);
          if (c->right != nullptr) s1.push(c->right);
          if (c->left != nullptr) s1.push(c->left);
        }
      }

      res.push_back(row);

      ++ cnt;
  }

  return res;
}
