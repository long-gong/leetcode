//
// Created by saber on 8/15/18.
//

#include <src/sorting/347_top_k_frequent.hh>
#include <gtest/gtest.h>

TEST(TopKElementsTest, Solution01)
{
  TopKElement01 tke01;
  EXPECT_EQ(std::vector<int>({1, 2}), tke01(std::vector<int>({1,1,1,2,2,3}), 2));

  EXPECT_EQ(std::vector<int>({1}), tke01(std::vector<int>({1}), 1));
}



int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}