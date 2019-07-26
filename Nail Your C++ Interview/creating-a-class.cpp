/*
Challenge Question
Add a constructor to a video game's
Character() class that sets health to 100.
*/


#include <iostream>
#include<string>
using namespace std;

class Character
{
public:
  int health;
  Character(){health = 100;}
};

int main(){

  Character player1;
  cout<<player1.health;

}
