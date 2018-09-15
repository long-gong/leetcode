//
// Created by saber on 9/15/18.
//

#include <394_decode_string.hh>
#include <gtest/gtest.h>



TEST(DecodeStringTest, Solution01)
{
  std::string s("3[a]2[bc]");
  Solution sol;
  std::string expected = "aaabcbc";
  EXPECT_EQ(expected, sol.decodeString(s));

  s = "3[a2[c]]";
  expected = "accaccacc";
  EXPECT_EQ(expected, sol.decodeString(s));

  s = "2[abc]3[cd]ef";
  expected = "abcabccdcdcdef";
  EXPECT_EQ(expected, sol.decodeString(s));

  s = "3[a]2[b4[F]c]";
  std::cout << sol.decodeString(s) << std::endl;
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}