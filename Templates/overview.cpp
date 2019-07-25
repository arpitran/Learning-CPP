//Generic programming
// Standard template libary
// Template programming downsides
// Larger executables
// Condusing error messages
// Longer compile times
// Powerful feature

#include <cstdio>
#include <string>
using namespace std;

template <typename T>
T maxof (T a,T b){
  return (a>b?a:b);
}

int main(int argc, char const *argv[]) {
  int m = maxof<int>(7,9);
  string n = maxof<string>("seven","nine");
  printf("max is %d\n",m );
  printf("max is %s\n", n.c_str());
  return 0;
}
