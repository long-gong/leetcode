//
// Created by saber on 8/26/18.
//

#include <417_pacific_atlantic_water_flow.hh>
#include <gtest/gtest.h>


TEST(PacificAtlanticWaterFlowTest, Solution01)
{
  Solution sol;
  Solution::Graph g;
  std::vector<Solution::Coordinate> res;
//  g = {
//      {1, 2, 2, 3, 5},
//      {3, 2, 3, 4, 4},
//      {2, 4, 5, 3, 1},
//      {6, 7, 1, 4, 5},
//      {5, 1, 1, 2, 4}
//  };
//
//  auto res = sol.pacificAtlantic(g);
//
//  for ( const auto& c : res ) std::cout << "(" << c.first << ", " << c.second << ") \n";
//
//  std::cout << std::endl;
//  EXPECT_TRUE(true);

//  g = {{3,3,3,3,3,3},{3,0,3,3,0,3},{3,3,3,3,3,3}};
//  res = sol.pacificAtlantic(g);
//  std::sort(res.begin(),res.end());

  g = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
  std::vector<std::pair<int,int>> expected({{0,4},{1,3},{1,4},{2,2},{3,0},{3,1},{4,0}});
  res = sol.pacificAtlantic(g);
  std::sort(res.begin(), res.end());
  EXPECT_EQ(res, expected);
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}