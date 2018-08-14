//
// Created by saber on 8/13/18.
//

#include "088_merge_sorted_array.hh"
void MergeSortedArray01::operator()(std::vector<int> &nums1, int m, std::vector<int> &&nums2, int n) {
    if ( n == 0 ) return ;

    auto l = nums1.begin();
    auto r = nums2.begin();

    size_t old_size = nums1.size();
    nums1.resize(static_cast<unsigned long>(m));

    while ( l != nums1.end() && r != nums2.end() ) {
      if ( *r < *l ) {
        nums1.insert(l, *r);
        ++ r;
      } else { ++ l; }
    }

    if ( l == nums1.end() ) {
      nums1.resize(old_size);
      while (r != nums2.end()) {
        *l = *r;
        ++ r;
        ++ l;
      }
    }
}
