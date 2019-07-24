/* A union is a data structure that allows you to use the same
memory space for different types*/

#include <cstdio>
#include <cstdint>

using namespace std;

// This whole union is called ipv4
// This allows you to have same representation of the data in the same space
union ipv4 {
  uint32_t i32; // <this is a unsigned 32 bit integer
  struct {      // <this is 4 sets of unsigned 8 bit integers
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
  } octets;
};

int main()
{
  union ipv4 addr;
  addr.octets = {192,168,73,42};
  printf("addr is %d.%d.%d.%d is %08x\n",
          addr.octets.a,addr.octets.b,addr.octets.c,addr.octets.d,
          addr.i32); // < this is 32 bit version of the IP Address expressed as hexadecimal
}

// Common use - providing different representation of the same data
