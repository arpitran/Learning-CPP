#include <cstdio>
using namespace std;

int main()
{
  const int bufsize = 256;
  static char buf[bufsize];
  fputs("prompt: ",stdout);
  fflush(stdout);
  fgets(buf, bufsize, stdin);
  fputs(buf,stdout);

  puts("Hello, World!"); //Simple displays text on the console. Works on Stdout file steam stdout.
  fputs("Hello, World!",stdout); // Second argument for fputs is the file handle for the console
  return 0;
}
