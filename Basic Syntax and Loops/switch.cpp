// switch.cpp by Arpit Rana

// The Branching Conditional

#include <cstdio>
using namespace std;

int main(){
  const int iONE = 1;
  const int iTWO = 2;
  const int iTHREE = 3;
  const int iFOUR = 4;

  int x = 3;
  switch(x){
    case iONE:
      puts("one");
      break;
    case iTWO:
      puts("two");
      break;
    case iTHREE:
      puts("three");
      break;
    case iFOUR:
      puts("four");
      break;
    default:
      puts("default");
      break;
  }
  puts("After the switch");
}
