#include <iostream>
using namespace std;

bool Search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[5] = {1,2,3,6,5};

    cout<<"Enter the element to be searched:"<<endl;

    int key;
    cin>>key;

    bool found = Search(arr, 5, key);

    if (found){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}