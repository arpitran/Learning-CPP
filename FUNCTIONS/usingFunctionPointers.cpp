#include <cstdio>
#include <string>

using namespace std;

void func()
{
  puts("this is func()");
}


int main(int argc, char const *argv[]) {
  void (*pfunc)() = func;
  puts("this is main()");
  pfunc();
  return 0;
}
