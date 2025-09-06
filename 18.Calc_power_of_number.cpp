#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number,exponent,power;
    cout<<"Enter the number whose power should be calculated: ";
    cin>>number;
    cout<<"Enter the exponent value: ";
    cin>>exponent;
    power=pow(number,exponent);
    cout<<"The value of "<<number<<" raised to "<<exponent<<" is "<<power<<endl;
    return 0;    
}