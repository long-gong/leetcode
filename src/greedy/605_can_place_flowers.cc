
#include "605_can_place_flowers.hh"
bool PlaceFlowers01::operator()(vector<int> &&flowerbed, int n) {
  if ( n == 0 ) return true;
  if ( flowerbed.empty() ) return false;
  
  auto len = flowerbed.size();
  
  switch (len) {
    case 1:return ( flowerbed[0] == 0 && n <= 1 );
    case 2:return ( flowerbed[0] == 0 && flowerbed[1] == 0 && n <= 1 );
    default:
      if ( flowerbed[0] == 0 && flowerbed[1] == 0 ) {
        flowerbed[0] = 1;
        -- n;
      }
      for ( int i = 1; n > 0 && i < flowerbed.size() - 1; ++ i ) {
        if ( flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0 ) {
          flowerbed[i] = 1;
          -- n;
          ++ i;
        } 
      }
      if ( n > 0 && flowerbed[len - 1] == 0 && flowerbed[len - 2] == 0) {
        -- n;
      }
      return n == 0;
  }
}
