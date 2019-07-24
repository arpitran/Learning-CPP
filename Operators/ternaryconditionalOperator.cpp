// Chose a value based on a condition

#include <cstdio>
using namespace std;

int main(){
  int x = 5;
  int y = 42;
  const char * s = x > y ? "yes" : "no";

  puts(s);
  puts("Hello World!");
  return 0;
}
