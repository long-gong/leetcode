//
// Created by saber on 8/29/18.
//
#include <algorithms.hpp>
#include <gtest/gtest.h>


TEST(HeapSortTest, Basic)
{
  std::vector<int> data({3,2,5,3,2,1,6,9,0});
  saber::heapsort(data.begin(), data.end());
  EXPECT_EQ(std::vector<int>({0,1,2,2,3,3,5,6,9}), data);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
