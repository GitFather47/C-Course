#include <iostream>

using namespace std;

int main()
{
    /*int num[4],small,secondSmallest;
    for(int i=0;i<4;i++){
        cin>>num[i];
    }
    //1.find the smallest number 1st
    small=num[0];
    for(int i=0;i<4;i++){
        if (small>num[i])
        small=num[i];
    }
    //0,1,2,3
    //1,0,3,2
    //3,2,0,1
    secondSmallest=num[0];
    for(int i=0;i<4;i++){
    if (num[i]>small && num[i]<secondSmallest)

    secondSmallest=num[i];

    }
    cout<<"The second Smallest number is ="<< secondSmallest<<endl;
*/
	int a[10],i,j,n,temp;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"second smallest number is"<<a[1];
	//smallest to biggest arranged than
	return 0;

}
