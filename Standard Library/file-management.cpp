#include<cstdio>
using namespace std;

int main(){
  static const char * fn1 = "file1";
  FILE * fh = fopen(fn1,"w");
  fclose(fh);
  puts("Done.");
  return 0;
}
