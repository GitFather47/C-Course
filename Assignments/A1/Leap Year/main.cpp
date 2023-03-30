#include <iostream>

using namespace std;

int main()
{
    int yr[5];
    cout<<"Inputed Years: ";
    for (int i=0;i<5;i++){
        cin>>yr[i];
    }
    cout<<"Leap year present in the array are: ";
    for(int i=0;i<5;i++){
    if((yr[i] %400==0)||(yr[i]%100!=0 && yr[i]%4==0)){
           cout<<yr[i]<<",";
    }

}
return 0;
}
