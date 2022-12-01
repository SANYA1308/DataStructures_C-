#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
     int ans = -1;
    while(start<=end){
        if(arr[mid] == key ){
            ans = mid;
            end = mid - 1;

        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;

}

int lastOccur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
     int ans = -1;
    while(start<=end){
        if(arr[mid] == key ){
            ans = mid;
            start = mid + 1;

        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;

}

int main(){
    int arr[10] = {0,1,2,2 , 4 , 6, 7,7, 9,11};
    cout<<"first occurence "<<firstOccur(arr,10,2)<<endl;
    cout<<"last occurence "<<lastOccur(arr, 10, 2)<<endl;
}