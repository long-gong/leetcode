//
// Created by saber on 9/20/18.
//

#include <880_decoded_string_at_index.hh>
#include <gtest/gtest.h>

TEST(DedocedStringAtIndexTest,Solution01){
  string S = "leet2code3";
  int K = 10;
  string expected = "o";
  Solution sol;
  EXPECT_EQ(expected, sol.decodeAtIndex(S, K));

  S = "ha22";
  K = 5;
  expected = "h";
  EXPECT_EQ(expected, sol.decodeAtIndex(S, K));

  S = "a2345678999999999999999", K = 1;
  expected = "a";
  EXPECT_EQ(expected, sol.decodeAtIndex(S, K));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}