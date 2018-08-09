#ifndef _455_assign_cookies_HPP_
#define _455_assign_cookies_HPP_

/*
 *  Assume you are an awesome parent and want to give your children some cookies.
 *  But, you should give each child at most one cookie. Each child i has a greed
 *  factor gi, which is the minimum size of a cookie that the child will be content
 *  with; and each cookie j has a size sj. If sj >= gi, we can assign the cookie j to
 *  the child i, and the child i will be content. Your goal is to maximize the number
 *  of your content children and output the maximum number.
 *
 *  Note:
 *  You may assume the greed factor is always positive.
 *  You cannot assign more than one cookie to one child.
 */

#include "leetcode.h"

/*
 * Base class
 */
class CookieAssignmentBase{
 public:
  virtual size_t operator()(std::vector<int>&& greeds, std::vector<int>&& cookies) = 0;
};

/*
 * Solution 1:
 *
 * 1. Solve greeds & cookies
 * 2. Assign from large to small
 */
class CookieAssignment01 : public CookieAssignmentBase {
 public:
  size_t operator()(std::vector<int>&& g, std::vector<int>&& s) final;
};

#endif //_455_assign_cookies_HPP_
