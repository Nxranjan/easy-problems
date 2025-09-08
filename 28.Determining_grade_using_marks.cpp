#include<iostream>
using namespace std;

int main(){
    int mark;
    cout<<"Enter the sudents mark: ";
    cin>>mark;
    if (mark>=90){
        cout<<"A grade"<<endl;
    }
    else if (mark>=80 && mark<90){
        cout<<"B grade"<<endl;
    }
    else if (mark>=70 && mark<80){
        cout<<"C grade"<<endl;
    }
    else if (mark>=60 && mark<70){
        cout<<"D grade"<<endl;
    }
    else{
        cout<<"Failed"<<endl;
    }
}