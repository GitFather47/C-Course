#include <iostream>

using namespace std;

int main()
{
    int factorial=1,nextTerm=1,n;
    cin>>n;
    if (n>=0){
    do{
        factorial = factorial*nextTerm;
        nextTerm+=1;

    }while(nextTerm<=n);
    }
    else{
        cout<<"Less than 0"<<endl;
    }
    cout<<n<<"!="<<" "<<factorial<<endl;
    return 0;
}
