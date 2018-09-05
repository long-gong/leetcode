//
// Created by saber on 8/29/18.
//

#ifndef LEETCODE_ALGORITHMS_HPP
#define LEETCODE_ALGORITHMS_HPP

#include <leetcode.h>

namespace saber {

template<typename RandomIt, typename Cmp>
void heapify(RandomIt first, RandomIt last, RandomIt current, Cmp cmp) {
  long c = std::distance(first, current) + 1;
  long n = std::distance(first, last);

  assert( c > 0 );
  long l = ( c << 1 );
  long r = l + 1;
  long sel = c;
  if ( r <= n && cmp(*(first + l), *(first + sel - 1) )) sel = r;
  if ( l <= n && cmp(*(first + l - 1), *(first + sel - 1) ) ) sel = l;
  if ( sel != c ) {
    std::swap(*current, *(first + sel - 1));
    heapify(first, last, first + sel - 1, cmp);
  }
}

template<typename RandomIt>
void heapify(RandomIt first, RandomIt last, RandomIt current) {
   heapify(first, last, current, std::greater<typename std::iterator_traits<RandomIt>::value_type >());
}

template<typename RandomIt, typename Cmp>
void build_heap(RandomIt first, RandomIt last, Cmp cmp) {
  long n = std::distance(first, last);
  if (n <= 1) return;
  for (long i = (n >> 1);i > 0;-- i) heapify(first, last, first + i - 1, cmp);
}

template<typename RandomIt>
void build_heap(RandomIt first, RandomIt last) {
  build_heap(first, last, std::greater<typename std::iterator_traits<RandomIt>::value_type>());
}

template<typename RandomIt, typename Cmp>
void heap_pop(RandomIt first, RandomIt last, Cmp cmp) {
  long n = std::distance(first, last);
  if (n <= 0) return;
  std::swap(*first, *(first + n -1));
  heapify(first, first + n - 1, first, cmp);
}

template<typename RandomIt>
void heap_pop(RandomIt first, RandomIt last) {
  heap_pop(first, last, std::greater<typename std::iterator_traits<RandomIt>::value_type>());
}


template<class RandomIt, typename Cmp>
void heapsort(RandomIt first, RandomIt last, Cmp cmp) {
  long n = std::distance(first, last);
  if (n <= 0) return;

  build_heap(first, last, cmp);
  for ( RandomIt it = first;it != last;++ it ) std::cout << *(it) << " ";
  std::cout << std::endl;
  while (n > 0) {
    heap_pop(first, first + n, cmp);
    for ( RandomIt it = first;it != last;++ it ) std::cout << *(it) << " ";
    std::cout << std::endl;
    --n;
  }
}

template<class RandomIt>
void heapsort(RandomIt first, RandomIt last) {
  heapsort(first, last, std::greater<typename std::iterator_traits<RandomIt>::value_type>());
}
}

#endif //LEETCODE_ALGORITHMS_HPP
