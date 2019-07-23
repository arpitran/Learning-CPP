// Working.cpp by Arpit Rana
/* C doesnt have references it is an exclusive feature of
CPP
Multi-line comments
*/

#include <iostream>
#include <cstdio>
using namespace std;


int main(){
  int x = 7;
  int *ip = &x;
  int &y = x; // Thats a reference. Variable y is a reference
              /* The value of y is always the value of x*/


  puts("Hello, World!");
  printf("The value of *ip is %d\n",*ip);
  printf("The value of x is %d\n",x);
  printf("The value of y is %d\n",y);

  y = 42; // X changes as well
// Once a reference is defined it cannot be changed

  puts("Hello, World!");
  printf("The value of *ip is %d\n",*ip);
  printf("The value of x is %d\n",x);
  printf("The value of y is %d\n",y);

  int z = 73;
  ip = &z;
  puts("Hello, World!");
  printf("The value of *ip is %d\n",*ip);
  printf("The value of x is %d\n",x);
  printf("The value of y is %d\n",y);
  printf("The value of z is %d\n",z);


return 0;
}
