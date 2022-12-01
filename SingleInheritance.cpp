#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

    int getAge(){
        return this->age;
    }

    void setAge(int a){
        this->age = a;
    }
};

class Dog: public Animal{
    int number;
};


int main(){
    Dog d1;
    d1.speak();
    d1.setAge(12);
    cout<<d1.getAge()<<endl;
}