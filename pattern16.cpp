#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<< ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;


    }
    
    
}


/*     i+j-1 = 1
     add 'A'-1 on both sides
      i+j-1 + 'A'-1 = 1 + 'A'-1
       'A'+i+j-2 = 'A'
        ABCD
        BCDE
        CDEF
        DEFG



       */
