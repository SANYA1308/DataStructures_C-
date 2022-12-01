#include<iostream>
using namespace std;

class Hero{
    // public:
    private:
    int health;  //here health is private and if you want to acces it then use setter and getter 
    public:
    char level;


    Hero(int health){
        cout<<this<<endl;
        this -> health = health;
    }

    Hero(int health, char level){
        cout<<this<<endl;
        this -> health = health;
        cout<<this<<endl;
        this -> level = level;
    }
    
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //  void setHealth(int h){
    //      health = h;
    //  }
    // void setLevel(char ch){
    //     level = ch;
    // }
};
int main(){
  // static allocation
    Hero a(20);
    cout<<"Address of a: "<<&a<<endl;
    a.setHealth(100); 
    cout<<a.getHealth()<<endl;

    Hero b(19, 'K');
    cout<<"Address of b: "<<&b<<endl;
    cout<<b.getLevel();

    




    
}