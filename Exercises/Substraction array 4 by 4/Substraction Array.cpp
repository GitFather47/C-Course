#include <iostream>

using namespace std;

int main()
{
    int arr[4][4],sub[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4;j++){
            cout<<" Array index"<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4;j++){
    sub[i][j]=arr[i][j]-arr[i][j];
        }
    }
    cout<<"Substraction: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4;j++){
    cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
