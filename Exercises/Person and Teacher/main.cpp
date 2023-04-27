#include <iostream>

using namespace std;
 class person{
public:
    string name;
    string gender;
    int age;
    person(string n,string g,int a){
    name=n;
    gender=g;
    age=a;
    cout<<"Person Constructor Called"<<endl;
    }
    ~person(){
    cout<<"Person Destructor Called"<<endl;
    }
    void show(){
    cout<<"--------INFO--------"<<endl;
    }
    };
class teacher:public person
{
    public:
    string subject,university;
    teacher(string n,string g,int a,string s,string uni):person(n,g,a)
    {
        subject=s;
        university=uni;
        cout<<"Teacher Constructor Called"<<endl;
    }
    ~teacher(){
cout<<"Teacher Destructor Called"<<endl;
    }
    void info(){
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Subject: "<<subject<<endl;
    }
};
int main()
{
   teacher t1("Tahia Hossain","Female",25,"Data Structure","AIUB");
   t1.show();
   t1.info();
    return 0;
}
