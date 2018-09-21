//
// Created by saber on 9/20/18.
//
#include <735_asteroid_collision.hh>
#include <gtest/gtest.h>


TEST(AsteroidCollisionTest, Solution01)
{
  std::vector<int> asteroids = {5,10,-5};
  std::vector<int> expected = {5,10};
  Solution sol;
  EXPECT_EQ(expected, sol.asteroidCollision(asteroids));

  asteroids = {8, -8};
  expected = {};
  EXPECT_EQ(expected, sol.asteroidCollision(asteroids));

  asteroids = {10,2,-5};
  expected = {10};
  EXPECT_EQ(expected, sol.asteroidCollision(asteroids));

  asteroids = {-2, -1, 1, 2};
  expected = {-2, -1, 1, 2};
  EXPECT_EQ(expected, sol.asteroidCollision(asteroids));
}




int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
