#include<iostream>
using namespace std;
#include <cstring>

class Hero{
    // public:
    private:
    int health;  //here health is private and if you want to acces it then use setter and getter 
    public:
    char *name;
    char level;

    Hero(){
        cout<<"Simple constructor called "<<endl;
    }

 //Parameterized Constructor
    Hero(int health){
        //cout<<this<<endl;
        this -> health = health;
    }

    Hero(int health, char level){
        
        this -> health = health;
        this -> level = level;
    }
//Copy Constructor
    // Hero(Hero& temp){
    //     cout<<"Copy Constructor Called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print(){
        cout<<endl;
        cout<<this->name<<endl;
        cout<<"Health is : "<<this -> health<<endl;
         cout<<"Level is : "<<this -> level<<endl;
         cout<<endl;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

    //DESTRUCTOR
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
  //static
    Hero a;
  //dynamic
  
    Hero *b = new Hero();
  //manually call the destructor
  delete b;
    
}