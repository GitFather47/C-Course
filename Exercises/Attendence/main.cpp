#include <iostream>

using namespace std;

int main()
{
    double held ,present, perc;
    cout<<"Enter number of classes held: ";
    cin>>held;
    cout<<"Enter number of classes present: ";
    cin>>present;
    perc =(present/held)*100;
    cout<<perc;
    return 0;
}
