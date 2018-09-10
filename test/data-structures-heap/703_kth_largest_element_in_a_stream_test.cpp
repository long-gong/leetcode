//
// Created by saber on 9/9/18.
//

#include <703_kth_largest_element_in_a_stream.hh>
#include <gtest/gtest.h>

TEST(KtheLargestElementStreamTest, Solution){
  int k = 3;
  std::vector<int> arr({4,5,8,2});
  KthLargest obj(k, arr);
  
  EXPECT_EQ(4, obj.add(3));
  EXPECT_EQ(5, obj.add(5));
  EXPECT_EQ(5, obj.add(10));
  EXPECT_EQ(8, obj.add(9));
  EXPECT_EQ(8, obj.add(4));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}