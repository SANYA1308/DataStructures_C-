#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <string> s;
    s.push("Hello");
    s.push("Sanya");
    s.push("Gondi");
    cout<<"Top Element is: "<<s.top()<<endl;

    s.pop();
    cout<<"New top element is:"<<s.top()<<endl;

    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    
}