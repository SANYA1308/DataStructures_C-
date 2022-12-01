#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5> arr = {1,3,6,8,10};
    int size = arr.size();

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Enter the element at 3rd index --> "<<arr.at(3)<<endl;
    cout<<"Enter whether the array is empty or not: "<<arr.empty()<<endl;
    cout<<"Enter the first element of the array:"<<arr.front()<<endl;
    cout<<"Enter the last element of the array: "<<arr.back()<<endl;
}