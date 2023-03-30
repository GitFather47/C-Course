#include <iostream>

using namespace std;

int main()
{
   int n,row,space,star;
   cin>>n;
   for(int row=1;row<=n;row++){
    for(space=row;space<n;space++){
        cout<<" ";
    }
    for(star=1;star<=row;star++){
cout<<"*";
    }
cout<<"\n";

}
return 0;
}
