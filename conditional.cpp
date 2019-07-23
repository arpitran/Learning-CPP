// conditional.cpp by Arpit Rana

#include <cstdio>
using namespace std;

int main(){

  int x = 42;
  int y = 50;
  if (x>y){
    puts("Condition is true");
  } else if(y>12){
    puts("Y is greater than 12");
  }
    else{
    puts("Condition is false");
  }

  printf("Value is %d\n",x<y);

  if(1){
    puts("Condition is true");
  } else {
    puts("Condition is false");
  }

  printf("The greater value is %d\n",x>y?x:y); //Terenary Operation


  puts("Hello Again, World!");
  return 0;

}
