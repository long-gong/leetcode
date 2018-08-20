//
// Created by saber on 8/20/18.
//

#ifndef LEETCODE_241_DIFFERENT_WAYS_ADD_PARENTHESES_HH
#define LEETCODE_241_DIFFERENT_WAYS_ADD_PARENTHESES_HH
/*
 * Given a string of numbers and operators, return all possible results from computing all the different 
 * possible ways to group numbers and operators. The valid operators are +, - and *.
 */
#include <leetcode.h>
class DifferentWaysAddingParenthesesBase {
 public:
  virtual std::vector<int> operator()(std::string input) = 0;
};

class DifferentWaysAddingParentheses01 : public DifferentWaysAddingParenthesesBase {
 public:
  vector<int> operator()(std::string input) override;
  std::vector<int> operator()(std::vector<int>::iterator first, std::vector<int>::iterator last, 
      std::vector<char>::iterator op_first, std::vector<char>::iterator op_last);
  int calculate(int a, int b, char op){
    switch ( op ) {
      case '+': return (a + b);
      case '-': return (a - b);
      case '*': return (a * b);
      default: std::cerr << "Unsupported operator: " << op << std::endl;
    }
    return -1;
  }
};
#endif //LEETCODE_241_DIFFERENT_WAYS_ADD_PARENTHESES_HH
