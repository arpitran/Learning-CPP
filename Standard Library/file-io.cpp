#include <cstdio>
using namespace std;

constexpr int maxstring = 1024; //read buffer size
constexpr int repeat = 5;

int main(int argc, char const *argv[]) {
  const char * fn = "testfile.txt"; //file name
  const char * str = "This is a literal c-string.\n";

  //Create /Write the testfile
  printf("Writing file\n");
  FILE * fw = fopen(fn,"w");
  for(int i = 0; i<repeat; i++){
    fputs(str,fw);
  }
  fclose(fw);
  printf("Done.\n");

  // Read the dile
  printf("reading file\n");
  char buf[maxstring];
  FILE * fr = fopen(fn,"r");
  while(fgets(buf,maxstring,fr)){
    fputs(buf,stdout);

  }
  fclose(fr);
  remove(fn);
  printf("done.\n" );
  return 0;
}
