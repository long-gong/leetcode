//
// Created by saber on 9/5/18.
//

#ifndef LEETCODE_138_COPY_LIST_WITH_RANDOM_POINTER_HH
#define LEETCODE_138_COPY_LIST_WITH_RANDOM_POINTER_HH
/*
 * A linked list is given such that each node contains an additional
 * random pointer which could point to any node in the list or null.
 */
#include <leetcode.h>
#include <common.h>

class Solution {
 public:
  RandomListNode *copyRandomList(RandomListNode *head);
};
#endif //LEETCODE_138_COPY_LIST_WITH_RANDOM_POINTER_HH
