#include "src/greedy/763_partition_labels.hh"
#include <gtest/gtest.h>

TEST(PartitionLabelsTest, Solution01) {
  PartitionLabels01 pl01;
  std::string S{"ababcbacadefegdehijhklij"};
  EXPECT_EQ(std::vector<int>({9, 7, 8}), pl01(S));
}

int
main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
