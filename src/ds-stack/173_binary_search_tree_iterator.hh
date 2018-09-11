//
// Created by saber on 9/10/18.
//

#ifndef LEETCODE_173_BINARY_SEARCH_TREE_ITERATOR_HH
#define LEETCODE_173_BINARY_SEARCH_TREE_ITERATOR_HH
/*
 * Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.
 * Calling next() will return the next smallest number in the BST.
 */
#include <leetcode.h>
#include <ds.hpp>
class BSTIterator {
  int _next;
  std::vector<int> _vals;
 public:
  BSTIterator(TreeNode *root) : _next(0){
    if ( root == nullptr ) return;

    std::stack<std::pair<TreeNode*, uint8_t > > s;
    s.push({root, 0});

    while ( !s.empty() ) {
      auto c = s.top();
      s.pop();
      if ( c.second == 1 ) _vals.push_back(c.first->val);
      else {
        if ( c.first->right != nullptr ) s.push({c.first->right, 0});
        s.push( {c.first, 1} );
        if ( c.first->left != nullptr ) s.push({c.first->left, 0});
      }
    }

  }

  /** @return whether we have a next smallest number */
  bool hasNext() {
    return (_next < _vals.size());
  }

  /** @return the next smallest number */
  int next() {
    return _vals[_next++];
  }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
#endif //LEETCODE_173_BINARY_SEARCH_TREE_ITERATOR_HH
