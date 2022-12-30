#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(toLowerCase(name[s])!= toLowerCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverseString(char name[], int n){
    int s = 0 ;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!= '\0'; i++){
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
    cout<<name<<endl;
    cout<<checkPalindrome(name, len)<<endl;
}