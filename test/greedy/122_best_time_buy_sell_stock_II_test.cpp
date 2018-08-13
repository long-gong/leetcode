//
// Created by gtuser on 8/12/18.
//
#include "src/greedy/122_best_time_buy_sell_stock_II.hh"
#include <gtest/gtest.h>

TEST(BuySellStockIITest, Solution01)
{
  BuySellStockII01 bsst01;
  EXPECT_EQ(7, bsst01(std::vector<int>({7, 1, 5, 3, 6, 4})));

  EXPECT_EQ(4, bsst01(std::vector<int>({1, 2, 3, 4, 5})));

  EXPECT_EQ(0, bsst01(std::vector<int>({7, 6, 5, 4, 3, 2, 1})));
}


int
main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}