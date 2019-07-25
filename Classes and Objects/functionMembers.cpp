#include <cstdio>
using namespace std;

// a very simple class
class C1{
  int i = 0;
public:
  void setvalue(int value);
  int getvalue() const;
  int getvalue() ;
};

void C1::setvalue(int value){
  i = value;
}

int C1::getvalue() const {
  puts("const getValue()");
  return i;
}

int C1::getvalue() {
  puts("mutable getValue()");
  return ++i;
}

int main(){
  int i = 47;
  C1 o1;

  o1.setvalue(i);
  printf("value is %d\n",o1.getvalue() );

  const C1 o2;
  printf("value is %d\n",o2.getvalue() );
}
