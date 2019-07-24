#include <cstdio>
#include <cstdint>
using namespace std;

//unsigned 8-bit string
const char * u8_to_cstr(const uint8_t & x){
  static char buf[sizeof(x)*8+1];
  for(char & c:buf)c=0; // reset buffer
  char * bp = buf;
  for(uint8_t bitmask = 0b10000000; bitmask; bitmask >>=1){
    *(bp++) = x & bitmask ? 'l' : '0';

  }
  return buf;
}

int main(){
  uint8_t x = 7;
  uint8_t y = 10;
  uint8_t z = ~y;

  printf("x is %s\n",u8_to_cstr(x) );
  printf("y is %s\n",u8_to_cstr(y) );
  printf("result is %s\n",u8_to_cstr(z) );
  printf("z is %d\n",z );

  return 0;
}
