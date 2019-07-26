/*
Create a Monster() class that inherits from the Character() class, but takes 2x damage
*/

#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
  int health;

public:
  Character(){health = 100;}
  int getHealth(){return health;}
  void getHurt(int hurtValue){health-=hurtValue;}

};


class monster : public Character
{
public:
  virtual void getHurt(int hurtValue){health-=(2*hurtValue);}
};


int main(){
  Character player1;
  Character ogre1;
  cout<< player1.getHealth()<<endl;
  player1.getHurt(10);
  cout<<player1.getHealth()<<endl;
  return 0;
}
