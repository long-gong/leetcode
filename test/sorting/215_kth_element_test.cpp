//
// Created by saber on 8/15/18.
//

#include <src/sorting/215_kth_element.hh>
#include <gtest/gtest.h>

TEST(KthElementTest, Solution01)
{
  KthElement01 ke01;
  EXPECT_EQ(5, ke01(std::vector<int>({3,2,1,5,6,4}), 2));
  EXPECT_EQ(4, ke01(std::vector<int>({3,2,3,1,2,4,5,5,6}), 4));
  EXPECT_EQ(-1, ke01(std::vector<int>({-1, -1}), 2));
  EXPECT_EQ(2, ke01(std::vector<int>({2, 1}), 1));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}