//
// Created by saber on 8/22/18.
//

#include "260_single_number_III.hh"
vector<int> Solution::singleNumber(vector<int> &&nums) {
    int x = 0;
    for ( const auto& y : nums ) x ^= y;

    // std::cout << x << std::endl;
    int b = 1;
    while ( (b & x) == 0 ) {
      b = (b << 1);
    }

    // std::cout << b << std::endl;
    size_t cnt = 0;
    for ( size_t k = 0;k < nums.size();++ k ) {
      if ( (b & nums[k]) == 0 ) {
        nums[cnt ++] = nums[k];
      }
    }
    assert( cnt > 0 );

    int y = 0;
    for ( size_t k = 0;k < cnt;++ k ) y ^= nums[k];

    return {y, y^x};

}
