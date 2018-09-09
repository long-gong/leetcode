//
// Created by saber on 9/6/18.
//
#include <313_super_ugly_number.hh>
#include <gtest/gtest.h>


TEST(SuperUglyNumberTest,Solution01)
{
  std::vector<int> primes({2,7,13,19});
  int n = 12;
  Solution sol;
  EXPECT_EQ(32, sol.nthSuperUglyNumber(n, primes));
}


int main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
