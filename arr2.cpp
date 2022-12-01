#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }
    cout<<"Printing done"<<endl;
}
int main(){
    int arr[15] = {2,4,3,5};
    int n = 15;
    printArray(arr, n);

    int arr_size = sizeof(arr)/sizeof(int);
    cout<<"Size of arr is "<<arr_size<<endl;
}



