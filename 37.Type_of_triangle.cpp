#include<iostream>
using namespace std;

int main(){
    int side1,side2,side3;
    cout<<"Enter one of the side of the triangle: ";
    cin>>side1;
    cout<<"Enter next side of the triangle: ";
    cin>>side2;
    cout<<"Enter third side of the triangle: ";
    cin>>side3;
    if (side1==side2;side2==side3){
        cout<<"The triangle is found out to be an equilateral triangle"<<endl;
    }
    else if(side1==side2 or side1==side3 or side1==side3){
        cout<<"The triangle is found out to be an isosceles triangle"<<endl;
    }
    else if(side1!=side2 and side1!=side3 and side2!=side3){
        cout<<"The triangle is found out to be an scalene triangle"<<endl;
    }
    return 0;
}