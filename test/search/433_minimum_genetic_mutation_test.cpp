//
// Created by saber on 8/25/18.
//

#include <433_minimum_genetic_mutation.hh>
#include <gtest/gtest.h>

TEST(MinimumMutationsTest, Solution01)
{
  Solution sol;
  std::vector<string> bank;
  bank = {"AACCGGTA"};
  EXPECT_EQ(1, sol.minMutation("AACCGGTT", "AACCGGTA", bank));

  bank = {"AACCGGTA", "AACCGCTA", "AAACGGTA"};
  EXPECT_EQ(2, sol.minMutation("AACCGGTT", "AAACGGTA", bank));

  bank = {"AAAACCCC", "AAACCCCC", "AACCCCCC"};
  EXPECT_EQ(3, sol.minMutation("AAAAACCC", "AACCCCCC", bank));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}