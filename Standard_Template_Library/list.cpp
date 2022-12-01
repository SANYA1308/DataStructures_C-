#include <iostream>
#include <list>
using namespace std;


int main(){
    list <int> l;
    l.push_back(4);
    l.push_front(2);

    for(int i:l){
        cout<<i<<endl;
    }
    // l.pop_back();
    // for(int i:l){
    //     cout<<i<<endl;
    // }

    cout<<endl;
    l.erase(l.begin());

    for(int i:l){
        cout<<i<<endl;
    }

}