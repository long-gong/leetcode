//
// Created by saber on 8/22/18.
//

#include <043_multiply_strings.hh>
#include <gtest/gtest.h>

TEST(MultiplyStrings, BasicOperators){
  Solution sol;
  EXPECT_EQ(std::string("222"), sol.add_("111", "111"));

  EXPECT_EQ(std::string("210"), sol.add_("99", "111"));

  EXPECT_EQ(std::string("100"), sol.add_("99", "1"));

  EXPECT_EQ(std::string("0"), sol.multiply_("100", '0'));

  EXPECT_EQ(std::string("100"), sol.multiply_("100", '1'));

  EXPECT_EQ(std::to_string(99 * 9), sol.multiply_("99", '9'));

  EXPECT_EQ(std::string("56088"), sol.multiply("123", "456"));
  EXPECT_EQ(std::string("1111111101"), sol.multiply_("123456789", '9'));

  EXPECT_EQ(std::string("12098765322"), sol.multiply("123456789", "98"));
  EXPECT_EQ(std::string("121851850743"), sol.multiply("123456789", "987"));
  EXPECT_EQ(std::string("1219259248164"), sol.multiply("123456789", "9876"));

  EXPECT_EQ(std::string("33333"), sol.multiply_("11111", '3'));
//  EXPECT_EQ(std::string("1219326285200427"), sol.multiply("123456789", "9876543"));
}





int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}