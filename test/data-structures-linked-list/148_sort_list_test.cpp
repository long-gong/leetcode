#include <148_sort_list.hh>
#include <gtest/gtest.h>


TEST(SortListTest, Solution01)
{
  ListNode *head = ListNode::create({4,2,1,3});
  Solution sol;
  auto res = sol.sortList(head);
  std::cout << (*res) << std::endl;
  EXPECT_TRUE(ListNode::compare({1,2,3,4}, res));
  ListNode::delete_me(res);

  head = ListNode::create({-1,5,3,4,0});
  res = sol.sortList(head);
  EXPECT_TRUE(ListNode::compare({-1,0,3,4,5}, res));
  ListNode::delete_me(res);
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
