//
// Created by saber on 9/10/18.
//

#include "094_binary_tree_inorder_traversal.hh"
vector<int> Solution::inorderTraversal(TreeNode *root) {
    vector<int> res;
    if ( root == nullptr ) return res;

    std::stack<std::pair<TreeNode*, uint8_t > > s;
    s.push({root, 0});

    while ( !s.empty() ) {
      auto c = s.top();
      s.pop();
      if ( c.second == 1 ) res.push_back(c.first->val);
      else {
        if ( c.first->right != nullptr ) s.push({c.first->right, 0});
        s.push( {c.first, 1} );
        if ( c.first->left != nullptr ) s.push({c.first->left, 0});
      }
    }
    return res;
}
