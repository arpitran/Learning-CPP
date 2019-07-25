#include <cstdio>
using namespace std;

const char * prompt();
int jump (const char *);

void fa() { puts("this is fa()");}
void fb() { puts("this is fb()");}
void fc() { puts("this is fc()");}
void fd() { puts("this is fd()");}
void fe() { puts("this is fe()");}

void (*funcs[])() = {fa,fb,fc,fd,fe};

int main(){
  while(jump(prompt()));
  puts("\nDone.");
  return 0;

}

const char * prompt (){
  puts("Choose an option:");
  puts("1.Function fa()");
  puts("2.Function fb()");
  puts("3.Function fc()");
  puts("4.Function fd()");
  puts("5.Function fe()");
  puts("Q. Quit.");
  printf(">> ");
  fflush(stdout); // flush afer prompt

  const int buffsz = 16; // constant for buffer size
  static char response[buffsz];
  fgets(response,buffsz,stdin);

  return response;


}

int jump(const char * rs){
  char code = rs[0];
  if(code == 'q' || code == 'Q') return 0;

  //get length of the funcs array
  int func_length = sizeof(funcs)/sizeof(funcs[0]);

  int i = (int) code - '0'; //Convert ASCII numeral to int
  if(i<1 || i >func_length){
    puts("inavlid choice");
    return 1;

  }else{
    funcs[i-1]();
    return 1;
  }
}
