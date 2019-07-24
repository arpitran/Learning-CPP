#include <cstdio>
#include <new>
using namespace std;

constexpr size_t count = 1024;

int main(){
  printf("allocate space for %lu long int at *ip with new\n",count );

  //allocate array
  long int * ip;
  try{
    ip = new long int [count];
  } catch (std::bad_alloc & ba){
    fprintf(stderr,"Cannot allocate memroy (%s)\n", ba.what() );
    return 1;
  }
  //initialize array
  for(long int i = 0; i < count; ++i){
    ip[i] = i;
  }

  //print array
  for(long int i = 0; i < count; ++i){
    printf("%ld ",ip[i] );
  }
  puts("");

  //deallocate array
  delete [] ip;
  puts("space at *ip deleted");

  return 0;
}
