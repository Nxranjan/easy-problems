#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number,square;
    cout<<"Enter number to find sqaure:"<<endl;
    cin>>number;
    square=pow(number,2);
    cout<<"The sqaure of "<<number<<" is "<<square<<endl;
    return 0;
}
