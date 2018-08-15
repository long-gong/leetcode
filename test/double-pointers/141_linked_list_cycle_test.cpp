//
// Created by saber on 8/14/18.
//

#include <src/double-pointers/141_linked_list_cycle.hh>
#include <gtest/gtest.h>

TEST(LinkedListCycleTest, Solution01)
{
  LinkedListCycle01 llc01;
  std::vector<ListNode *> vl;
  int n = 10;
  for(int i = 0;i < n;++ i) vl.push_back(new ListNode(i));
  for(int i = 0;i < n - 1;++ i) vl[i]->next = vl[i + 1];
  
  EXPECT_FALSE(llc01(vl.front()));
  
  vl.back()->next = vl[n / 2];
  EXPECT_TRUE(llc01(vl.front()));
  
  for(auto& l : vl) delete( l );
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}