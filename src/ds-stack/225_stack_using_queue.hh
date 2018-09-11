//
// Created by saber on 9/11/18.
//

#ifndef LEETCODE_225_STACK_USING_QUEUE_HH
#define LEETCODE_225_STACK_USING_QUEUE_HH
/*
 * Implement the following operations of a stack using queues.
 */
#include <leetcode.h>

class MyStack {
  std::queue<int> _data;
  bool peaked{false};
 public:
  /** Initialize your data structure here. */
  MyStack() = default;

  /** Push element x onto stack. */
  void push(int x) {
    _data.push(x);
    peaked = false;
  }

  /** Removes the element on top of the stack and returns that element. */
  int pop() {

    if ( !peaked ) top();
    auto x = _data.front();

    _data.pop();
    peaked = false;
    return x;
  }

  /** Get the top element. */
  int top() {
    if (!peaked) {
      size_t n = _data.size();
      int x;
      while (n > 1) {
        x = _data.front();
        _data.pop();
        _data.push(x);
        --n;
      }
      peaked = true;
    }
    return _data.front();
  }

  /** Returns whether the stack is empty. */
  bool empty() {
    return _data.empty();
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
#endif //LEETCODE_225_STACK_USING_QUEUE_HH
