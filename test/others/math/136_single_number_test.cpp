//
// Created by saber on 8/22/18.
//

#include "136_single_number.hh"
#include <gtest/gtest.h>

TEST(SingleNumberTest, Solution01){
  Solution sol;

  EXPECT_EQ(1, sol.singleNumber(std::vector<int>({1,2,2,3,3,4,5,4,5})));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}