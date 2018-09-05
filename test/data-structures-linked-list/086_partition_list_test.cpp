//
// Created by saber on 9/4/18.
//

#include <086_partition_list.hh>
#include <gtest/gtest.h>

TEST(PartitionListTest, Solution01)
{
  ListNode *head = ListNode::create({1,4,3,2,5,2});
  Solution sol;

  std::cout << (*head) << std::endl;
  auto newHead = sol.partition(head, 3);
  std::cout << (*newHead) << std::endl;

  EXPECT_TRUE(ListNode::compare({1,2,2,4,3,5}, newHead));

  ListNode::delete_me(newHead);

}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}