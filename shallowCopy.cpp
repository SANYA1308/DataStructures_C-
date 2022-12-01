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
};
int main(){
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('K');
    char name[7] = "SANYA";
    hero1.setName(name);
    hero1.print();

//using default copy constructor
    
 Hero hero2(hero1);
//  hero2.print();
//  Hero hero2 = hero1;

 hero2.name[0] = 'K';
 //Here the concept of shallow copy arrives because we wanted to change the value in hero2 only but it 
 //also got changed in hero1 this is called shallow copy when same memory gets stored in both
 hero2.print();
//  hero1.print();

//COPY ASSIGNMENT OPERATOR

  hero1 = hero2;
  hero1.print();
  hero2.print();



    
}