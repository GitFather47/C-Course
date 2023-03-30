#include <iostream>

using namespace std;

int main()
{
    int i,j,space,k;
    char arr[11]= {'B','A','N','G','L','A','D','E','S','H','I'};
    for(int i=1;i<=6;i++){
        for( space = 6;space>i;space--){
            cout<<"  ";
        }
        k=0;
        for( j =1 ; j <= (2*i-1) ;j++){
                cout<<arr[k]<<" ";
        k++;
        }
cout << endl;
    }
}


