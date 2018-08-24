//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_024_SWAP_NODES_HH
#define LEETCODE_024_SWAP_NODES_HH
/*
 * Given a linked list, swap every two adjacent nodes and return its head.
 */
#include <leetcode.h>
#include "common.h"

class SwapNodeBase{
 public:
  virtual ListNode*operator()(ListNode *head) = 0;
};

class SwapNode01 : public SwapNodeBase {
 public:
  ListNode *operator()(ListNode *head) override;
};
#endif //LEETCODE_024_SWAP_NODES_HH
