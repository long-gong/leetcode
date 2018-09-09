//
// Created by saber on 9/5/18.
//
#include <203_remove_linked_list.hh>
#include <gtest/gtest.h>


TEST(RemoveElementTest, Solution01)
{
  ListNode *head = ListNode::create({1,2,6,6,3,4,5,6});
  Solution sol;
  std::cout << (*head) << std::endl;
  auto res = sol.removeElements(head, 6);
  std::cout << (*res) << std::endl;
  EXPECT_TRUE(ListNode::compare({1,2,3,4,5}, res));

  ListNode::delete_me(res);

  head = ListNode::create({1,1,1,1,1});
  res = sol.removeElements(head, 1);
  EXPECT_TRUE( nullptr == res );
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
