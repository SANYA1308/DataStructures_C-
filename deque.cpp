#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque <int> d;

d.push_back(3);
d.push_front(5);

for(int i:d){
    cout<<i<<" ";
}
cout<<endl;

// d.pop_back();
// for(int i:d){
//     cout<<i<<" ";
// }

// d.pop_front();
// for(int i:d){
//     cout<<i<<" ";
// }

cout<<"Element at 1st Index: "<<d.at(1)<<endl;
cout<<"Element in the front: "<<d.front()<<endl;
cout<<"Element in the back: "<<d.back()<<endl;
cout<<"Empty or not: "<<d.empty()<<endl;

cout<<"Size before erase: "<<d.size()<<endl;
d.erase(d.begin(), d.begin()+1);
// d.erase(d.begin(), d.begin()+2);
cout<<"Size after erase: "<<d.size()<<endl;

for(int i:d){
    cout<<i<<" ";
}
}
