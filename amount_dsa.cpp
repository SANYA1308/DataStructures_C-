#include<iostream>
using namespace std;
int main(){
    int amount, total;
    cout<<"Enter the amount: ";
    cin>>amount;

    switch(1){
        case 1 : total = amount/100;
        amount -= (total*100);
        cout<<"There are "<< total << " Notes of Rs. 100"<<endl;

        case 2 : total = amount/50;
        amount -= (total*50);
        cout<<"There are "<< total<<" Notes of Rs. 50"<<endl;

        case 3 : total = amount/20;
        amount -= (total*20);
        cout<<"There are "<<total<<" Notes of Rs. 20"<<endl;

        case 4 : total = amount/1;
        amount -= (total*1);
        cout<<"There are "<< total<<" Notes of Rs. 1"<<endl;
    }
}