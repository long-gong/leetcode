//
// Created by saber on 8/25/18.
//

#include <547_friend_circles.hh>
#include <gtest/gtest.h>



TEST(FriendCirclesTest, Solution01)
{
  Solution sol;
  Solution::Graph g ;
  g = {{1,1,0},
       {1,1,0},
       {0,0,1}};
  EXPECT_EQ(2, sol.findCircleNum(g));

  g = {{1,1,0},
       {1,1,1},
       {0,1,1}};
  EXPECT_EQ(1, sol.findCircleNum(g));
}




int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}