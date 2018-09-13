//
// Created by saber on 9/12/18.
//

#ifndef LEETCODE_155_MIN_STACK_HH
#define LEETCODE_155_MIN_STACK_HH
/*
 *  Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    push(x) -- Push element x onto stack.
    pop() -- Removes the element on top of the stack.
    top() -- Get the top element.
    getMin() -- Retrieve the minimum element in the stack.
 */
#include <leetcode.h>

class MinStack {
  std::stack<std::pair<int, int> > _data;
 public:
  /** initialize your data structure here. */
  MinStack() = default;
  void push(int x) {
    int m = std::numeric_limits<int>::max();
    if ( !_data.empty() ) m = std::min(x, _data.top().second);
    else  m = std::min(x, m);
    _data.push({x, m});
  }

  void pop() {
    _data.pop();
  }

  int top() {
    return _data.top().first;
  }

  int getMin() {
    return _data.top().second;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

#endif //LEETCODE_155_MIN_STACK_HH
