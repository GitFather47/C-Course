#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<"How may elements in a row?";
    cin>>k;
    for (int i=3;i<6;i++){//Odd numbering  thats why starts from 3
        for (int j=1;j<=k;j++){
            if(i%2==1){
                if (j%2==1){
                    cout<<'X';
                }
                else{
                    cout<<'O';
                }
            }
            else if(i%2==0){
                if (j%2==1){
                    cout<<'O';
                }
                else{
                    cout<<'X';
                }
            }
            }
cout<<endl;
        }

    return 0;
}
