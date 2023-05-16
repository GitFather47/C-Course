#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int s;
	cout<<"Size?"<<endl;
	cin>>s;
	int arr[s][s];
	cout<<"Gimme numbers...."<<endl;
	for(int i=0;i<s;i++){
		for(int j=0;j<=i;j++){
			cin>>arr[i][j];
			
}
cout<<endl;
	}
	cout<<"Pyramid is :"<<endl;
		for(int i=0;i<s;i++){
		for(int j=0;j<=i;j++){
			cout<<arr[i][j];
}
cout<<endl;
		}
	return 0;
}