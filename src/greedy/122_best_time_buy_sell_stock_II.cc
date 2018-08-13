//
// Created by gtuser on 8/12/18.
//

#include "122_best_time_buy_sell_stock_II.hh"
int BuySellStockII01::operator()(std::vector<int> &&prices) {
  if ( prices.size() <= 1 ) return 0;
  
  int profit = 0;
  int last_buy = prices[0];
  
  for (size_t i = 0;i < prices.size() - 1;++ i) {
    if ( prices[i + 1] < prices[i] ) {
      profit += (prices[i] - last_buy);
      last_buy = prices[i + 1];
    }
  }
  profit += ( prices.back() - last_buy );
  
  return profit;
}
