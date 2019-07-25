#include <cstdio>
using namespace std;

int main(){
  struct X{
    int a;
    int b;
    char c;
    char d;
    long long int e;
    long long int f;
  };

  printf("size of X is %zd\n",sizeof (X) );

  return 0;

}
