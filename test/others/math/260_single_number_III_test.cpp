//
// Created by saber on 8/22/18.
//

#include <260_single_number_III.hh>
#include <gtest/gtest.h>


TEST(SingleNumberIIITest, SolutionSteal)
{
  Solution sol;
  auto res = sol.singleNumber({1,2,1,3,2,5});
  std::sort(res.begin(), res.end());
  EXPECT_EQ(std::vector<int>({3,5}), res);
}


int
main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}