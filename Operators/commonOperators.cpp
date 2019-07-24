#include <cstdio>
using namespace std;

int main(){
  int x = 5;
  int y = 47;
  y=x;
  x = y + x;
  x = y - x;
  x = y*x;
  x = y%x; //returns remainder
  x = -y;
  x = +y;
  printf("x is %d\n",x );
  printf("y is %d\n",y );
  return 0;
}
