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

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Slept"<<endl;
    }
};

int main(){
    Male object1;

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.setWeight(67);
    cout<<object1.weight<<endl;
    object1.sleep();
}