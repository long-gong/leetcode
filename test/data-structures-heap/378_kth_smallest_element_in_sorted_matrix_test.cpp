//
// Created by saber on 9/8/18.
//

#include <378_kth_smallest_element_in_sorted_matrix.hh>
#include <gtest/gtest.h>


TEST(kThElementinMatrixTest, Solution01)
{
  std::vector<std::vector<int>> matrix({
                                           { 1,  5,  9},
                                           {10, 11, 13},
                                           {12, 13, 15}
                                       });
  Solution sol;
  EXPECT_EQ(13, sol.kthSmallest(matrix, 8));

  matrix = {{1,2},{1,3}};
  EXPECT_EQ(1, sol.kthSmallest(matrix, 2));
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}