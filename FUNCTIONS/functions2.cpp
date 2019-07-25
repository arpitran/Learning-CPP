//functions2.cpp by Arpit Rana
#include <cstdio>
#include <string>
#include "func.h"
using namespace std;

void func(int i){
  i = 73;
  printf("the value is %d\n",i );
}

void func(const string & s ){

  printf("the value is %s\n",s.c_str() );
}


int main()

{
  int i = 42;
  puts("Hello, World!");
  func(i);
  printf("after func() i is %d\n",i );

  string s = "this is a string!";
  func(s);
  return 0;



  return 0;

}
