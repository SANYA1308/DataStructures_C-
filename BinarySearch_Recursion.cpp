#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s , int e, int key){
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        return binarySearch(arr,mid+1, e, key);
    }
    else{
        return binarySearch(arr,s, mid-1, key);
    }
}
int main(){
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    int key = 8;
    cout<<"Present or not "<<binarySearch(arr, 0,4, key )<<endl;

}