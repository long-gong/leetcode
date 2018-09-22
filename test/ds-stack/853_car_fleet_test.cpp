//
// Created by saber on 9/22/18.
//
#include <853_car_fleet.hh>
#include <gtest/gtest.h>

TEST(CarFleetTest, Solution01){
  Solution sol;
  std::vector<int> position = {10,8,0,5,3};
  std::vector<int> speed = {2,4,1,1,3};
  int target = 12;
  int expected = 3;
  EXPECT_EQ(expected, sol.carFleet(target, position, speed));
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
