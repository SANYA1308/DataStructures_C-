#include <iostream>
using namespace std;

bool checkPalindrome(string str, int s, int e){
    if(s>e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    else{
        return checkPalindrome(str, s+1, e-1);
    }
}

int main(){
    string name = "abbba";
    cout<<endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
}