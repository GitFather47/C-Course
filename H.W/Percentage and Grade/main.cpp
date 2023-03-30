#include <iostream>

using namespace std;

int main()
{
    string name,id;
    double sub1,sub2,sub3,sub4,sub5,result,total;
    cout << "Enter Your Name: ";
    getline(cin,name);
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"--Enter your Subject Numbers---"<<endl;
    cout<<"1st number: "<<endl;
    cin>>sub1;
    cout<<"2nd number: "<<endl;
    cin>>sub2;
    cout<<"3rd number: "<<endl;
    cin>>sub3;
    cout<<"4th number: "<<endl;
    cin>>sub4;
    cout<<"5th number: "<<endl;
    cin>>sub5;
    total= sub1+sub2+sub3+sub4+sub5;
    result= total/5;
    cout<<"Your name "<<name<<endl;
    cout<<"Your id "<<id<<endl;
    if (result>=90&&result<100){
cout<<"Your result is A+"<<endl;
    }
     else if (result>=85&&result<90){
cout<<"Your result is A"<<endl;
    }
     else if (result>=80&&result<85){
cout<<"Your result is B+"<<endl;
    }
     else if (result>=75&&result<80){
cout<<"Your result is B"<<endl;
    }
    else if (result>=70&&result<75){
cout<<"Your result is C+"<<endl;
    }
    else if (result>=65&&result<70){
cout<<"Your result is C"<<endl;
    }
    else if (result>=60&&result<65){
cout<<"Your result is D+"<<endl;
    }
    else if (result>=50&&result<60){
cout<<"Your result is D"<<endl;
    }
    else if (result<50){
cout<<"Your result is F"<<endl;
    }
else {
cout<<"Invalid."<<endl;
    }

    return 0;
}
