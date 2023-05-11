#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row size: "<<endl;
    cin>>row;
    cout<<"Enter coloumn size: "<<endl;
    cin>>col;
int arr[row][col];
for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cin>>arr[i][j];
        }
}
 for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
int sumRow=0;
for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
    sumRow+=arr[i][j];

}
cout<<"Sum of Row"<<i+1<<":"<<sumRow<<endl;
sumRow=0;
}

int sumCol=0;
for (int j=0;j<col;j++){
    for(int i=0;i<row;i++){
    sumCol+=arr[i][j];

}
cout<<"Sum of Coloumn"<<j+1<<":"<<sumCol<<endl;
sumCol=0;
}

}
