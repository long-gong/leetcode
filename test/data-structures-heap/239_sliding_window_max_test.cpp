//
// Created by saber on 9/10/18.
//
#include <239_sliding_window_max.hh>
#include <gtest/gtest.h>

TEST(SlidingWindowMaxTest, Solution01)
{
  std::vector<int> nums({1,3,-1,-3,5,3,6,7});
  int k =3;
  Solution sol;
  auto res = sol.maxSlidingWindow(nums, k);
  EXPECT_EQ(std::vector<int>({3,3,5,5,6,7}), res);


}



int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
