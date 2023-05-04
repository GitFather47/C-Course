#include <iostream>

using namespace std;
class Account{
    public:
string accName;
int accNum;
double balance;
static float int_rate;
Account(){
}
Account(string a,int n,double b){
accName=a;
accNum=n;
balance=b;
cout<<"CONSTRUCTOR INBOUND!!!"<<endl;
int_rate+=10;
}
~Account(){
cout<<"DESTRUCTOR INBOUND!!!"<<endl;
}
void show(){
cout<<"Name\t"<<"Account number\t"<<"Balance\t"<<"Interest Rate"<<endl;
cout<<accName<<"\t    "<<accNum<<"\t\t"<<balance<<"\t   "<<int_rate<<endl;
}
};
float Account::int_rate=10.50;

int main()
{
Account a1("Danny",78,300000);
a1.show();
Account a2("Hannah",79,250000);
a2.show();
Account a3("Yagami",80,640000);
a3.show();
a1.show();//It will show the latest interest.
cout<<"Hanafuda Earrings"<<endl;
    return 0;
}
