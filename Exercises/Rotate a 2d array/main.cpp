#include <iostream>

using namespace std;

int main()
{
int arr1[4][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16}
};
int arr2[4][4]={
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}
};
/*for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}*/
int k=0,l=3;

for(int i=0;i<4;i++){
    for(int j=l;j>=0;j--){
  arr2[i][k]=arr2[i][k]+arr1[j][k];
  k++;
    }
    l--;

}
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
