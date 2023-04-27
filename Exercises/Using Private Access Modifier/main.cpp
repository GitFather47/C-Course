#include <iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    person(){
    cout<<"Empty constructor"<<endl;
    }
    person(string n,int a){
    name=n;
    age=a;
    }
~person(){
}
void details(){
cout<<"Name: "<<name<<"Age: "<<age<<endl;
}

};
class student:public person{
    public:
    int id;
    double cgpa;
student(){
cout<<"Empty Constructor"<<endl;
}
student(string n, int a,int i,double c):person(n,a){
    id=i;
    cgpa=c;
}
~student(){
}
void details(){
cout<<"Name: "<<name<<" Age: "<<age<<" Id:"<<id<<" Cgpa:"<<cgpa<<endl;
}
};
int main()
{
student ss("Daigo Dojima",27,3126,4.00);
ss.details();
    return 0;
}
