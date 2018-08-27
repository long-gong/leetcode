//
// Created by saber on 8/25/18.
//

#include <200_number_of_islands.hh>
#include <gtest/gtest.h>

TEST(NumberOfIslandsTest, Solution01)
{
  Solution sol;
  std::vector<std::vector<char> > grid;
  grid = {
      {'1','1','1','1','0'},
      {'1','1','0','1','0'},
      {'1','1','0','0','0'},
      {'0','0','0','0','0'}
  };
  EXPECT_EQ(1, sol.numIslands(grid));

  grid = {
      {'1','1','0','0','0'},
      {'1','1','0','0','0'},
      {'0','0','1','0','0'},
      {'0','0','0','1','1'}
  };
  EXPECT_EQ(3, sol.numIslands(grid));

  grid = {{'1','0','1','1','0','1','1'}};
  EXPECT_EQ(3, sol.numIslands(grid));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}