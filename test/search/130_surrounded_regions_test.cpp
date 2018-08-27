//
// Created by saber on 8/25/18.
//
#include <130_surrounded_regions.hh>
#include <gtest/gtest.h>

TEST(SurroundedRegionsTest, Solution01){
  std::vector<std::vector<char >> board;
  board = {
      {'X', 'X', 'X', 'X'},
      {'X', 'O', 'O', 'X'},
      {'X', 'X', 'O', 'X'},
      {'X', 'O', 'X', 'X'}
  };

  std::vector<std::vector<char >> after;
  after = {
      {'X', 'X', 'X', 'X'},
      {'X', 'X', 'X', 'X'},
      {'X', 'X', 'X', 'X'},
      {'X', 'O', 'X', 'X'}
  };

  Solution sol;
  sol.solve(board);

  EXPECT_EQ(after, board);


  board = {{'O','X','O','O','O','X'},{'O','O','X','X','X','O'},{'X','X','X','X','X','O'},{'O','O','O','O','X','X'},{'X','X','O','O','X','O'},{'O','O','X','X','X','X'}};
  after = {{'O','X','O','O','O','X'},{'O','O','X','X','X','O'},{'X','X','X','X','X','O'},{'O','O','O','O','X','X'},{'X','X','O','O','X','O'},{'O','O','X','X','X','X'}};
  sol.solve(board);
  EXPECT_EQ(after, board);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
