//
// Created by saber on 9/4/18.
//

#include <143_reorder_list.hh>
#include <gtest/gtest.h>


TEST(ReorderListTest, Solution01){
  ListNode *head = ListNode::create({1,2,3,4});
  Solution sol;
  std::cout << (*head) << std::endl;
  sol.reorderList(head);
  std::cout << (*head) << std::endl;
  EXPECT_TRUE(ListNode::compare({1,4,2,3}, head));

  ListNode::delete_me(head);

  head = ListNode::create({1,2,3,4,5});
  sol.reorderList(head);
  EXPECT_TRUE(ListNode::compare({1,5,2,4,3}, head));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}