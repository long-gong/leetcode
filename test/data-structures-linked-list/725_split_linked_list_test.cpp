//
// Created by saber on 8/22/18.
//

#include <src/data-structures-linked-list/725_split_linked_list.hh>
#include <gtest/gtest.h>


TEST(SplitLinkedListTest, Solution01)
{
  SplitLinkedList01 sll01;
  
  ListNode *l1 = ListNode::create({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
  int k = 3;
  auto v = sll01(l1, k);
  EXPECT_TRUE(ListNode::compare({1,2,3,4}, v[0]));
  EXPECT_TRUE(ListNode::compare({5,6,7}, v[1]));
  EXPECT_TRUE(ListNode::compare({8,9,10}, v[2]));
}




int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}