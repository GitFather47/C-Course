#include <iostream>
#include<cmath>
using namespace std;
int main(){
int arr[2][3]={
{
    1,1,1
}
{
    1,1,1
}
};
int sumRow=0;
for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
    sumRow+=arr[i][j];

}
}

int sumCol=0;
for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    sumCol+=arr[i][j];

}
}

cout<<"Sum of row: "<<sumRow<<endl;
cout<<"Sum of coloumn: "<<sumCol<<endl;
}
