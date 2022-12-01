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
    Hero h1;
    // h1.health = 9000;
    // h1.level = 'S';
    // cout<<"Health is: "<<h1.health<<endl;
    // cout<<"Level is: "<<h1.level<<endl;
    h1.setHealth(8000);
    h1.level = 'K';
    cout<<h1.getHealth()<<endl;
    cout<<h1.level<<endl;
    cout<<sizeof(h1)<<endl;
}