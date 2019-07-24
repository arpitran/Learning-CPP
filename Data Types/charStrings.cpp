#include <cstdio>

using namespace std;

// a byte is 8 bits

int main(){
  char cstring[] = "String";
  printf("The string is: %s\n",cstring);

  for (unsigned int i = 0; cstring[i]; i++ ){
    printf("%02d: %c\n",i,cstring[i]);
  }

  const char * string = "String" " foo";

  printf("The string is: %s\n",string);

  for (unsigned int i = 0; string[i]; i++ ){
    printf("%02d: %c\n",i,string[i]);
  }

  return 0;

}
