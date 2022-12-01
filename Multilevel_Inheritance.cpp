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

class GermanShepherd: public Dog{

};

int main(){
    GermanShepherd g;
    g.speak();
    g.setAge(12);
    cout<<g.getAge()<<endl;
}