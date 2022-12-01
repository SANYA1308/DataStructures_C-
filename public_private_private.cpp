#include <iostream>
using namespace std;

class Human{
    public:
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

class Male: private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Slept"<<endl;
    }

    int getHeight(){
       return this->height;   
    }
};

int main(){
    Male object1;

    cout<<object1.getHeight()<<endl;
}