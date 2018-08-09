#include "src/greedy/435_non_overlapping_intervals.hh"

#include <gtest/gtest.h>

TEST(NonOverlappingIntervalsTest, Examples) {
  NonOverlappingIntervals01 noi01;
  // Example 1
  EXPECT_EQ(1, noi01(std::vector<Interval>({
                                  {1, 2}, {2, 3}, {3, 4}, {1, 3}
  })));
  // Example 2
  EXPECT_EQ(2, noi01(std::vector<Interval>({
                                               {1, 2}, {1, 2}, {1, 2}
                                           })));
  // Example 3
  EXPECT_EQ(0, noi01(std::vector<Interval>({
                                               {1, 2}, {2, 3}
                                           })));
}


int
main(int argc, char* argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
