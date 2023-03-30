#include <iostream>

using namespace std;

int main()
{
int yr;
cout<<"Enter a leap year: ";
cin>>yr;
if(yr %400==0){
cout<<yr<<" is leap year.";
}
else if (yr%100!=0 && yr%4==0){
    cout<<yr<<" is leap year.";
}
else{
    cout<<yr<<" isn't leap year.";
}
    return 0;
}
