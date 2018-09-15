//
// Created by saber on 9/15/18.
//

#include "394_decode_string.hh"
string Solution::decodeString(string s) {
  if ( s.empty() ) return s;

  size_t i ;
  std::stack<string> current;
  std::stack<int> repeats;

  for ( i = 0;i < s.size(); ) {
    auto start = i;
    while ( s[i] >= '0' && s[i] <= '9' ) ++ i;
    if ( i > start ) repeats.push( std::stoi(s.substr(start, i - start)));
    else {
      if ( s[i] == '[' ) {
        ++ i;
        start = i;
        while ( i < s.size() && !(isDigit(s[i]) || isSquareBrackets(s[i])) ) ++ i;
        current.push( s.substr(start, i - start ));
      } else if ( s[i] == ']' ){
        auto k = repeats.top();
        repeats.pop();
        auto str = current.top();
        current.pop();
        string tmp;
        while ( k > 0 ) { tmp.append(str); -- k; }
        if ( !current.empty() ) current.top().append( tmp );
        else current.push( tmp );
        ++ i;
      } else {
        while ( i < s.size() && !(isDigit(s[i]) || isSquareBrackets(s[i])) ) ++ i;
        if ( !current.empty()) current.top().append( s.substr(start, i - start) );
        else {
          current.push( s.substr(start, i - start) );
        }
      }
    }
  }

  return current.top();

}
