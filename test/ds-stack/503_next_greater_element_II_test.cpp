//
// Created by saber on 9/17/18.
//
#include <503_next_greater_element_II.hh>
#include <gtest/gtest.h>

TEST(NextGreaterElementIITest, Solution01)
{
  std::vector<int> nums = {1,2,1};
  std::vector<int> o = {2,-1,2};
  Solution sol;
  EXPECT_EQ(o, sol.nextGreaterElements(nums));
}


int main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
