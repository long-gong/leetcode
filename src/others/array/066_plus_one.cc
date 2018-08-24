//
// Created by saber on 8/22/18.
//

#include "066_plus_one.hh"
vector<int> Solution::plusOne(vector<int> &&digits) {
  int k = static_cast<int>(digits.size() - 1);
  int carry = 1;

  while ( carry > 0 && k >= 0 ) {
    carry += digits[k];
    digits[k] = (carry % 10);
    carry /= 10;
    -- k;
  }
  if ( carry > 0 ) digits.insert(digits.begin(), carry);
  return digits;
}
