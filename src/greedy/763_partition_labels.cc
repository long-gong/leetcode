
#include "763_partition_labels.hh"
std::vector<int> PartitionLabels01::operator()(std::string S) {
    std::vector<int> last_appear(26);
    for (int k = 0;k < S.size();++ k) {
      auto ch = S.at(k);
      assert( ch >= 'a' && ch <= 'z' );
      last_appear[ch - 'a'] = k;
    }
    std::vector<int> result;
    int j, max_last, k_bk;
    for (int k = 0;k < S.size();) {
      k_bk = k;
      j = S.at(k) - 'a';
      if ( last_appear[j] == k ) {
        result.emplace_back(1);
        ++ k;
      } else {
        max_last = last_appear[j];
        while ( k < max_last ) {
          ++ k;
          max_last = std::max(max_last, last_appear[S.at(k) - 'a']);
          if ( max_last == S.size() - 1 ) break;
        }
        result.emplace_back( max_last - k_bk + 1 );
        k = max_last + 1;
      }
    }

    return result;
}
