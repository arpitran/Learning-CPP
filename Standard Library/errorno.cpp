#include <cstdio>
#include <cstring>
#include <cerrno>

int main(){
  printf("errno is: %d\n",errno );
  printf("Erasing file foo.bar\n" );
  remove("foo.bar");
  printf("errno is: %d\n",errno );
  perror("Cannot erase file");
  const char * errstr = strerror(errno);
  printf("Tried to erase a file and this happened: %s\n",errstr );
}
