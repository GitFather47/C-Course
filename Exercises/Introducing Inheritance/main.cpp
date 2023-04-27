#include <iostream>

using namespace std;
class account{
public:
string name;
int accNo;
double balance;
void show(){

cout<<"-----MAZE BANK LTD-----"<<endl;
}
};
class fixedAcc:public account
{
    public:
        int year;
    void details(){
        cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<accNo<<endl;
    cout<<"Balance: "<<balance<<endl;
        cout<<"Year:  "<<year<<endl;
        cout<<"Details of Child Class"<<endl;
    }
};
int main()
{
fixedAcc f1;
f1.name="Goro Majima";
f1.accNo=23513901;
f1.balance=69000.05;
f1.year=2069;
f1.show();
f1.details();
    return 0;
}
