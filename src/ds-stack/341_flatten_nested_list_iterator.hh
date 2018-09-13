//
// Created by saber on 9/12/18.
//

#ifndef LEETCODE_341_FLATTEN_NESTED_LIST_ITERATOR_HH
#define LEETCODE_341_FLATTEN_NESTED_LIST_ITERATOR_HH

/*
 * Given a nested list of integers, implement an iterator to flatten it.

 * Each element is either an integer, or a list -- whose elements may also be integers or other lists.
 */

#include <leetcode.h>
/**
* // This is the interface that allows for creating nested lists.
* // You should not implement it, or speculate about its implementation
* class NestedInteger {
*   public:
*     // Return true if this NestedInteger holds a single integer, rather than a nested list.
*     bool isInteger() const;
*
*     // Return the single integer that this NestedInteger holds, if it holds a single integer
*     // The result is undefined if this NestedInteger holds a nested list
*     int getInteger() const;
*
*     // Return the nested list that this NestedInteger holds, if it holds a nested list
*     // The result is undefined if this NestedInteger holds a single integer
*     const vector<NestedInteger> &getList() const;
* };
*/
class NestedInteger {
  std::vector<int>  _data;
 public:
  NestedInteger(const std::vector<int> & data) : _data(data) {

  }
  bool isInteger() const{
    return ( _data.size() == 1 );
  }
  int getInteger() const{
    return _data[0];
  }
  std::vector<NestedInteger> getList() const{
    std::vector<NestedInteger> res;
    for ( auto x : _data ) res.push_back(std::vector<int>({x}));
    return res;
  }
};

class NestedIterator {
  std::vector<int> _data;
  int _pos;
 public:
  NestedIterator(vector<NestedInteger> &nestedList) : _pos(0) {
    if ( nestedList.empty() ) return;

    std::stack<std::pair<const std::vector<NestedInteger>&, size_t> > s;


    std::vector<std::vector<NestedInteger>> back;
    s.push({nestedList, 0});

    while ( !s.empty() ) {
      auto p = s.top();
      s.pop();
      if ( p.second  + 1 < p.first.size() ) s.push({ p.first, p.second + 1}); // not the last element

      if ( (p.first.at(p.second)).isInteger() ) _data.push_back((p.first.at(p.second)).getInteger());
      else {
        back.push_back((p.first.at(p.second)).getList());
        const vector<NestedInteger> &list = back.back();

        s.push( { list, 0 } );

      }

    }

  }

  int next() {
    return _data[_pos ++];
  }

  bool hasNext() {
    return _pos < _data.size();
  }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */


//class NestedIteratorSteal {
// private:
//  stack<NestedInteger> s;
// public:
//  NestedIterator(vector<NestedInteger> &nestedList) {
//    for(int i = nestedList.size()-1; i >= 0; i--)   s.push(nestedList[i]);
//  }
//
//  int next() {
//    hasNext();
//    int res = s.top().getInteger();s.pop();
//    return res;
//  }
//
//  bool hasNext() {
//    while(!s.empty() && !s.top().isInteger()){
//      auto c = s.top().getList();
//      s.pop();
//      for(int i = c.size()-1; i >= 0; i--)    s.push(c[i]);
//    }
//    return !s.empty();
//  }
//
//};
#endif //LEETCODE_341_FLATTEN_NESTED_LIST_ITERATOR_HH
