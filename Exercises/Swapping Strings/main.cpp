#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char* str1[]="hello";
    int len= strlen(str1);
    int lens1=strlen(str1)-1;
    char* str2[6];
    for(int i=0;i<len;i++){
        strcpy(str2[i],str1[lens1]);
        lens1--;
    }
    cout<<str2<<endl;
    return 0;
}
