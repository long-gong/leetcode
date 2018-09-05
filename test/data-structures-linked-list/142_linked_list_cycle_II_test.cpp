//
// Created by saber on 9/4/18.
//

#include <142_linked_list_cycle_II.hh>
#include <gtest/gtest.h>

TEST(LinkedListCycleTest, Solution01)
{
  ListNode *head = ListNode::create({1,2,3,4,5});
  Solution sol;
  auto res = sol.detectCycle(head);
  EXPECT_TRUE( res == nullptr );


  head->next->next->next->next->next = head->next;

  EXPECT_TRUE( res = head->next );
  head->next->next->next->next->next = nullptr;

  ListNode::delete_me(head);
}

int main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}