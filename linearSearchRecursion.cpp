#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] = key){
        return true;
    }

    else{
         bool ans = linearSearch(arr+1, size-1, key);
         return ans;
    }
}

int main(){
    int arr[5] = {3,2,4,1,6};
    int size = 5;
    int key = 1;
    bool ans = linearSearch(arr,size, key);
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}