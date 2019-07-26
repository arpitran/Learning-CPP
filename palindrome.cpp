#include <iostream>

using namespace std;

int main(){
  string text = "TACOCAT";
  bool palindrome = true;

  for(int i = 0; i <(text.length()-1)/2;i++)
  {
    if (text[i]!=text[(text.length()-1)-i])
    {
      palindrome=false;
      i = text.length()+1;
    }
  }
  if (palindrome)
  {
    cout << "this string is a Palindrome"<<endl;
  }
  else
  {
    cout<<"this is not a palindrome"<<endl;
  }
}
