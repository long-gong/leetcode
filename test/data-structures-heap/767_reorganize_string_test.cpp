//
// Created by saber on 9/9/18.
//

#include <767_reorganize_string.hh>
#include <gtest/gtest.h>


TEST(ReorganizeStringTest, Solution01)
{
  std::string s("aab");
  Solution sol;
  auto res = sol.reorganizeString(s);
  std::cout << res << std::endl;
  EXPECT_TRUE(!res.empty());

  s = "baaba";

  res = sol.reorganizeString(s);
  std::cout << res << std::endl;
  EXPECT_TRUE(!res.empty());

  s = "aaab";
  res = sol.reorganizeString(s);
  EXPECT_TRUE(res.empty());


  s = "kkkkzrkatkwpkkkktrq";

  res = sol.reorganizeString(s);
  std::cout << res << std::endl;


  s = "tndsewnllhrtwsvxenkscbivijfqnysamckzoyfnapuotmdexzkkrpmppttficzerdndssuveompqkemtbwbodrhwsfpbmkafpwyedpcowruntvymxtyyejqtajkcjakghtdwmuygecjncxzcxezgecrxonnszmqmecgvqqkdagvaaucewelchsmebikscciegzoiamovdojrmmwgbxeygibxxltemfgpogjkhobmhwquizuwvhfaiavsxhiknysdghcawcrphaykyashchyomklvghkyabxatmrkmrfsppfhgrwywtlxebgzmevefcqquvhvgounldxkdzndwybxhtycmlybhaaqvodntsvfhwcuhvuccwcsxelafyzushjhfyklvghpfvknprfouevsxmcuhiiiewcluehpmzrjzffnrptwbuhnyahrbzqvirvmffbxvrmynfcnupnukayjghpusewdwrbkhvjnveuiionefmnfxao";
  res = sol.reorganizeString(s);
  std::cout << res << std::endl;

}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}