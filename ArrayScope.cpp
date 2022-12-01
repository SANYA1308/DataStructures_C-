#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the function"<<endl;
     //updating the array
    arr[0] = 120;
    //printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main function"<<" ";

}


int main(){
    int arr[3] = {3,2,1};
    
    update(arr,3);

    //printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}