#include <cstdio>
using namespace std;

int main(){
  int x = 42;
  int y = 5;
  x += y;
  x -= y;
  x *= y;
  x /= y;
  x %= y; //Modulus - Remainder of Division

  printf("x is %d\n",x );
  puts("Hello, World!");
  return 0;
}
