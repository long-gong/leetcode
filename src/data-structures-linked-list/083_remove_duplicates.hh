//
// Created by saber on 8/21/18.
//

#ifndef LEETCODE_083_REMOVE_DUPLICATES_HH
#define LEETCODE_083_REMOVE_DUPLICATES_HH
#include <leetcode.h>
#include "common.h"

class RemoveDuplicatesBase {
 public:
  virtual ListNode *operator()(ListNode *head) = 0;
};

class RemoveDuplicates01  : public RemoveDuplicatesBase {
 public:
  ListNode *operator()(ListNode *head) override;
};
#endif //LEETCODE_083_REMOVE_DUPLICATES_HH
