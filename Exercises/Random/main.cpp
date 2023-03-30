#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char c[]="Hello";
    int clen=strlen(c);
    //strcat,strcmp,strlen,strcpy
    char s1[]= "My course.";
    char s2[]="C++";
    char s3[]=" MSL";
    char s4[]="msl";
    //strcat(s1,s2);//Why dot?
    /*cout<<clen<<endl;
    cout<<c<<endl;*/
    //strcpy(s1,s2);
    cout<<strcmp(s3,s4)<<endl;
    /*cout<<s1<<endl;
    cout<<s2<<endl;*/

    return 0;
}
