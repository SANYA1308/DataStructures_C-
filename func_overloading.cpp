#include <iostream>
using namespace std;
 float add(int x, int y){
    return (x + y);
 }
 float add(int x, int y, int z){
    return (x+y+z);
 }
 float add(float x, int y){
    return (x+y);
}

int main(){
    cout<<add(2,3)<<endl;
    cout<<add(2,4,5)<<endl;
    cout<<add(2.1, 3)<<endl;
}