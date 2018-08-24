//
// Created by saber on 8/22/18.
//

#include "137_single_number_II.hh"

#include <gtest/gtest.h>

TEST(SingleNumberIITest, Premilary)
{
  auto x = std::numeric_limits<int>::max();
  int b = 0x1;
  std::cout << "INT_MAX :            " << x << " = ";
  for (size_t k = 0;k < sizeof(x) * 8;++ k) {
    if ( b & x ) std::cout << "1";
    else std::cout << "0";
    b = b << 1;
  }
  std::cout << std::endl;
  auto y = std::numeric_limits<unsigned>::max();
  std::cout << "INT_MAX (unsigned) : " << y << " = ";
  b = 1;

  for (size_t k = 0;k < sizeof(y) * 8;++ k) {
    if ( b & y ) std::cout << "1";
    else std::cout << "0";
    b = b << 1;
  }
  std::cout << std::endl;
}
TEST(SingleNumberIITest, Solution01)
{
  Solution sol;
  EXPECT_EQ(3, sol.singleNumber(std::vector<int>({2,2,3,2})));
}



int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}