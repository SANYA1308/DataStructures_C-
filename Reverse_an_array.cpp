#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}



void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10] = {2, 30, 5, 8, 9, 1, 7, 13, 11, 6};

    reverse(arr,10);

    printArray(arr,10);

    return 0;

}