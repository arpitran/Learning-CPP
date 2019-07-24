// Overview.cpp

/*
Primitive Types
Integer
Floating
Boolean

Integer Types
char
short int
int
long int
long long int
*/
#include <cstdio>
#include <cstdint>
using namespace std;

// a byte is 8 bits
constexpr size_t byte=8;

int main(){
  printf("sizeof char is %ld bits\n",sizeof(char)*byte);
  printf("sizeof short int is %ld bits\n",sizeof(short int)*byte);
  printf("sizeof int is %ld bits\n",sizeof(int)*byte);
  printf("sizeof long int is %ld bits\n",sizeof(long int)*byte);
  printf("sizeof long long int is %ld bits\n",sizeof(long long int)*byte);

  printf("sizeof uint8_t is %ld it\n",sizeof(uint8_t)*byte);
  printf("sizeof uint16_t int is %ld bits\n",sizeof(uint16_t)*byte);
  printf("sizeof uint32_t is %ld bits\n",sizeof(uint32_t)*byte);
  printf("sizeof uint64_t is %ld bits\n",sizeof(uint64_t)*byte);




  int x = 0x093; // literal integer value hexdecimal base 16
  printf("x is %d\n",x);

  int y = 0b010010011;
  printf("y is %d\n",y);

  long long int z = 147LL;
  printf("z is %d\n",z);
  return 0;
}
