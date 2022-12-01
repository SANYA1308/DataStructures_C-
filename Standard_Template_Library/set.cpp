#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int>s;
    s.insert(6);
    s.insert(6);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(8);

    for(auto i:s){
        cout<<i<<endl;
    }

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }

    cout<<s.count(6)<<endl;

    cout<<endl;

    set<int>::iterator itr = s.find(6);
    //cout<<*itr<<endl;
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<endl;
    }
}