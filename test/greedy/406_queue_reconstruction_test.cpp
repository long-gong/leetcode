#include "src/greedy/406_queue_reconstruction.hh"
#include <gtest/gtest.h>


TEST(QueueReconstructionTest, Solution01){
  QueueReconstruction01 qrc01;
  std::vector<std::pair<int, int> > in{{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
  std::vector<std::pair<int, int> > expected{{5, 0}, {7,0}, {5, 2}, {6, 1}, {4, 4}, {7, 1}};
  EXPECT_EQ(expected, qrc01(std::move(in)));
}

TEST(QueueReconstructionTest, Solution01Simplified){
  QueueReconstruction01_v2 qrc01;
  std::vector<std::pair<int, int> > in{{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
  std::vector<std::pair<int, int> > expected{{5, 0}, {7,0}, {5, 2}, {6, 1}, {4, 4}, {7, 1}};
  EXPECT_EQ(expected, qrc01(std::move(in)));

  std::vector<std::pair<int, int> > in2{{8,2},{4,2},{4,5},{2,0},{7,2},{1,4},{9,1},{3,1},{9,0},{1,0}};
  std::vector<std::pair<int, int> > expected2{ {1, 0}, {2, 0}, {9, 0}, {3, 1}, {1, 4}, {9, 1}, {4, 2}, {7, 2}, {8, 2}, {4, 5} };
  EXPECT_EQ(expected2, qrc01(std::move(in2)));
}

TEST(QueueReconstructionTest, Solution02){
  QueueReconstruction02 qrc02;
  std::vector<std::pair<int, int> > in{{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
  std::vector<std::pair<int, int> > expected{{5, 0}, {7,0}, {5, 2}, {6, 1}, {4, 4}, {7, 1}};
  EXPECT_EQ(expected, qrc02(std::move(in)));
}

int
main(int argc, char *argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
