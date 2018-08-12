#include "src/greedy/452_minimum_number_of_arrows.hh"
#include <gtest/gtest.h>


TEST(MinimumNumberOfArrowsTest, Solution01){
  MinimumNumberOfArrows01 mnoa01;
  // Example 01
  EXPECT_EQ(2, mnoa01({{10, 16}, {2, 8}, {1, 6}, {7, 12}}));
  // Example 02
  EXPECT_EQ(2, mnoa01({{1, 2}, {2, 3}, {3, 4}, {4, 5}}));
}

int
main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
