//
// Created by saber on 9/20/18.
//

#ifndef LEETCODE_901_ONLINE_STOCK_SPAN_HH
#define LEETCODE_901_ONLINE_STOCK_SPAN_HH
/*
 * Write a class StockSpanner which collects daily price quotes for some stock, and
 * returns the span of that stock's price for the current day.
 *
 * The span of the stock's price today is defined as the maximum number of consecutive
 * days (starting from today and going backwards) for which the price of the stock was
 * less than or equal to today's price.
 *
 * For example, if the price of a stock over the next 7 days were [100, 80, 60, 70,
 * 60, 75, 85], then the stock spans would be [1, 1, 1, 2, 1, 4, 6].
 */
#include <leetcode.h>

class StockSpanner {
  vector<std::pair<int/* price */, int /* span */>>_hist;
 public:
  StockSpanner() = default;

  int next(int price) {
    int n = 1;
    if ( !_hist.empty() ) {
      int k = _hist.size() - 1;
      while ( k >= 0 && _hist[k].first <= price ) {
        n += _hist[k].second;
        k -= _hist[k].second;
      }
    }
    _hist.push_back({price, n});
    return n;
  }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
#endif //LEETCODE_901_ONLINE_STOCK_SPAN_HH
