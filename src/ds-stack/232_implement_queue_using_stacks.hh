//
// Created by saber on 9/12/18.
//

#ifndef LEETCODE_232_IMPLEMENT_QUEUE_USING_STACKS_HH
#define LEETCODE_232_IMPLEMENT_QUEUE_USING_STACKS_HH
/*
 * Implement the following operations of a queue using stacks.

    push(x) -- Push element x to the back of queue.
    pop() -- Removes the element from in front of queue.
    peek() -- Get the front element.
    empty() -- Return whether the queue is empty.
 */
#include <leetcode.h>

class MyQueue {
  std::stack<int> _data;
  std::stack<int> _data_r;
 public:
  /** Initialize your data structure here. */
  MyQueue() = default;

  /** Push element x to the back of queue. */
  void push(int x) {
    while ( !_data_r.empty() ) {
      _data.push(_data_r.top());
      _data_r.pop();
    }
    _data.push(x);
  }

  /** Removes the element from in front of queue and returns that element. */
  int pop() {
    int x = peek();
    _data_r.pop();
    return x;
  }

  /** Get the front element. */
  int peek() {
    while ( !_data.empty() ) {
      _data_r.push(_data.top());
      _data.pop();
    }
    return _data_r.top();
  }

  /** Returns whether the queue is empty. */
  bool empty() {
    return ( _data_r.empty() && _data.empty() );
  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
#endif //LEETCODE_232_IMPLEMENT_QUEUE_USING_STACKS_HH
