//
// Created by saber on 9/20/18.
//

#include "880_decoded_string_at_index.hh"
//string Solution::decodeAtIndex(string S, int K) {
//  //std::stack<string> s;
//
//  string str, str_t;
//  int tt;
//  long long t;
//  for (size_t i = 0; i < S.size();) {
//    auto j = i;
//
//    while (i < S.size() && isLetter(S[i])) ++i;
//    str = "";
//    if (j < i) {
//      str = S.substr(j, i - j);
//      str_t.append(str);
//      if ( str_t.size() >= K )
//        return str_t.substr(K - 1, 1);
//      j = i;
//    }
//    //while (i < S.size() && !isLetter(S[i])) ++i;
//    t = 1;
//    while (i < S.size() && !isLetter(S[i])) {
//      tt = S[i] - '0';
//      t *= tt;
//      ++ i;
//      if (t * str_t.size() >= K) {
//        auto k = ((K - 1) % str_t.size());
//        return str_t.substr(k, 1);
//      }
//    }
//    string ss(str_t);
//    while (t > 1) {
//      str_t.append(ss);
//      --t;
//    }
//  }
//  return "";
//}
string Solution::decodeAtIndex(string S, int K) {
  std::stack<tuple<int, int, int, int> > s;

  int t, tt, ttt = 0;

  int start, ed;
  for (size_t i = 0; i < S.size();) {
    auto j = i;
    while (i < S.size() && isLetter(S[i])) ++i;

    if (j < i) {
      auto len = i - j;
      start = j;
      ed = i;
      auto len_tp = s.empty() ? 0 : std::get<3>(s.top());
      ttt = len_tp + len;
      if (ttt >= K) return S.substr(j + K - 1 - len_tp, 1);
    }

    t = 1;
    while (i < S.size() && !isLetter(S[i])) {
      tt = S[i] - '0';
      t *= tt;
      ++i;
      if (t * ttt >= K) {
        auto k = (K - 1) % ttt;
        if (s.empty() || k >= std::get<3>(s.top())) {
          return (s.empty() ? S.substr(start + k, 1) : S.substr(start + ((k - std::get<3>(s.top())) % ( ed - start )), 1));
        }
        do {
          auto top = s.top();
          s.pop();
          start = std::get<0>(top);
          ed = std::get<1>(top);
          if (s.empty()) {
            k = (k % (ed - start));
            return S.substr(start + k, 1);
          } else {
            k = (k % (std::get<3>(s.top()) + ed - start));
            if (k >= std::get<3>(s.top())) return S.substr(start + k - std::get<3>(s.top()), 1);
          }
        } while (!s.empty() && k < std::get<3>(s.top()));
      }
    }
    s.push({start, ed, t, ttt * t});
  }

  return "";
}
