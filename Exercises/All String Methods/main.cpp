#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   /*char c1[15]="Bangladesh";
    char c2[10]="America";
    cout<<strlen(c1)<<endl;
    cout<<sizeof(c1)<<endl;
    cout<<strstr(c1,"gla")<<endl;
    cout<<strchr(c1,'l')<<endl;
    cout<<strncat(c1,c2,4)<<endl;
    cout<<strncpy(c1,c2,3)<<endl;
*/
char c1[15]="Russia";
char c2[16]="Ukraine";
cout<<strlen(c1)<<endl;//String Length
cout<<sizeof(c1)<<endl;//Array Length
cout<<strlen(c2)<<endl;
cout<<sizeof(c2)<<endl;
cout<<strstr(c2,"kra")<<endl;//Shows the next string along with it(String in parameter)
cout<<strchr(c2,'k')<<endl;//Shows the next string along with it(One Character in parameter)
cout<<strcmp(c1,c2)<<endl;//if it found any odd character,then it will show -1,0,1 depending on difference and it's signs.
cout<<strncmp(c1,c2,6)<<endl;//c1-c2,it will check until 6 th character, if it found any odd character,then it will show it's difference of ascii code.Otherwise 0.
cout<<strncat(c1,c2,4)<<endl;//Adds 1st 4 characters of c2 at the end of c1
cout<<strncpy(c1,c2,4)<<endl;//Copy 1st 4 characters of c2 at the beginning of c1
  //C1 is previously modified by strncat.
//Capital letters have smaller ascii value than Small letters.
    return 0;
}
