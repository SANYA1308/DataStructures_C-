#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Func1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"Inside func2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"Inside func3"<<endl;
    }
};

int main(){
    A object1;
    object1.func1();
   
   B b2;
   b2.func1();
   b2.func2();

   C c2;
   c2.func1();
   c2.func3();

}