
#ifndef _406_queue_reconstruction_HPP_
#define _406_queue_reconstruction_HPP_

/*
 * Suppose you have a random list of people standing in a queue. Each person is described
 * by a pair of integers (h, k), where h is the height of the person and k is the number
 * of people in front of this person who have a height greater than or equal to h. Write
 * an algorithm to reconstruct the queue.
 *
 * Note:
 * The number of people is less than 1,100.
 */

#include "leetcode.h"

class QueueReconstructionBase {
 public:
  virtual std::vector<std::pair<int, int> > operator()(std::vector<std::pair<int, int> >&& people) = 0;
};

class QueueReconstruction01 : public QueueReconstructionBase {
 public:
  std::vector<std::pair<int, int>> operator()(std::vector<std::pair<int, int> > &&people) override;
};

class QueueReconstruction01_v2 : public QueueReconstructionBase {
 private:
  int next_(const std::vector<pair<int, int> >& q, int start){
    for (int i = start;i < q.size();++ i)
      if (q[i].first == -1) return i;
    return -1;
  }
 public:
  vector<pair<int, int>> operator()(std::vector<std::pair<int, int> > &&people) override;
};

class QueueReconstruction02 : public QueueReconstructionBase {
 public:
  vector<pair<int, int>> operator()(std::vector<std::pair<int, int> > &&people) override;

};
#endif //_406_queue_reconstruction_HPP_
