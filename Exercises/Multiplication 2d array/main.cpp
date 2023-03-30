#include <iostream>

using namespace std;

int main()
{
    int rows=4;
    int cols=4;
    int arr1[rows][cols],arr2[rows][cols];
    int mul[rows][cols]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};//Why is this showing garbage value?
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            cout<<"1st Array Index["<<i<<"]"<<"["<<j<<"]: ";
            cin>>arr1[i][j];
        }
    }
     for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            cout<<"2nd Array Index["<<i<<"]"<<"["<<j<<"]: ";
            cin>>arr2[i][j];
        }
    }

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        for(int k=0;k<4;k++){
            mul[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
}
cout<<"Multiplication: "<<endl;
for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
