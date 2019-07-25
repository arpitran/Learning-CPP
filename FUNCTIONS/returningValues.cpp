#include <cstdio>
#include <string>
using namespace std;

const string & func()
{
  const static string s = "this is func()";
  return s;
}

int func(int i) {
  puts("this is func()");
  return i*2;
}

int main(){
  puts("this is main()");
  int x = func(42);
  printf("x is %d\n",x );

  const string s = func();
  printf("func( returns %s)\n",s.c_str() );
  return 0;
}
