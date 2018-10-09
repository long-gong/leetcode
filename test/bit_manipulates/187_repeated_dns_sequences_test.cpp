//
// Created by saber on 9/23/18.
//

#include <187_repeated_dns_sequences.hh>
#include <gtest/gtest.h>



TEST(RepeatedDnaTest, Samples){
  Solution sol;
  string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
  auto res = sol.findRepeatedDnaSequences(s);
  
  for ( const auto& ss : res ) std::cout << ss << std::endl;
}




int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}