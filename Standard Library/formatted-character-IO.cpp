#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
  int i = 5;
  long int li = 1234567890;
  const char * s = "This is a string. ";
  printf("i is %d, li is %ld,length of s is %zd\n", i,li,strlen(s));
  return 0;
}
