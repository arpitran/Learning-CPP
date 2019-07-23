//cForLoop.cpp by Arpit Rana

#include <cstdio>
using namespace std;

int main()
{
  //basic for Loop
  for (int i = 0; i < 5; ++i) {
    printf("i is %d\n",i);
    /* code */
  }

  char string[] = "abcdefg";
  for (int i = 0; string[i]; ++i) {
    printf("i is %c\n",string[i]);
    /* code */
  }
printf("For loop with Character Pointer\n");
  // For loop with pointer
  for (char * cp = string;*cp; ++cp) {
    printf("i is %c\n",*cp);
    /* code */
  }

printf("Ranged based for loop\n");
int array[] = {1,2,3,4,5};

for (int i: array) {
  printf("i is %d\n",i);
}

printf("Ranged based for loop with strings\n");

for (char c: string) {
  if (c==0) break;
  printf("c is %c\n",c);
}


  return 0;
}
