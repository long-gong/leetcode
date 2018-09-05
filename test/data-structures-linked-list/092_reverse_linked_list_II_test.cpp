//
// Created by saber on 9/4/18.
//

#include <092_reverse_linked_list_II.hh>
#include <gtest/gtest.h>


TEST(ReverseLinkedListIITest, Solution01)
{
  ListNode *head = ListNode::create({1,2,3,4,5,6,7});
  std::cout << (*head) << std::endl;
  Solution sol;
  auto res = sol.reverseBetween(head, 2, 4);
  std::cout << (*res) << std::endl;
  EXPECT_TRUE(ListNode::compare({1,4,3,2,5,6,7}, res));
  ListNode::delete_me(res);

  head = ListNode::create({1,2,3,4,5,6,7});
  res = sol.reverseBetween(head, 1, 4);
  EXPECT_TRUE(ListNode::compare({4,3,2,1,5,6,7}, res));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}