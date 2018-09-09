//
// Created by saber on 9/9/18.
//

#include <743_network_delay_time.hh>
#include <gtest/gtest.h>

TEST(NetworkDelayTest, Solution01Case01)
{
  std::vector<std::vector<int>> times({{1,3,68},{1,4,20},{4,1,65},{3,2,74},{2,1,44},{3,4,61},{4,3,68},{3,1,26},{5,1,60},{5,3,3},{4,5,5},{2,5,36},{2,3,94},{1,2,0},{3,5,90},{2,4,28},{4,2,12},{5,4,52},{5,2,85},{1,5,42}});
  int N = 5;
  int K = 4;
  Solution sol;
  EXPECT_EQ(34, sol.networkDelayTime(times, N, K));
}

TEST(NetworkDelayTest, Solution01)
{
 std::vector<std::vector<int> > times({{4,2,76},{1,3,79},{3,1,81},{4,3,30},{2,1,47},{1,5,61},{1,4,99},{3,4,68},{3,5,46},{4,1,6},{5,4,7},{5,3,44},{4,5,19},{2,3,13},{3,2,18},{1,2,0},{5,1,25},{2,5,58},{2,4,77},{5,2,74}}
 );
 int N = 5;
 int K = 3;
 Solution sol;
 auto res = sol.networkDelayTime(times, N, K);
 EXPECT_EQ(59, res);
}


int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}