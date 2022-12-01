#include <iostream>
using namespace std;

int SumArr(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;


}


int main(){
    int size;
    cin >> size;
    

    int arr[100];
    // taking the input of array
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"The sum of array is: "<<SumArr(arr, size)<<endl;
    return 0;
}