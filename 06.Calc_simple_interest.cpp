#include<iostream>
using namespace std; 

int main(){
    int principal_amt,rate_of_interest,time_period,SI;
    cout<<"Enter the principal amount: "<<endl;
    cin>>principal_amt;
    cout<<"Enter rate of interest: "<<endl;
    cin>>rate_of_interest;
    cout<<"Enter time period(in months) of loan: "<<endl;
    cin>>time_period;
    SI=(principal_amt*rate_of_interest*time_period)/100;
    cout<<"The simple interest is calculated to be "<<SI<<" rs"<<endl;
    return 0;
}