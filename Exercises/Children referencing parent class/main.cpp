#include <iostream>

using namespace std;
class person
{
    public:
    string name;
    int age;
    person(){
        cout<<endl<<"This is an empty PERSON constructor"<<endl;
        }
    person(string n,int a){
    name=n;
    age=a;
    cout<<endl<<"PARENT CONSTRUCTOR!!!"<<endl;
    }
    ~person(){
    cout<<endl<<"PARENT DESTRUCTOR!!!"<<endl;
    }
void show(){

 cout<<"Name: "<<name<<"\nAge: "<<age<<endl;

 }

};
class child:public person
{
public:

        int id;
        float cgpa;
        child(){
        cout<<endl<<"This is an empty CHILD constructor"<<endl;
        }
 child(string n,int a, float i,float c):person(n,a)
       {
           id=i;
           cgpa=c;
           cout<<endl<<"CHILD CONSTRUCTOR CALLED!!!"<<endl;
 }
 ~child(){
  cout<<endl<<"CHILD DESTRUCTOR!!!JESSEH..U NEED TO RUN."<<endl;
}
void details(){

 cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Id: "<<id<<endl<<"Cgpa: "<<cgpa<<endl;

 }
};

int main()
{
child c1("Jack",4,14,3.69);
//c1.show();PROBLEM!!!
child c2("Mario",3,59,3.78);
c2.details();
child c3;

    return 0;
}

