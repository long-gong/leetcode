//
// Created by saber on 9/7/18.
//

#ifndef LEETCODE_692_TOP_K_FREQUENT_WORDS_HH
#define LEETCODE_692_TOP_K_FREQUENT_WORDS_HH
/*
 * Given a non-empty list of words, return the k most frequent elements.
 *
 * Your answer should be sorted by frequency from highest to lowest. If two words have
 * the same frequency, then the word with the lower alphabetical order comes first.
 */
#include <leetcode.h>
class Solution {
 public:
  vector<string> topKFrequent(vector<string>& words, int k) ;
};

//class Solution {
// public:
//  vector<string> topKFrequent(vector<string>& words, int k) {
//    vector<string> ans(k);
//    unordered_map<string, int> count;
//    for (int i=0; i<words.size(); i++) {
//      count[words[i]]++;
//    }
//    priority_queue<WordC, vector<WordC>, Compare> q;
//    for (auto i=count.begin(); i != count.end(); i++) {
//      if (q.size() < k || (i->second > q.top().second ||
//          (i->second == q.top().second && i->first < q.top().first)))
//      {
//        q.push(make_pair(i->first, i->second));
//      }
//      if (q.size() > k) q.pop();
//    }
//    int s = k-1;
//    while ( !q.empty() ) {
//      ans[s] = q.top().first;
//      q.pop();
//      s = s-1;
//    }
//    return ans;
//  }
//};
#endif //LEETCODE_692_TOP_K_FREQUENT_WORDS_HH
