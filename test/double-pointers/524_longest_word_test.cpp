//
// Created by saber on 8/14/18.
//

#include <src/double-pointers/524_longest_word.hh>
#include <gtest/gtest.h>

TEST(LongestWordTest, Solution01)
{
  LongestWord01 lw01;
  EXPECT_EQ(std::string("apple"), lw01(std::string("abpcplea"), std::vector<std::string>({"ale","apple","monkey","plea"})));

  EXPECT_EQ(std::string("a"), lw01(std::string("abpcplea"), std::vector<std::string>({"a","b","c"})));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}