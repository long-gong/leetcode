//
// Created by saber on 8/15/18.
//

#include <src/sorting/075_sort_colors.hh>
#include <gtest/gtest.h>

TEST(SortColorsTest, Solution01)
{
  SortColors01 sc01;
  std::vector<int>  nums({2,0,2,1,1,0});
  sc01(nums);
  EXPECT_EQ(std::vector<int>({0,0,1,1,2,2}), nums);
}

TEST(SortColorsTest, Solution02)
{
  SortColors02 sc02;
  std::vector<int>  nums({2,0,2,1,1,0});
  sc02(nums);
  EXPECT_EQ(std::vector<int>({0,0,1,1,2,2}), nums);
  std::vector<int>  nums2({1,2,0});
  sc02(nums2);
  EXPECT_EQ(std::vector<int>({0,1,2}), nums2);

  std::vector<int>  nums3({2,1,2});
  sc02(nums3);
  EXPECT_EQ(std::vector<int>({1,2,2}), nums3);

  std::vector<int>  nums4({0,2,2,2,0,2,1,1});
  sc02(nums4);
  EXPECT_EQ(std::vector<int>({0,0,1,1,2,2,2,2}), nums4);
}



int main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}