//
// Created by saber on 9/10/18.
//

#include "145_binary_tree_postorder_traversal.hh"
vector<int> Solution::postorderTraversal(TreeNode *root) {
  vector<int> res;
  if ( root == nullptr ) return res;

  std::stack<std::pair<TreeNode*, uint8_t > > s;
  s.push({root, 0});

  while ( !s.empty() ){
    auto c = s.top();
    s.pop();
    if ( c.second == 1 ) res.push_back( c.first->val );
    else {
      s.push( {c.first, 1} );
      if ( c.first->right != nullptr ) s.push( {c.first->right, 0} );
      if ( c.first->left != nullptr ) s.push( {c.first->left, 0} );
    }

  }

  return res;
}
