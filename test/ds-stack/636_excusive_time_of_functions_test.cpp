//
// Created by saber on 9/18/18.
//

#include <636_excusive_time_of_functions.hh>
#include <gtest/gtest.h>


TEST(ExclusiveTimeofFunctionsTest, Solution01){
  std::vector<string> logs = {
      "0:start:0",
      "1:start:2",
      "1:end:5",
      "0:end:6"
  };
  int n = 2;

  std::vector<int> expected = {3,4};

  Solution sol;
  EXPECT_EQ(expected, sol.exclusiveTime(n, logs));

  logs = {
      "0:start:0",
      "0:end:3",
      "1:start:4",
      "1:end:6"
  };

  expected = {4,3};
  EXPECT_EQ(expected, sol.exclusiveTime(n, logs));

  n = 4;
  logs = {
      "0:start:0",
      "1:start:4",
      "1:end:6",
      "2:start:7",
      "3:start:8",
      "3:end:9",
      "2:end:10",
      "1:start:11",
      "1:end:15",
      "0:end:19"
  };

  expected = {8,8,2,2};
  EXPECT_EQ(expected, sol.exclusiveTime(n, logs));

  n = 8;
  logs = {"0:start:0","1:start:5","2:start:6","3:start:9","4:start:11","5:start:12","6:start:14","7:start:15","1:start:24","1:end:29","7:end:34","6:end:37","5:end:39","4:end:40","3:end:45","0:start:49","0:end:54","5:start:55","5:end:59","4:start:63","4:end:66","2:start:69","2:end:70","2:start:74","6:start:78","0:start:79","0:end:80","6:end:85","1:start:89","1:end:93","2:end:96","2:end:100","1:end:102","2:start:105","2:end:109","0:end:114"};
  sol.exclusiveTime(n, logs);
}







int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}