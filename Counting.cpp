#include <iostream>
using namespace std;

// Function Signature
void printCounting(int a){
      
    //Function body
    for(int i=1; i<=a; i++){
        cout<< i << " ";
    }
}


int main(){
    int num;
    cin>>num;
    // Function Call
    printCounting(num);

    
    return 0;

}