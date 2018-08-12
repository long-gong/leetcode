#include "src/greedy/605_can_place_flowers.hh"
#include <gtest/gtest.h>


TEST(FlowersPlaceTest, Solution01) {
  PlaceFlowers01 pf01;
  EXPECT_TRUE(pf01(std::vector<int>({1, 0, 0, 0, 1}), 1));
  EXPECT_FALSE(pf01(std::vector<int>({1, 0, 0, 0, 1}), 2));
}

int 
main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
