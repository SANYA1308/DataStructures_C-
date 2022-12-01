#include <iostream>
using namespace std;
int getMax(int num[], int n){
    int maximum = INT32_MIN;

    for(int i=0; i<n; i++){

        if (num[i] > maximum){
             maximum = num[i];
        } 
        

    }
    return maximum;
}
    


int getMin(int num[], int n){
    int minimum = INT32_MAX;
    for(int i=0; i<n; i++){
        
        if (num[i] < minimum){
            minimum = num[i];
        } 
        
    }
    return minimum;
}
    


int main(){
    int size;
    cin>>size;

    int num[100];
    //taking input in array
    for(int i=0; i<size; i++){
        cin>> num[i];
    }
    //take the input of array
    cout<<"Max Value is: "<<getMax(num, size)<<endl;
    cout<<"Min Value is: "<<getMin(num, size)<<endl;
}