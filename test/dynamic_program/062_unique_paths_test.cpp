//
// Created by saber on 8/18/18.
//
#include <src/dynamic_program/062_unique_paths.hh>
#include <gtest/gtest.h>


TEST(UniquePathsTest, Solution01)
{
  UniquePaths01 up01;
  EXPECT_EQ(3, up01(3, 2));
}

int 
main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
