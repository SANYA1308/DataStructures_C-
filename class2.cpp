#include<iostream>
using namespace std;

class Hero{
    // public:
    private:
    int health;  //here health is private and if you want to acces it then use setter and getter 
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
  // static allocation
    Hero a;
    a.setHealth(60);
    a.setLevel('B');
    cout<<a.getHealth()<<endl;
    cout<<a.level<<endl;
    
   // dynamically
   Hero *b = new Hero;

//    cout<<(*b).getHealth()<<endl;
//    cout<<(*b).getLevel()<<endl;
    b->setHealth(100);
    b->setLevel('K');
   cout<<b->getHealth()<<endl;
   cout<<b->getLevel()<<endl;


    
}