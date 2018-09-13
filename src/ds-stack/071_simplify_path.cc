//
// Created by saber on 9/12/18.
//

#include "071_simplify_path.hh"
string Solution::simplifyPath(string path) {
  if ( path.empty() ) return path;

  std::stack<std::string> s;
  size_t c = 0;

  while ( c < path.size() ) {
    auto next = getNext(path, c);
    if ( next == "." ) {
      // do nothing
    } else if ( next == ".." ) {
     if ( !s.empty() ) s.pop();
//     if ( !s.empty() ) s.pop();
    } else if ( next == "/" ){
      // do nothing
    } else {
      s.push(next);
    }
  }

  string res;

  while ( !s.empty() ) {
    res = (res.empty() ? s.top() : ( s.top().append("/" + res)));
    s.pop();
  }
  res.insert(res.begin(), '/');
  return res;
}
string Solution::getNext(string path, size_t& c) {
  if ( c >= path.size() ) return "";
  if ( path[c] == '/' ) { c ++; return "/"; }
  size_t start = c;
  while ( c < path.size() && path[c] != '/' ) ++ c;

  return path.substr( start, c - start );
}
