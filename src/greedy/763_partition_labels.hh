
#ifndef _763_partition_labels_HPP_
#define _763_partition_labels_HPP_
/*
 * A string S of lowercase letters is given. We want to partition this string into as
 * many parts as possible so that each letter appears in at most one part, and return
 * a list of integers representing the size of these parts.
 */

#include "leetcode.h"

class PartitionLabelsBase {
 public:
  virtual std::vector<int> operator()(std::string S) = 0;
};

class PartitionLabels01 : public PartitionLabelsBase {
 public:
  std::vector<int> operator()(std::string S) override;
};
#endif //_763_partition_labels_HPP_
