//
// Created by saber on 9/8/18.
//
#include <373_k_pairs_with_smallest_sums.hh>
#include <gtest/gtest.h>


TEST(KSmallestPairsTest, Solution){
  std::vector<int> num1({1,7,11});
  std::vector<int> num2({2,4,6});
  Solution sol;
  auto res = sol.kSmallestPairs(num1, num2, 3);
  std::sort(res.begin(), res.end(), [](const std::pair<int, int>& p1,
                                       const std::pair<int, int>& p2){
    return (p1.first + p1.second < p2.first + p2.second);
  });
  auto expected = std::vector<std::pair<int,int>>({{1,2},{1,4},{1,6}});
  EXPECT_EQ(expected, res);

  num1 = {1,1,2};
  num2 = {1,2,3};
  res = sol.kSmallestPairs(num1,num2,2);
  std::sort(res.begin(), res.end(), [](const std::pair<int, int>& p1,
                                       const std::pair<int, int>& p2){
    return (p1.first + p1.second < p2.first + p2.second);
  });
  expected = std::vector<std::pair<int,int>>({{1,1},{1,1}});
  EXPECT_EQ(expected, res);

  num1 = {1,2};
  num2 = {3};
  res = sol.kSmallestPairs(num1,num2,3);
  std::sort(res.begin(), res.end(), [](const std::pair<int, int>& p1,
                                       const std::pair<int, int>& p2){
    return (p1.first + p1.second < p2.first + p2.second);
  });
  expected = std::vector<std::pair<int,int>>({{1,3},{2,3}});
  EXPECT_EQ(expected, res);

  num1 = {0,0,0,0,0,2,2,2,2};
  num2 = {-3,22,35,56,76};
  res = sol.kSmallestPairs(num1, num2, 22);
  std::sort(res.begin(), res.end(), [](const std::pair<int, int>& p1,
                                       const std::pair<int, int>& p2){
    return (p1.first + p1.second < p2.first + p2.second);
  });
  expected = std::vector<std::pair<int,int>>({{0,-3},{0,-3},{0,-3},{0,-3},{0,-3},{2,-3},{2,-3},{2,-3},{2,-3},{0,22},{0,22},{0,22},{0,22},{0,22},{2,22},{2,22},{2,22},{2,22},{0,35},{0,35},{0,35},{0,35}});
  EXPECT_EQ(expected, res);
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
