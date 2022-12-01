#include <iostream>
using namespace std;

int sum(int x , int y){
    int add = x + y;
    return add;
}
int main(){
    int a, b;
    cout<<"Enter 2 integers:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Sum of both integers: "<<sum(a,b)<<endl;
    

}