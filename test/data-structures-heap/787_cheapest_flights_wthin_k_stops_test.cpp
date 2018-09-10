//
// Created by saber on 9/9/18.
//

#include <787_cheapest_flights_wthin_k_stops.hh>
#include <gtest/gtest.h>

TEST(CheapestFlightesTest, Solution01)
{
  std::vector<std::vector<int> > edges = {{0,1,100},{1,2,100},{0,2,500}};
  int n = 3;
  int src = 0;
  int dst = 2;
  int k = 1;

  Solution sol;
  EXPECT_EQ(200, sol.findCheapestPrice(n, edges, src, dst, k));

  k = 0;
  EXPECT_EQ(500, sol.findCheapestPrice(n, edges, src, dst, k));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}