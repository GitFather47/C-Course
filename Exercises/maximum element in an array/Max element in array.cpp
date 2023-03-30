#include <iostream>

using namespace std;

int main()
{
    int rows=5;
    int cols=5;
    int arr[5][5],temp;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            cout<<"Array index"<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
                for(int k=0;k<rows;k++){
                        for(int l =0;l<cols;l++){
                            if(arr[i][j]>arr[k][l]){
        temp=arr[i][j];
        arr[i][j]=arr[k][l];
        arr[k][l]=temp;
    }
                        }

                }

        }
    }
    cout<<"Maximum element is: "<<arr[0][0];
    return 0;
}
