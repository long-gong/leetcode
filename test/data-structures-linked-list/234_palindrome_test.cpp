//
// Created by saber on 8/22/18.
//

#include <src/data-structures-linked-list/234_palindrome.hh>
#include <gtest/gtest.h>


TEST(PalindromeTest, Solution01)
{
  Palindrome01 pal01;
  ListNode *l1 = ListNode::create({1,2});
  EXPECT_FALSE(pal01(l1));


  ListNode *l2 = ListNode::create({1,2,2,1});
  EXPECT_TRUE(pal01(l2));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}

TEST(PalindromeTest, Solution02)
{
  Palindrome02 pal01;
  ListNode *l1 = ListNode::create({1,2});
  EXPECT_FALSE(pal01(l1));


  ListNode *l2 = ListNode::create({1,2,2,1});
  EXPECT_TRUE(pal01(l2));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}

TEST(PalindromeTest, Solution02Case02)
{
  Palindrome02 pal01;
  ListNode *l1 = ListNode::create({1,2,1});
  EXPECT_TRUE(pal01(l1));


  ListNode *l2 = ListNode::create({1,2,2,1});
  EXPECT_TRUE(pal01(l2));

  ListNode::delete_me(l1);
  ListNode::delete_me(l2);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}