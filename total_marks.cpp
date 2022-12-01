#include <iostream>
using namespace std;


int total(int arr[]){
    int total = 0;

    for(int i=0; i<5; i++){
        total += arr[i];
    }
    return total;
}

int avg(int arr[]){
    int total_marks = total(arr);

    int average;
    average = total_marks/5;

    return average;

}

int percent(int arr[]){
        int total_marks = total(arr);
        int default_marks = 500;
        int percentage;
        percentage = (total_marks* 100)/default_marks ;

        return percentage;
    }
int main(){
    int arr[5];
    cout<<"enter the marks of C: "<<endl;
    cin>>arr[0];

    cout<<"enter the marks of C++: "<<endl;
    cin>>arr[1];
    
    cout<<"enter the marks of Java: "<<endl;
    cin>>arr[2];
    
    cout<<"enter the marks of DSA: "<<endl;
    cin>>arr[3];
    
    cout<<"enter the marks of OS: "<<endl;
    cin>>arr[4];

    int total_marks = total(arr);
    cout<<"Total Marks : "<<total_marks<<endl;

    int average_marks = avg(arr);
    cout<<"Average Marks: "<<average_marks<<endl;

    int percentage_mark = percent(arr);
    cout<<"Percentage is: "<<percentage_mark;

}