#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0) /* common C++ definition */
#endif

void f(int i){
  printf("the int is %d\n", i );
}

void f( const char * s) {
  printf("the pointer is %p\n", s );
}

int main(){
  f(nullptr);
  f(NULL);
  f(0);

  return 0;
}

/*The null pointer is defined as a constant that can be converted into a
null pointer value */
