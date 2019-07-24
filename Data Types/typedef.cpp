/* Typedef maybe used to provide an alias for a type name
This can be handy where a type definition becomes cumbersome
*/

#include <cstdio>
using namespace std;

typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score {
  points_t p;
  rank_t r;
};

int main(){
  score s ={ 5 , 1};
  printf("score s has %d points and rank of %d\n",s.p,s.r );
  puts("Hello, World!");
  return 0;
}
