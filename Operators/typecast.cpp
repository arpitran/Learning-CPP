#include <cstdio>
using namespace std;

int main(){
  int x = 5;
  long long int y;
  y = x;
  x = (int) y;

  const char * s = "string";
  x = (int) s;



  printf("x is %d\n",x );
  printf("y is %lld\n",y );

  return 0;


}
