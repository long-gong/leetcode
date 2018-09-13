//
// Created by saber on 9/12/18.
//

#include <071_simplify_path.hh>
#include <gtest/gtest.h>

TEST(SimplifyPathTest, Solution01)
{
  std::string path = "/home/";
  Solution sol;
  EXPECT_EQ(std::string("/home"), sol.simplifyPath(path));

  path = "/a/./b/../../c/";
  EXPECT_EQ(std::string("/c"), sol.simplifyPath(path));

  path = "/a/../../b/../c//.//";
  EXPECT_EQ(std::string("/c"), sol.simplifyPath(path));


  path = "/a//b////c/d//././/..";
  EXPECT_EQ(std::string("/a/b/c"), sol.simplifyPath(path));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}