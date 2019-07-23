//primitiveArray.cpp by Arpit Rana
/*
*/

#include <iostream>
#include <cstdio>
using namespace std;


int main(){
  int ia[5];
  ia[0] = 1;
  *ia = 1;
  int *ip = ia; // Assigns address of the array to integer pointer
                // Array is acessed as if it was a pointer
  *ip = 2; // Assigns value 2 to first element of Array
  ++ip; // Increment the pointer and it will reference the
        // second element
  *ip = 3; // Assigns value 3 to second element of array
  *(++ip) = 4; //Increment pointer and assign at same time


  int ia[5]={1,2,3,4,5};




  return 0
}
