#include <iostream>
using namespace std;

int area(char a, int x=0, int y=0){
    if(a == 's'){
        return x*x;

    }

    else if(a == 'r'){
        return x*y;
    }

    else{
        return 3.14*x*x;
    }
}

int main(){
    cout<<area('s',2)<<endl;
    cout<<area('r',2,3)<<endl;
    cout<<area('c',3)<<endl;
}