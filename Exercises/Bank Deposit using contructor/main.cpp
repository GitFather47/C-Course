#include <iostream>

using namespace std;
class  bankACC{
    public:
string accno="23-51390-1";
int balance=0;
void deposit(int x){
balance+=x;
cout<<"AFTER DEPOSIT ,BALANCE: "<<balance<<endl;
}
void withdraw(int y){
balance-=y;
cout<<"AFTER WITHDRAAWL, BALANCE: "<<balance<<endl;
}

void details(){
//Add input
cout<<"---------MAZE BANK LTD.--------------"<<endl;
cout<<"ACCOUNT NUMBER: "<<accno<<endl;
cout<<"BAlANCE: "<<balance<<endl;
}
};
int main()
{
bankACC u1;
u1.details();
u1.deposit(14000);
u1.details();
u1.withdraw(4000);
u1.details();
    return 0;
}
