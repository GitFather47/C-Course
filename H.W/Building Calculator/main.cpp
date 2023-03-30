#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x,y,z;
    char op;
    cout<<"---Calculator---"<<endl;
    cout <<"Enter 1st number:";
    cin>>x;
    cout <<"Enter 2nd number:";
    cin>>y;
    cout<<"Enter an operator:\n('+' for addition \n'-' for substraction\n'*' for multiplication\n'\' for division)\n";
    cin>>op;
    switch(op){
    case '+':
        z=x+y;
        cout<<x<<" + "<<y<<" = "<<z<<endl;
        break;
    case '-':
        z=x-y;
        cout<<x<<" - "<<y<<" = "<<z<<endl;
        break;
    case '*':
        z=x*y;
        cout<<x<<" * "<<y<<" = "<<z<<endl;
        break;
    case '/':
        z=x/y;
        cout<<x<<" / "<<y<<" = "<<z<<endl;
        break;
    default:
        cout<<" INVALID "<<endl;
    }
    return 0;
}
