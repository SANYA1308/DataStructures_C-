#include<iostream>
using namespace std;

class Hero{
    // public:
    private:
    int health;  //here health is private and if you want to acces it then use setter and getter 
    public:
    char level;

    Hero(){
        cout<<"Simple constructor called "<<endl;
    }

 //Parameterized Constructor
    Hero(int health){
        cout<<this<<endl;
        this -> health = health;
    }

    Hero(int health, char level){
        
        this -> health = health;
        this -> level = level;
    }
//Copy Constructor
    Hero(Hero& temp){
        cout<<"Copy Constructor Called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"Health is : "<<this -> health<<endl;
         cout<<"Level is : "<<this -> level<<endl;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // void setHealth(int h){
    //     health = h;
    // }
    // void setLevel(char ch){
    //     level = ch;
    // }
};
int main(){
  Hero suresh(60,'K');
  suresh.print();
//Copy Constructor
  Hero R(suresh);
  R.print();


    




    
}