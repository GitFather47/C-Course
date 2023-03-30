#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"Enter an integer: "<<endl;
    cin>>i;
    if (i%2==0){
        cout<<i<<" is an even number"<<endl;
    }
    else if(i%2==1) {
        cout<<i<< " is an odd number ";
    }
    else{
        cout<<"ERROR!"<<endl;
    }

    return 0;
}
