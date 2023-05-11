#include<iostream>
using namespace std;
class Customer{
protected:
    string accName;
    int accId;
Customer(string n, int i) {
accName=n;
accId=i;
//cout<<"CUSTOMER CONSTRUCTOR INBOUND!!!"<<endl;
}
~Customer(){
//cout<<"CUSTOMER DESTRUCTOR INBOUND!!!"<<endl;
}
};
class Account:protected Customer{
private:
double balance,withdrawl,max_withdrawl=500000,min_balance=0;
static float int_rate;
public:
Account(string n,int i,double b):Customer(n,i){
    balance=b;
    //cout<<"ACCOUNT CONSTRUCTOR INBOUND!!!"<<endl;
}
void setBalance(double b){
    balance=b;
}
void getBalance(){
if(balance<min_balance){
        cout<<"ERROR!Lower than minimum value"<<endl;
    }
else{
    cout<<"Balance: "<<balance<<endl;
}
}
void setWithdrawl(double w){
withdrawl=w;
}

getWithdrawl(){
    if (withdrawl>max_withdrawl){
        cout<<"MAX_LIMIT_EXCEEDED!!!"<<endl;
    }
    else{
            balance=balance-withdrawl;
            cout<<"After withdrawl,Balance: "<<balance<<endl;
}
}
~Account(){
    //cout<<" ACCOUNT DESTRUCTOR INBOUND!!!"<<endl;
}
void show(){
cout<<accName<<"\t    "<<accId<<"\t"<<balance<<"\t   "<<int_rate<<endl;
}
};
float Account::int_rate=0.04;
int main(){
/*All the banks operating in India are controlled by RBI. RBI has set a well defined guideline
(e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all
 banks must follow.
For example, suppose RBI has set minimum interest rate applicable to a saving bank account to
be 4% annually;
however, banks are free to use 4% interest rate or to set any rates above it.

Write a program to implement bank functionality
in the above scenario. Note: Create few classes namely Customer, Account. Assume and implement required member variables and functions in
 each class.In c++
*/

cout<<"Name\t"<<"Account number\t"<<"Balance\t"<<"Interest Rate"<<endl;
Account a1("Matt",6778,2300);
a1.show();
Account a2("Max",4235,28000.08);
a2.show();
a2.setWithdrawl(28000.00);
a2.getWithdrawl();
a1.setBalance(140000);
a1.getBalance();
cout<<"The END"<<endl;
}
