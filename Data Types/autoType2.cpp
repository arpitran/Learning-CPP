#include <cstdio>
#include <vector>
using namespace std;

int main(){
  vector <int> vi = {1,2,3,4,5}; //vector is another stl class
  for(auto it = vi.begin(); it != vi.end(); ++it){ //iterator class (using auto instead of vector<int>::iterator)
    printf("int is %d\n", *it);
  }
  return 0;
}
