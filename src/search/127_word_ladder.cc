//
// Created by saber on 8/25/18.
//

#include "127_word_ladder.hh"
int Solution::ladderLength(string beginWord, string endWord, vector<string> &wordList) {
  _min = std::numeric_limits<int>::max();
  if (beginWord.size() != endWord.size()) return 1;
  std::vector<std::vector<size_t> > indices(26);
  bool contain_end = false;
  for (size_t k = 0; k < wordList.size(); ++k) {
    if (wordList[k] == endWord) contain_end = true;
    auto ch_ascii = int(wordList[k].front() - 'a');
    assert( ch_ascii >= 0 && ch_ascii < 26 );
    indices[ch_ascii].push_back(k);
  }
  if (!contain_end) return 0;
  ladderLength(beginWord, endWord, indices, wordList, 1, -1);
  return (_min == std::numeric_limits<int>::max() ? 0 : _min);
}

void Solution::ladderLength(string beginWord, string endWord,
                            vector<vector<size_t> > &wordDict,
                            const vector<string> &wordList, int k, int last_mod) {
  if (k >= _min) return;

  char chbk;
  for (size_t i = 0; i < beginWord.size(); ++i) {
    if (i == last_mod) continue;
    chbk = beginWord[i];

    for ( char ch = 'a'; ch <= 'z'; ++ch ) {
      if (ch == chbk) continue;
      beginWord[i] = ch;
      if ( beginWord == endWord ) {
        std::cout << beginWord << "\n" << std::endl;
        _min = std::min(_min, k + 1);
      } else {
        auto ch_ascii = int(beginWord.front() - 'a');
        assert( ch_ascii >= 0 && ch_ascii < 26 );
        auto &dict = wordDict[ch_ascii];

        for (auto &j : dict) {
          if (j < wordList.size() && beginWord == wordList[j]) {
            auto jbk = j;
            std::cout << beginWord << " ";
            j = wordList.size();
            ladderLength(beginWord, endWord, wordDict, wordList, k + 1, i);
            j = jbk;
            break;
          }
        }
      }
      beginWord[i] = chbk;
      if (k >= _min) return;
    }
  }
}
