//
// Created by saber on 8/18/18.
//

#include <src/binary_search/278_remove_element.hh>
#include <gtest/gtest.h>


TEST(RemoveElementTest, Solution01)
{
  RemoveElement01 re01;
  EXPECT_EQ(2, re01({3,2,2,3}, 3));

  EXPECT_EQ(5, re01({0,1,2,2,3,0,4,2}, 2));
}



int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}