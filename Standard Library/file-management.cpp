#include<cstdio>
using namespace std;

int main(){
  static const char * fn1 = "file1";
  static const char * fn2 = "file2";


  FILE * fh = fopen(fn1,"w");
  fclose(fh);
  puts("Closed file fn1\n");

  rename(fn1,fn2); // rename file
  puts("renamed file fn1 to fn2\n");
  remove(fn2);  // remove file
  puts("removed file fn2\n");
  puts("Done.");
  return 0;
}
