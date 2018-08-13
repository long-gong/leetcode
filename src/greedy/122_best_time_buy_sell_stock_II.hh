//
// Created by gtuser on 8/12/18.
//

#ifndef LEETCODE_122_BEST_TIME_BUY_SELL_STOCK_II_HH
#define LEETCODE_122_BEST_TIME_BUY_SELL_STOCK_II_HH
/*
 * Say you have an array for which the ith element is the price of a given stock on 
 * day i.
 * 
 * Design an algorithm to find the maximum profit. You may complete as many transactions 
 * as you like (i.e., buy one and sell one share of the stock multiple times).
 * 
 * Note: You may not engage in multiple transactions at the same time (i.e., you must 
 * sell the stock before you buy again). 
 */
#include <leetcode.h>


class BuySellStockIIBase {
 public:
  virtual int operator()(std::vector<int>&& prices) = 0;
};


class BuySellStockII01 : public BuySellStockIIBase {
 public:
  int operator()(std::vector<int> &&prices) override;
};
#endif //LEETCODE_122_BEST_TIME_BUY_SELL_STOCK_II_HH
