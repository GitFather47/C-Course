#include <iostream>

using namespace std;

int main()
{
    char cName[10]={'B','A','N','G','L','A','D','E','S','H'};
    for(int i=1;i<=10;i++){
            for(int j=0;j<i;j++){
                cout<<cName[j];
            }
      cout<<"\n";
    }

}
