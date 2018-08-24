//
// Created by saber on 8/22/18.
//

#include "136_single_number.hh"
int Solution::singleNumber(vector<int> &&nums) {

    int x = 0;
    for ( const auto & y : nums ) {
      x ^= y;
    }
    return x;

}
//int one=0,two=0;
//for(auto i:nums)
//{
//one = (one^i) & (~two) ;
//two = (two^i) & (~one) ;
//}
//return one;