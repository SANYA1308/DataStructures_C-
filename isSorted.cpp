#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;

    }
    else{
        bool ans = isSorted(arr + 1, size-1);
    }

}

int main(){
    int arr[5] = {2,8,3,1,9};

    int size = 5;
    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}