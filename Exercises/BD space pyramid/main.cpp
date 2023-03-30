#include <iostream>
using namespace std;

int main()
{
    //INPUT PART
    int s;
    cout<<"Size of the string"<<endl;
    cin>>s;
    char n[s];
    cout<<"Enter a string: "<<endl;
    cin>>n;
    //cannot use strlen fr some reason

    //PYRAMID SECTION
    int last_i=s-4;
    for(int i=0 ; i<s;i++){
        cout<<n[i];
    }
    for(int i=1;i<7;i++){
    for(int j=i; j<6;j++){
        cout<<n[j];
    }
    for (int space=i;space=2*i-1;space++){
cout<<"  ";
    }
    last_i++;
    for(int k=last_i;k<=s-1;k++){
        cout<<n[k];
    }
   cout<<endl;
}
    return 0;
}
