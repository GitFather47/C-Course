#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,small;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1<=num2 && num1<=num3){
        small=num1;
        if(small%2==0){
            cout<<small<<" is an even number"<<endl;
        }
        else{
            cout<<small<<" is an odd number"<<endl;
        }
    }
    else if(num2<=num1 && num2<=num3){
        small=num2;
        if(small%2==0){
            cout<<small<<" is an even number"<<endl;
        }
        else{
            cout<<small<<" is an odd number"<<endl;
        }
    }
else{
    small=num3;
        if(small%2==0){
            cout<<small<<" is an even number"<<endl;
        }
        else{
            cout<<small<<" is an odd number"<<endl;
        }
}
    return 0;
}
