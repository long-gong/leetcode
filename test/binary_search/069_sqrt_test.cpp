//
// Created by saber on 8/18/18.
//
#include <src/binary_search/069_sqrt.hh>
#include <gtest/gtest.h>

TEST(SqrtTest, Solution01)
{
  Sqrt01 s01;
  EXPECT_EQ(2, s01(4));

  EXPECT_EQ(2, s01(8));
}

TEST(SqrtTest, Solution01Large)
{
  std::random_device rd;  //Will be used to obtain a seed for the random number engine
  std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
  std::uniform_int_distribution<> dis(0, int(1e6));

  auto rgn = std::bind(dis, gen);

  int N = 1000;
  Sqrt01 s01;
  for ( int i = 0;i < N;++ i ) {
    auto r = rgn();
    EXPECT_EQ(int(std::sqrt(r)), s01(r));
  }
}


int
main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
