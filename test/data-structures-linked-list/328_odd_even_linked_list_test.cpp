//
// Created by saber on 8/22/18.
//

#include <src/data-structures-linked-list/328_odd_even_linked_list.hh>
#include <gtest/gtest.h>


TEST(OddEvenLinkedListTest, Solution01)
{
  OddEvenLinkedList01 oell01;
  ListNode *head = ListNode::create({1,2,3,4,5});

  std::cout << (*head) << std::endl;
  ListNode *odd = oell01(head);

  std::cout << (*odd) << std::endl;
  EXPECT_TRUE(ListNode::compare({1,3,5,2,4}, odd));

  ListNode::delete_me(odd);
}




int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}