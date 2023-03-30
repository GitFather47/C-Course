#include<iostream>
using namespace std;
int main()
{
	char bang[]="BANGLADESH";
	for(int i=0;i<10;i++){
		cout<<bang[i];
	}
	cout<<endl;
	int last_i=6;
	for (int i =1;i<7;i++){
		for (int j=i;j<=5;j++){
			cout<<bang[j];
}
for (int space=i; space<2*i-1; space++){
cout<<"  ";
}
last_i++;
for(int k=last_i;k<=9;k++){
	cout<<bang[k];
}
cout<<"\n";
}

}
