// primitiveStrings.cpp by Arpit Rana

#include <cstdio>
using namespace std;

int main(){
  char s[] = "Strings";
  printf("String is :%s\n",s);

  for(int i = 0; s[i] !=0; ++i){
    printf("char is %c\n",s[i]);
  }

  for(char * cp = s; *cp; ++cp){
    printf("char is %c\n",*cp);
  }

  for(char c:s){
    if(c == 0) break;
    printf("character is %c\n",c);
  }


  return 0;
}
