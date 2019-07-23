// Looping with While and do whileAndDoLoop.cpp

#include <cstdio>
using namespace std;

int main(){
  int array[] = {1,2,3,4,5};
  int i = 0;

  while (i<10) {
    if (i==2) break;
    printf("element %d is %d\n", i,array[i]);
    ++i;
  }

  while (i<5) {
    if (i==2) {
      ++i;
      continue; // skips a element in an array
    }
    printf("element %d is %d\n", i,array[i]);
    ++i;
  }
i = 0;
printf("Do Loop\n");
  do {
    printf("element %d is %d\n",i,array[i]);
    ++i;
  } while(i<4);
  return 0;
}
