//
// Created by saber on 8/18/18.
//

#include <src/binary_search/540_single_element.hh>
#include <gtest/gtest.h>


TEST(SingleElementTest, Solution01)
{
  SingleElement01 se01;
  EXPECT_EQ(2, se01({1,1,2,3,3,4,4,8,8}));
  EXPECT_EQ(1, se01({1,2,2,3,3,4,4,8,8}));
  EXPECT_EQ(9, se01({2,2,3,3,4,4,8,8, 9}));
  EXPECT_EQ(10, se01({3,3,7,7,10,11,11}));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}