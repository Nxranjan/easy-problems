#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the input to check if it is an alphabet or not: ";
    cin>>ch;
    if (ch>=65 && ch<=90 || ch>=97 && ch<=126){
        cout<<"The character "<<ch<<" is an alphabet"<<endl;
    }
    else{
        cout<<"The character "<<ch<<" is not an alphabet"<<endl; 
    }
    return 0;
}