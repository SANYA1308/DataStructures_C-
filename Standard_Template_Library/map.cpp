#include<iostream>
#include <map>
using namespace std;


int main(){
    map<int, string> m;

    m[1] = "Sanya";
    m[4] = "Hello";
    m[6] = "World";

    m.insert({23, "rise"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<m.count(7)<<endl;  //the output will be 0 because 7 is not present in the map

    m.erase(6);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;   
    }
    cout<<endl;

    auto it=m.find(4);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}