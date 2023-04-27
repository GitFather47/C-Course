#include <iostream>

using namespace std;

int main()
{
    int x=22,y=11,*a1=&x,*a2=&y;
    /*Two pointers a1 and a2 are declared and initialized to
    the addresses of x and y, respectively.*/
    cout<<"Before swap: *a1="<<*a1<<" *a2="<<*a2<<endl;
    /*The values pointed to by a1 and a2 are printed, which are the values of x and y,
    respectively, before swapping.*/
    *a1=*a1 + *a2;
    /*The value of a1 is set to the sum of the values pointed to by a1 and a2.
    This effectively stores the sum of x and y in x.*/
    *a2=*a1 - *a2;
    /*The value of a2 is set to the difference between the value pointed
    to by a1 (which is now x + y) and
    the value pointed to by a2 (which is y).
    This effectively stores the value of x in y.*/

    *a1=*a1 - *a2;
/*The value of a1 is set to the difference between the value pointed
to by a1 (which is now x + y) and the value pointed to by a2 (which is now x).
This effectively stores the value of y in x.*/



    cout<<"After swap: *a1="<<*a1<<" *a2="<<*a2<<endl;
    /*The values pointed to by a1 and a2 are printed again, which are the
    values of x and y, respectively, after swapping.*/
    return 0;
}

