//
// Created by saber on 9/4/18.
//

#include <082_remove_duplicates_from_sorted_list_II.hh>
#include <gtest/gtest.h>

TEST(DuplicateRemoveIITest, Solution01)
{
  ListNode *head = ListNode::create({1,2,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5});
  Solution sol;
  std::cout << (*head) << std::endl;
  auto newHead = sol.deleteDuplicates(head);
  std::cout << (*newHead) << std::endl;
  EXPECT_TRUE(ListNode::compare({1,2,5}, newHead));
  ListNode::delete_me(newHead);


  head = ListNode::create({1,1,1,1,1,1,1,1,1,2,3});
  std::cout << (*head) << std::endl;
  newHead = sol.deleteDuplicates(head);
  std::cout << (*newHead) << std::endl;
  EXPECT_TRUE(ListNode::compare({2,3}, newHead));
  ListNode::delete_me(newHead);


  head = ListNode::create({1,1,1,2,2,5,5,8,8});
  std::cout << (*head) << std::endl;
  newHead = sol.deleteDuplicates(head);
  EXPECT_TRUE(newHead == nullptr);
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}