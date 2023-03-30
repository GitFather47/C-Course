#include <iostream>

using namespace std;

int main()
{
    int sum=0,nextTerm,n,sumOdd=0,sumEven=0;
    cout<<"Enter the last element of series: ";
    cin>>n;
    for(nextTerm=1;nextTerm<=n;nextTerm++){
        sum+=nextTerm;
    }
    for(nextTerm=1;nextTerm<=n;nextTerm=nextTerm+2){
        sumOdd+=nextTerm;
    }
    for(nextTerm=2;nextTerm<=n;nextTerm=nextTerm+2){
        sumEven+=nextTerm;
    }
    cout<<"The sum: "<<sum<<endl;
cout<<" the sum(odd): "<<sumOdd<<endl;
cout<<"The sum(even): "<<sumEven<<endl;
    return 0;
}
