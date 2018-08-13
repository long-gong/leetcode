//
// Created by gtuser on 8/12/18.
//

#include "src/greedy/392_is_subsequence.hh"
#include <gtest/gtest.h>

TEST(IsSubsequenceTest, Solution01)
{
  IsSubsequence01 isseq01;
  EXPECT_TRUE(isseq01("abc", "ahbgdc"));
  EXPECT_FALSE(isseq01("axc", "ahbgdc"));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}



