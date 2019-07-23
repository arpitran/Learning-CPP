// helloWorld.cpp by Arpit Rana
/*
Multi-line comments
*/

#include <iostream>
#include <cstdio>
using namespace std;


int main(){
  int x = 1; // Integer variable is copied to memory location of x
  int y = x; // Example of definition and assignment (separate location)

  /* CPP pointer type
  Points to a value instead of carrying a value
  */
  int *ip;  // This is a pointer definition (Integer Pointer)
  int ip = &x; /*Here & is called reference operator(address of operator)
                Returns the address of a object
                Assigns Address of x to integer pointer (ip)
                Integer pointer ip points to integer variable x*/
  y = *ip;  /* This copies the value pointed to by ip which currently
                Which currently points to integer variable x to the
                the integer variable y*/


  x = 5;
  y = 42;

  int z = 72;
  ip = &z;





  printf("x is %d\n",x);
  printf("y is %d\n",y);
  printf("*ip is %d\n",*ip);
  printf("z is %d\n",z);



  const int i=7; //Read only variable (cannot be changed)
  printf("The value is %d\n",i);


  cout << "cout Hello, World!"<< endl;
  const char * str = " string Hello, World!";
  puts(str);
  puts("puts Hello, World!");
  printf("printf Hello, World!\n Hello");
return 0;
}
