#include <iostream>
using namespace std;
int main(){
    int arr[10], i, sum=0;
    for(i=0; i<10, i++){
        cin>>arr[i];
    }
    for(i=0; i<10; i++){
        if(arr[i]%2 == 1){
            sum = sum + arr[i];
        }
    }

    
    
}