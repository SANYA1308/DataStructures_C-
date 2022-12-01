#include <iostream>
#include <queue>
using namespace std;

int main(){
    //max_heap
    priority_queue <int> maxi;

    //min_heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(8);
    maxi.push(5);
    maxi.push(3);
    maxi.push(9);

    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(8);
    mini.push(9);
    mini.push(1);
    mini.push(0);
    mini.push(5);

    int m=mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<mini.empty()<<endl;


    
    
    }