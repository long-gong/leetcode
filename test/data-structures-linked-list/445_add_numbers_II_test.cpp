//
// Created by saber on 8/21/18.
//

#include <src/data-structures-linked-list/445_add_numbers_II.hh>
#include <gtest/gtest.h>


TEST(AddNumbersIITest, Solution01Case01)
{
  auto l1 = ListNode::create({7,2,4,3});
  auto l2 = ListNode::create({5,6,4});

  AddNumbersII01 an201;
  EXPECT_TRUE(ListNode::compare({7, 8,0,7}, an201(l1, l2)));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}

TEST(AddNumbersIITest, Solution01Case02)
{
  auto l1 = ListNode::create({9,9});
  auto l2 = ListNode::create({1});

  AddNumbersII01 an201;
  EXPECT_TRUE(ListNode::compare({1,0,0}, an201(l1, l2)));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}

TEST(AddNumbersIITest, Solution01Case03)
{
  auto l1 = ListNode::create({1});
  auto l2 = ListNode::create({9,9});

  AddNumbersII01 an201;
  EXPECT_TRUE(ListNode::compare({1,0,0}, an201(l1, l2)));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}

TEST(AddNumbersIITest, Solution02Case01)
{
  auto l1 = ListNode::create({7,2,4,3});
  auto l2 = ListNode::create({5,6,4});

  AddNumbersII02 an201;
  EXPECT_TRUE(ListNode::compare({7, 8,0,7}, an201(l1, l2)));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}
int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}