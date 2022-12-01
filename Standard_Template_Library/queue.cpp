#include <iostream>
#include <queue>
using namespace std;


int main(){
    queue <string> q;
    q.push("Sanya");
    q.push("Gondi");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;

}