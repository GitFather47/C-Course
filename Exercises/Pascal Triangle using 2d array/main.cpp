#include <iostream>

using namespace std;

int main()
{
int i=0,j,n,a[50][50];
cout<<"Enter rows: "<<endl;
cin>>n;
a[0][0]=1;
do{
    for(int space=n;space>i;space--){
    cout<<"  ";
    }
cout<<a[0][0]<<endl;
++i;
}while(i==0);


for(i=0;i<n-1;i++){
    for(int space=n-1;space>i;space--){
    cout<<"  ";
}

    a[i+1][0]=1;
    cout <<a[i+1][0]<<"   ";
    for(j=0;j<i;j++){
        a[i+1][j+1]=a[i][j]+a[i][j+1];
        cout<<a[i+1][j+1]<<"   ";

    }
    a[i+1][i+1]=1;
    cout<<a[i+1][i+1]<<endl;
}

    return 0;
}
