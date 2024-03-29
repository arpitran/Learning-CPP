/*
CV Qualifiers   Storage Duration
const           static     (read-only)
volatile        register   (can be changed used for threaded code)
mutable         extern
*/

#include <cstdio>
using namespace std;

class S {
public:
  int static_value(){
    static int x = 7;
    return ++x;
  }
};

int func(){
   static int x = 7; // Making it static
  return ++x;
}

int main(){
int i = 42;
i = func();
printf("The integer is %d\n",i);
i = func();
printf("The integer is %d\n",i);

S a;
S b;
S c;
printf("a.static_value() is %d\n",a.static_value());
printf("b.static_value() is %d\n",b.static_value());
printf("c.static_value() is %d\n",c.static_value());

return 0;
}
