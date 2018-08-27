//
// Created by saber on 8/25/18.
//

#include "127_word_ladder.hh"
int Solution::ladderLength(string beginWord, string endWord, vector<string> &wordList) {
  auto found = std::find(wordList.begin(), wordList.end(), endWord);
  if ( found == wordList.end() ) return 0;
  if ( endWord == beginWord ) return 1;
  std::vector<std::vector<int > > g( wordList.size() + 1);

  for ( size_t i = 0;i < wordList.size();++ i ){
    size_t j = 0;
    bool can_reach = false;
    while ( j < beginWord.size() ) {
      if ( beginWord[j] != wordList[i][j]  ) {
        if ( can_reach ) { can_reach = false; break; }
        else can_reach = true;
      }
      ++ j;
    }
    if ( can_reach ) {
      g[0].push_back( i  + 1 );
      g[i + 1].push_back( 0 );
    }
  }
  for ( size_t i = 0;i < wordList.size();++ i ) {
    for ( size_t j = i + 1; j < wordList.size();++ j ) {
      size_t k = 0;
      bool can_reach = false;
      while ( k < beginWord.size() ) {
        if (  wordList[j][k] != wordList[i][k]  ) {
          if ( can_reach ) { can_reach = false; break; }
          else can_reach = true;
        }
        ++ k;
      }
      if ( can_reach ) {
        g[i + 1].push_back( j  + 1 );
        g[j + 1].push_back( i + 1 );
      }
    }
  }

  return shortestPath(g, wordList, (int)(std::distance(wordList.begin(), found) + 1) );
}
int Solution::shortestPath(const std::vector<std::vector<int> > &g, const vector<string> &wordList, int t) {
  std::vector<int> dist(wordList.size() + 1, std::numeric_limits<int>::max());
  dist[0] = 1;

  std::queue<int> q;

  std::vector<int> path(wordList.size() + 1, -1);
  q.push(0);

  while ( !q.empty() ) {
    auto c = q.front();
    q.pop();
    for ( const auto &nei : g[c] ) {
      if ( dist[nei] > dist[c] + 1 ) {
        dist[nei] = dist[c] + 1;
        q.push(nei);
        path[nei] = c;
      }
    }
  }

//  int c = t;
//  while ( path[c] > 0 ) {
//    std::cout << wordList[c - 1] << " <- ";
//    c = path[c];
//  }
//  std::cout << std::endl;

  return ( dist[t] == std::numeric_limits<int>::max() ? 0 : dist[t] );
}

