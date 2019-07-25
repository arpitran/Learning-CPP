#include <cstdio>
using namespace std;

void func()
{
  static int i = 5;
  printf("i is %d\n",++i );
}

int main(int argc, char const *argv[]) {
  puts("this is main()");
  func();
  func();
  func();
  return 0;
}
