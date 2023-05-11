#include<iostream>
using namespace std;
int main(){
    //int a=1;
//int *p;
// 2 ways to present pointer
//p=&a;
//*p=3;
int *f,*j,a=1,b=1,n;
cout<<"Enter the number: "<<endl;
cin>>n;
f=&a;
j=&b;
do{
    *f=*f * *j;
    *j=*j + 1;
}while(*j<=n);
cout<<"Factorial: "<<*f<<endl;
}
