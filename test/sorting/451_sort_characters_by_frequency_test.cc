//
// Created by saber on 8/15/18.
//
#include <src/sorting/451_sort_characters_by_frequency.hh>
#include <gtest/gtest.h>

TEST(SortByFrequencyTest, Solution01)
{
  SortByFrequency01 sbf01;
  EXPECT_EQ(std::string("eert"), sbf01(std::string("tree")));
  EXPECT_EQ(std::string("aaaccc"), sbf01(std::string("cccaaa")));
  EXPECT_EQ(std::string("bbaA"), sbf01(std::string("Aabb")));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
