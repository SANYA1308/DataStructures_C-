#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }

    int getAge(){
        return this->age;
    }

    void setAge(int a){
        this->age = a;
    }
};

class Human {
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Hybrid: public Animal, public Human{

};

int main(){
    Hybrid h1;
    h1.speak();
    h1.bark();
    h1.setAge(12);
    cout<<h1.getAge()<<endl;
}