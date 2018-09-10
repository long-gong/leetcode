//
// Created by saber on 9/9/18.
//

#ifndef LEETCODE_703_KTH_LARGEST_ELEMENT_IN_A_STREAM_HH
#define LEETCODE_703_KTH_LARGEST_ELEMENT_IN_A_STREAM_HH
/*
 * Design a class to find the kth largest element in a stream. Note that it is the kth
 * largest element in the sorted order, not the kth distinct element.
 *
 * Your KthLargest class will have a constructor which accepts an integer k and an integer
 * array nums, which contains initial elements from the stream. For each call to the
 * method KthLargest.add, return the element representing the kth largest element in
 * the stream.
 */
#include <leetcode.h>
class KthLargest {
  std::vector<int> _k_largest;
  int _k;
 public:
  KthLargest(int k, vector<int> nums)  : _k(k){
    int i;
    for (i = 0;i < std::min(k, (int)nums.size()); ++ i) _k_largest.push_back(nums[i]);
    if ( !_k_largest.empty() ) std::make_heap(_k_largest.begin(),_k_largest.end(), std::greater<>());
    if ( i < nums.size() ) {
      for ( ;i < nums.size();++ i) {
        if ( nums[i] > _k_largest.front() ) {
          std::pop_heap(_k_largest.begin(), _k_largest.end(),std::greater<>());
          _k_largest.back() = nums[i];
          std::push_heap(_k_largest.begin(), _k_largest.end(),std::greater<>());
        }
      }
    }
  }

  int add(int val) {
    if ( _k_largest.size() < _k ) {
      _k_largest.push_back(val);
      std::push_heap(_k_largest.begin(), _k_largest.end(), std::greater<>());
    }
    else if ( val > _k_largest.front() ) {
      std::pop_heap(_k_largest.begin(), _k_largest.end(), std::greater<>());
      _k_largest.back() = val;
      std::push_heap(_k_largest.begin(), _k_largest.end(), std::greater<>());
    }
    return _k_largest.front();
  }
};
#endif //LEETCODE_703_KTH_LARGEST_ELEMENT_IN_A_STREAM_HH
