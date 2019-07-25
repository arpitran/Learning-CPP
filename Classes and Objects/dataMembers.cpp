#include <cstdio>
using namespace std;

// Structure is a class with 3 public data members
/*Difference between a class and  Structure*/
class A{
public:
  int ia;
  string sa = "";
  int ib;
  int ic;
};

struct B{
  int ia;
  int ib;
  int ic;
};



int main(){
  A a = {1,2,3};
  B b = {1,2,3};
  printf("Class B ia is %d, ib is %d, ic is %d\n",a.ia,a.ib,a.ic );
  printf("Structure A ia is %d, ib is %d, ic is %d\n",b.ia,b.ib,b.ic );
  return  0;
}
