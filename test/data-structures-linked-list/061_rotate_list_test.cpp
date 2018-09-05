//
// Created by saber on 9/3/18.
//

#include <061_rotate_list.hh>
#include <gtest/gtest.h>


TEST(RotateListTest, Solution01)
{
  ListNode *head = ListNode::create({0,1,2,3,4});

  std::cout << (*head) << std::endl;
  Solution sol;
  auto newHead = sol.rotateRight(head, 6);
  assert( newHead != nullptr );
  std::cout << (*newHead) << std::endl;

  ListNode::delete_me(newHead);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}