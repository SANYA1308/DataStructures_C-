#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        // Print the space
        int space = 1;
        while(space<=row){
            cout<<" ";
            space = space + 1;
   }
        cout<<endl;
        row = row + 1;
    }
}
/*
    n=5
    54321
     4321
      321
        1


*/