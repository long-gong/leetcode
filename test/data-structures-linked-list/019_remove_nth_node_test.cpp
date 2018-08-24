//
// Created by saber on 8/21/18.
//

#include <src/data-structures-linked-list/019_remove_nth_node.hh>
#include <gtest/gtest.h>


TEST(RemoveNthNodeTest, Solution01)
{
  RemoveNthNode01 rnn01;
  int T = 5;
  std::vector<ListNode *> la(T);
  for ( int i = 0;i < T;++ i ) {
    la[i] = new ListNode(i + 1);
    if ( i > 0 ) la[i - 1]->next = la[i];
  }

  std::cout << (*(la.front())) << std::endl;
  auto lb = rnn01(la.front(), 2);

  std::cout << (*lb) << std::endl;

  for ( auto& l : la ) if ( l != nullptr ) delete( l );

}


int
main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}