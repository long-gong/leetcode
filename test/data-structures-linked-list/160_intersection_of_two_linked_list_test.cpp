//
// Created by saber on 8/20/18.
//

#include <src/data-structures-linked-list/160_intersection_of_two_linked_lists.hh>
#include <gtest/gtest.h>

TEST(IntersectionTwoLinkedListTest, Solution01)
{
  IntersectionTwoLinkedList01 itll01;

  size_t lenA = 5, lenB = 7;
  std::vector<ListNode*> la(lenA);
  std::vector<ListNode*> lb(lenB);

  for ( size_t i = 0;i < lenA;++ i ) {
    la[i] = new ListNode(i);
    if ( i > 0 ) la[i - 1]->next = la[i];
  }
  for ( size_t j = 0;j < lenB;++ j ) {
    lb[j] = new ListNode(j);
    if ( j > 0 ) lb[j - 1]->next = lb[j];
  }

  EXPECT_EQ(nullptr, itll01(la[0], lb[0]));

  la.back()->next = lb[2];
  EXPECT_EQ(lb[2], itll01(la[0], lb[0]));
  for ( auto &p : la) delete(p);
  for ( auto &p : lb) delete(p);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}