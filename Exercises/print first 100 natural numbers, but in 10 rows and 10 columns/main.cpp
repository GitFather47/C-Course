#include <iostream>

using namespace std;

int main()
{
    int matric[10][10],x;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            x=10*i+(j+1);
            matric[i][j]=x;
            cout<<matric[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
