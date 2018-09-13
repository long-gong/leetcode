//
// Created by saber on 9/12/18.
//

#include <341_flatten_nested_list_iterator.hh>
#include <gtest/gtest.h>



TEST(FlattenNestedListTest, Solution01){
  std::vector<std::vector<int> > nums({{1,1}, {2}, {1,1}});
  std::vector<NestedInteger> nestList;
  for ( const auto& x : nums ) nestList.emplace_back(x);
  NestedIterator i(nestList);
  while (i.hasNext()) std::cout << i.next();
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}