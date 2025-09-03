#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number to be checked: "<<endl;
    cin>>num;
    if (num>0){
        cout<<"The number is positive"<<endl;
    }
    else if (num<0){
        cout<<"The number is negative"<<endl;
    }
    else if (num==0){
        cout<<"The number is zero"<<endl;
    }
} 