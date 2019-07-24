#include <cstdio>

using namespace std;

// a byte is 8 bits

constexpr size_t byte = 8;

int main(){
  float f;
  double df;
  long double ldf;

  printf("Size of float f is %ld bits\n",sizeof(f)*byte);
  printf("Size of double float df is %ld bits\n",sizeof(df)*byte);
  printf("Size of long double float is %ld bits\n",sizeof(ldf)*byte);

  ldf = .1+.1+.1;
  if(ldf == 0.3){
    puts("True");
  }else{
    puts("False");
  }
  printf("value of ldf is %1.20Lf\n",ldf);

  return 0;

}
