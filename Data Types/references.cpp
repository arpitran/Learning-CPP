/*
CV Qualifiers   Storage Duration
const           static     (read-only)
volatile        register   (can be changed used for threaded code)
mutable         extern
*/

#include <cstdio>
using namespace std;

const int & f(const int & i){
  int _i = i;
  return ++_i;
};

int main(){
  int i = 5;
  int & ir = i;
  ir = 10;
  printf("i is %d\n", i);

  printf("f() is %d\n",f(i));
  printf("i is %d\n",i);

  return 0;



}
