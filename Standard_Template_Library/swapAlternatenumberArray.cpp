#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size;  i++){
        cout<< arr[i];
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
        cout<<endl;
    }
}

int main(){
    int even[6] = {1,2,5,4,7,8};
    int odd[5]= {2,3,4,6,1};

    swapAlternate(even,6);
    printArray(even,6);

}