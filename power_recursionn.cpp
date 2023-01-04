#include <iostream>
using namespace std;

int power(int b, int p){
    if(p ==0){
        return 1;
    }
    if(p == 1){
        return b;
    }
    else{
        return b*power(b,p-1);
    }
}

int main(){
    int b;
    cin>>b;
    int p;
    cin>>p;
    cout<<power(b,p);
}