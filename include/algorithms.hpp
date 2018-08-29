//
// Created by saber on 8/29/18.
//

#ifndef LEETCODE_ALGORITHMS_HPP
#define LEETCODE_ALGORITHMS_HPP

#include <leetcode.h>

template < typename RandomIt >
void build_heap(RandomIt first, RandomIt last){
  long n = std::distance(first, last);
  if ( n <= 0 ) return;
  long p, c = n, cc;
  while ( c > 1 ) {
    p = (c >> 1);
    c =
  }
}
template< class RandomIt >
void heapsort(RandomIt first, RandomIt last){

}
#endif //LEETCODE_ALGORITHMS_HPP
