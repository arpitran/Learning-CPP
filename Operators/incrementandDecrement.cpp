#include <cstdio>
using namespace std;

void printp(int *p){
  printf("pointer is %p, value is %d\n",p ,*p );
}

int main(){
  int i = 0;
  printf("prefix increment\n");
  printf("i is %d\n",++i );
  printf("i is %d\n",++i );
  printf("i is %d\n",++i );

  printf("postfix increment\n");
  printf("i is %d\n",i++ );
  printf("i is %d\n",i++ );
  printf("i is %d\n",i++ );

  printf("prefix decrement\n");
  printf("i is %d\n",--i );
  printf("i is %d\n",--i );
  printf("i is %d\n",--i );

  printf("postfix decrement\n");
  printf("i is %d\n",i-- );
  printf("i is %d\n",i-- );
  printf("i is %d\n",i-- );

  printf("Pointer\n");
  int arr[5] = {1,2,3,4,5};
  int *p = arr;
  printp(p++);
  printp(p++);
  printp(p++);

  puts("Hello, World!");
  return 0;
}
