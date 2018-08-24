//
// Created by saber on 8/23/18.
//

#include "004_median_of_two_sorted_arrays.hh"
int Solution::kthElement(Solution::CIT f1, Solution::CIT l1, Solution::CIT f2, Solution::CIT l2, int k) {
  if ( k == 0 ) return std::min(*f1, *f2);
  int n1 = std::distance(f1, l1);
  int n2 = std::distance(f2, l2);
  int k1 = k / 2;
  k1 = std::min(k1, n1 - 1);
  int k2 = k - k1 - 1;
  if ( k2 >= n2 ) {
    k2 = n2 - 1;
    k1 = k - n2;
  }
  int p1 = *(f1 + k1), p2 = *(f2 + k2);
  if ( p1 <= p2 ) {
    if ( k1 == n1 - 1 ) return *(f2 + k2);
    return kthElement(f1 + k1 + 1, l1, f2, l2, k2);
  } else {
    if ( k2 == n2 - 1 ) return *(f1 + k1);
    return kthElement(f1, l1, f2 + k2 + 1, l2, k1);
  }

}
double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
  int n1 = nums1.size();
  int n2 = nums2.size();
  int n = n1 + n2;
  if ( n1 == 0 ) {
    return ( n % 2 == 0 ? (0.5 * (nums2[n / 2 - 1] + nums2[n / 2])) : nums2[n/2]);
  }
  if ( n2 == 0 ) {
    return ( n % 2 == 0 ? (0.5 * (nums1[n / 2 - 1] + nums1[n / 2])) : nums1[n/2]);
  }

  return ( n % 2 == 0 ? 0.5 *
  (kthElement(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), n/2 - 1) +
      kthElement(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), n / 2 )) :
           kthElement(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), n/2 ) );
}
