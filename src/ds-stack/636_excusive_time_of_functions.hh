//
// Created by saber on 9/18/18.
//

#ifndef LEETCODE_636_EXCUSIVE_TIME_OF_FUNCTIONS_HH
#define LEETCODE_636_EXCUSIVE_TIME_OF_FUNCTIONS_HH
/*
 * Given the running logs of n functions that are executed in a nonpreemptive single
 * threaded CPU, find the exclusive time of these functions.
 *
 * Each function has a unique id, start from 0 to n-1. A function may be called recursively
 * or by another function.
 *
 * A log is a string has this format : function_id:start_or_end:timestamp. For example,
 * "0:start:0" means function 0 starts from the very beginning of time 0. "0:end:0"
 * means function 0 ends to the very end of time 0.
 *
 * Exclusive time of a function is defined as the time spent within this function, the
 * time spent by calling other functions should not be considered as this function's
 * exclusive time. You should return the exclusive time of each function sorted by their
 * function id.
 */
#include <leetcode.h>
class Solution {
 public:
  std::vector<int> get(string& log);
  vector<int> exclusiveTime(int n, vector<string>& logs);
};

class SolutionSteal {
 public:
  vector<int> exclusiveTime(int n, vector<string>& logs) {

    stack<int> st;
    vector<int> res(n, 0);
    int pre = 0;
    for(string log : logs){
      int i = log.find(':'), j = log.find(':', i+1);
      int id = stoi(log.substr(0,i)), ts = stoi(log.substr(j+1));
      if(!st.empty()) res[st.top()] += ts-pre;
      pre = ts;
      if(log[i+1] == 's') st.push(id);
      else{
        int t = st.top(); st.pop();
        pre++;
        res[t]++;

      }
    }
    return res;


    // stack<int> st;
    // vector<int> res(n, 0);
    // int pre = 0;
    // for(string str : logs){
    //     int i = str.find(':'), j = str.find(':', i+1);
    //     int id = stoi(str.substr(0,i)), ts = stoi(str.substr(j+1));
    //     if(!st.empty()) res[st.top()] += ts - pre;
    //     pre = ts;
    //     if(str[i+1] == 's') st.push(id);
    //     else{
    //         auto t = st.top(); st.pop();
    //         ++res[t];
    //         ++pre;
    //     }
    // }
    // return res;
  }
};
#endif //LEETCODE_636_EXCUSIVE_TIME_OF_FUNCTIONS_HH
