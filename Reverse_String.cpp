#include <iostream>
using namespace std;

void  reverseString(char name[], int n){
    int s = 0 ;
    int end = n-1;
    while(s<end){
        swap(name[s++], name[end--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cin>>name;
    cout<<name<<endl;
    int len = getLength(name);
    reverseString(name, len);
    cout<<name;

}