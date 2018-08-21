//
// Created by saber on 8/21/18.
//
#include <src/data-structures-linked-list/206_reverse_linked_list.hh>
#include <gtest/gtest.h>

TEST(ReverseLinkedListTest, Solution01)
{
  ReverseLinkedList01 rll01;
  size_t n = 5;
  std::vector<ListNode*> in(n);
  std::vector<ListNode*> out(n);

  for ( size_t i = 0;i < n;++ i) {
    in[i] = new ListNode(i + 1);
    out[i] = new ListNode(n - i);
    if ( i > 0 ) {
      in[i-1]->next = in[i];
      out[i-1]->next = out[i];
    }
  }

  auto res = rll01(in.front());

  for ( size_t i = 0;i < n;++ i) {
    EXPECT_EQ(res->val, out[i]->val);
    res = res->next;
  }

  for ( size_t i = 0;i < n;++ i) {
    delete(in[i]);
    delete(out[i]);
  }
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
