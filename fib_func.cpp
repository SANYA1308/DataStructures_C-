// 0 1 1 2 3 5 8

#include <iostream>
using namespace std;

int fibFunc(int n){
    int a = 0;
    int b = 1;
    
    for(int i = 2; i<=n; i++){
           int nextnum = a + b;
           a = b;
           b = nextnum;

    }
    return b;
    
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    cout<<"The "<<n <<"th term of fibonacci series is "<<fibFunc(n)<<endl;
    return 0;

}