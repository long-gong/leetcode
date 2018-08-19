//
// Created by saber on 8/18/18.
//
#include <src/binary_search/744_smallest_greater_letter.hh>
#include <gtest/gtest.h>

TEST(SmallestGreaterLetterTest, Solution01)
{
  SmallestGreaterLetter01 sgl01;
  EXPECT_EQ('c', sgl01(std::vector<char>({'c', 'f', 'j'}), 'a'));
  EXPECT_EQ('f', sgl01({'c', 'f', 'j'}, 'c'));
  EXPECT_EQ('j', sgl01({'c', 'c', 'c', 'j'}, 'c'));

  EXPECT_EQ('f', sgl01({'c', 'f', 'j'}, 'd'));

  EXPECT_EQ('j', sgl01({'c', 'f', 'j'}, 'g'));

  EXPECT_EQ('c', sgl01({'c', 'f', 'j'}, 'j'));

  EXPECT_EQ('c', sgl01({'c', 'f', 'j'}, 'k'));
}

int main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
