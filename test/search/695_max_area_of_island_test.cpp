//
// Created by saber on 8/25/18.
//

#include <695_max_area_of_island.hh>
#include <gtest/gtest.h>

TEST(MaxAereaOfIslandTest, Solution01)
{
  Solution sol;
  std::vector<std::vector<int> > grid;
  grid = {{0,0,0,0,0,0,0,0}};
  EXPECT_EQ(0, sol.maxAreaOfIsland(grid));
  grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
          {0,0,0,0,0,0,0,1,1,1,0,0,0},
          {0,1,1,0,1,0,0,0,0,0,0,0,0},
          {0,1,0,0,1,1,0,0,1,0,1,0,0},
          {0,1,0,0,1,1,0,0,1,1,1,0,0},
          {0,0,0,0,0,0,0,0,0,0,1,0,0},
          {0,0,0,0,0,0,0,1,1,1,0,0,0},
          {0,0,0,0,0,0,0,1,1,0,0,0,0}};
  EXPECT_EQ(6, sol.maxAreaOfIsland(grid));
}



int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}