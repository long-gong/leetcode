//
// Created by saber on 9/14/18.
//

#include "385_mini_parser.hh"
NestedInteger Solution::deserialize(string s) {
  size_t i = 0;
  std::stack<NestedInteger> nist;
  while (i < s.size()) {
    if (s[i] == '[') {
      nist.push(NestedInteger{});
      ++i;
    } else if (s[i] == ',') ++i;
    else if (s[i] == ']') {
      auto lastest = nist.top();
      nist.pop();
      if (!nist.empty()) nist.top().add(lastest);
      else nist.push(lastest);
      ++i;
    } else {
      auto start = i;
      while (i < s.size() && (s[i] >= '0' && s[i] <= '9' || s[i] == '-' || s[i] == '+')) ++i;
      auto x = std::stoi(s.substr(start, i - start));
      if (!nist.empty()) nist.top().add(NestedInteger{x});
      else nist.push(NestedInteger{x});
    }
  }

  return nist.top();
}
