//
// Created by saber on 8/20/18.
//

#include "241_different_ways_add_parentheses.hh"
vector<int> DifferentWaysAddingParentheses01::operator()(std::string input) {

  if ( input.empty() ) return {};

  std::vector<size_t > ops;
  std::vector<char> operators;
  size_t i = 0;
  for ( const char ch : input ) {
    if ( ch == '-' || ch == '+' || ch == '*' ) {
      ops.emplace_back(i);
      operators.emplace_back(ch);
    }
    ++ i;
  }
  std::vector<int> nums;
  size_t f, l;
  for ( i = 0;i <= operators.size(); ++ i ) {
    f = (i == 0 ? 0 : (ops[i - 1] + 1));
    l = (i == operators.size() ? (input.size() - 1) : (ops[i] - 1));
    l = l - f + 1;
    nums.emplace_back(std::stoi(input.substr(f
        , l)));
  }
//  for ( const auto& v : nums ) std::cout << v << " ";
//  std::cout << std::endl;

  return (*this)(nums.begin(), nums.end(), operators.begin(), operators.end());

}
std::vector<int> DifferentWaysAddingParentheses01::operator()(std::vector<int>::iterator first,
                                                              std::vector<int>::iterator last,
                                                              std::vector<char>::iterator op_first,
                                                              std::vector<char>::iterator op_last) {
  std::vector<int> result;
  auto n = std::distance(op_first, op_last);
  if ( n == 0 ) {
    result.emplace_back(*first);
    return result;
  }

  for ( size_t offset = 0; offset < n; ++ offset ) {
    for ( const auto &v1 : ((*this)(first, first + offset, op_first, op_first + offset))) {
      for (const auto &v2 : ((*this)(first + offset + 1, last, op_first + offset + 1, op_last))) {
        result.emplace_back(calculate(v1, v2, *(op_first + offset)));
      }
    }
  }
  return result;
}

