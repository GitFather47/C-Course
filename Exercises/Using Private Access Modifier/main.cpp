#include <iostream>
using namespace std;
class person{
private:
    string name;
    int age;
public:
    person(){
    cout<<"Parent Empty constructor"<<endl;//1
    }
    person(string n,int a){
    name=n;
    age=a;
    cout<<"Parent Constructor"<<endl;//3
    }
    void setname(string n){
    name= n ;
    }
    void setage(int a){
    age=a ;
    }
     string getname(){
    return name ;
    }
    int getage(){
    return age ;
    }
~person(){
    cout<<"Parent Destructor"<<endl;//5
}
void show(){
cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
}

};
class student:public person{
    private:
    int id;
    double cgpa;
    public:
student(){
cout<<"Child Empty Constructor"<<endl;//2
}
student(string n, int a,int i,double c):person(n,a){
    id=i;
    cgpa=c;
    cout<<"Child Constructor"<<endl;//4
}
~student(){
    cout<<"Child Destructor"<<endl;//6
}
void setid(int i){
    id= i ;
    }
    void setcgpa(int c){
    cgpa= c ;
    }
    int getid(){
    return id ;
    }
    int getcgpa(){
    return cgpa ;
    }
void details(){
    show();
cout<<" Id:"<<id<<"\nCgpa:"<<cgpa<<endl;
}
};
int main()
{
    student ss1;
student ss("Daigo Dojima",27,3126,4.00);
ss.setname("Akira Nishikiyama");
ss.setage(27);
cout<<ss.getname()<<endl;
cout<<ss.getage()<<endl;
ss.details();
    return 0;
}
