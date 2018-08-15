//
// Created by saber on 8/15/18.
//

#ifndef LEETCODE_215_KTH_ELEMENT_HH
#define LEETCODE_215_KTH_ELEMENT_HH

/*
 * Find the kth largest element in an unsorted array. Note that it is the kth largest element
 * in the sorted order, not the kth distinct element.
 */
#include <leetcode.h>

class KthElementBase {
 public:
  virtual int operator()(std::vector<int>&& nums, int k) = 0;
};

class KthElement01 : public  KthElementBase {
 protected:
  std::random_device rd{};  //Will be used to obtain a seed for the random number engine
  std::mt19937 gen; //Standard mersenne_twister_engine seeded with rd()
 public:
  KthElement01() : gen(rd()) { }
  int rand_select(std::vector<int>::iterator first, std::vector<int>::iterator last, int n){
    auto len = std::distance(first, last);
    if ( len == 1 ) return *first;
    std::uniform_int_distribution<> dis(0, static_cast<int>(len - 1));
    auto pivot_ind = dis(gen);
    std::vector<int> left, right;
    auto pivot = first + pivot_ind;

    int cnt = 0;
    for (auto it = first;it != last; ++ it) {
      if ( *it == *pivot ) ++ cnt;
      else if ( *it > *pivot ) left.push_back(*it);
      else right.push_back(*it);
    }
    
    int llen = static_cast<int>(left.size());
    if ( llen == n - 1 || (llen < n - 1 && llen + cnt >= n) ) return *pivot;
    if ( llen > n - 1 ) {
      right.clear();
      return rand_select(left.begin(), left.end(), n);
    }

    left.clear();
    return rand_select(right.begin(), right.end(), n - llen - cnt);
  }
  int operator()(std::vector<int> &&nums, int k) override;
};
#endif //LEETCODE_215_KTH_ELEMENT_HH
