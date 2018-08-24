//
// Created by saber on 8/21/18.
//
#include <src/data-structures-linked-list/024_swap_nodes.hh>
#include <gtest/gtest.h>


TEST(SwapNodeTest, Solution01)
{
  SwapNode01 sn01;
  ListNode *la = ListNode::create({1,2,3,4});
  EXPECT_TRUE(ListNode::compare({1,2,3,4}, la));
  auto lb = sn01(la);
  EXPECT_TRUE(ListNode::compare({2,1,4,3}, lb));
  
  ListNode::delete_me(lb);
}


int
main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
