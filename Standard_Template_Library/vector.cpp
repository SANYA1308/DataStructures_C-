#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    v.push_back(4);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;


    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;


    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"Before Pop: "<<endl;

    for(int i:v){
        cout<<i<< " ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After Pop: "<<endl;

    for(int i:v){
        cout<<i<< " ";
    }
    cout<<endl;

    cout<<"Size before clear"<<" "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear"<<" "<<v.size()<<endl;
    

}