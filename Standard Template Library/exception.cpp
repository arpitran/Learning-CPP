#include <iostream>
#include <exception>
using namespace std;

class E : public exception {
  const char * msg;
  E();
public:
  E(const char * s)throw():msg(s){}
  const char * what() const throw() {return msg;}
};

void broken(){
  cout<<"this is a broken function"<<endl;
  throw E("ouch!");
}

int main(){
  cout << "lets have an emergency!"<<endl;
  try{
    broken();
  } catch(E & e){
    cout << e.what()<<endl;
  }
  return 0;
}
