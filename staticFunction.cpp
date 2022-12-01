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
    static int timetoComplete;

    static int random(){
        return timetoComplete;
    }

    
};

int Hero::timetoComplete = 15;
int main(){
    cout<<Hero::random()<<endl;
 
    
}