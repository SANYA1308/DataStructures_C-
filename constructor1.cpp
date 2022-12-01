#include<iostream>
using namespace std;

class Hero{
    public:
    
    Hero(){
        cout<<"constructor called"<<endl;
    }
    
};
int main(){
  // static allocation
  cout<<"Hii"<<endl;
    Hero a;
  cout<<"Hello"<<endl;

  //dynamically
  cout<<"1"<<endl;
  Hero *b = new Hero;
  cout<<"2"<<endl;
    
}