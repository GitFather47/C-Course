#include <iostream>

using namespace std;

int main()
{
   /*int  number =30;
   int *p =&number;
   cout<<"Address number: "<<&number<<endl;
   cout<<"Address *p: "<<p<<endl;
   cout<<"Value of p: "<<*p<<endl;
*/
   /*int a=20,b=10,*p1=&a,*p2=&b;
   cout<<"Before swap: *p1="<<*p1<<", *p2="<<*p2<<endl;
    *p1=*p1 + *p2;
   *p2=*p1 - *p2;
   *p1=*p1 - *p2;
   cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;
*/
/*int a1=5, a2=10, add;
int *p1=&a1, *p2=&a2,*p3;
//*p3=*p2;as here the 2 different  address holds same values.Pc can't understand which one to show.
add = *p1 + *p2;
cout<<"Addition is: "<<add<<endl;
cout<<&p1<<endl;
cout<<&p2<<endl;
cout<<&p3<<endl;*/
/*int a=20,*num=&a;
//cannot assign values directly like*num=20;
cout<<*num<<endl;
cout<<num<<endl;
num= new int;
num=&a;
cout<<*num<<endl;
cout<<&num<<endl;
//it will show 2 addresses now.*/
/*float *p = new float(56.6);
int *arr = new int(3);\
arr[0]=1;
arr[1]=2;
arr[2]=3;
delete arr;//Deletes values
cout<< "Value arr[0]: "<<arr[0]<<endl;
cout<< "Address arr[0]: "<<&arr[0]<<endl;
cout<< "Value  arr[1]: "<<arr[1]<<endl;
cout<< "address arr[1]: "<<&arr[1]<<endl;
cout<< "Value  arr[2]: "<<arr[2]<<endl;
cout<< "address arr[2]: "<<&arr[2]<<endl;*/
int x=1,*pint;
pint=&x;
cout<<x<<endl;
cout<<&pint<<endl;//pint=&pint same
    return 0;
}
