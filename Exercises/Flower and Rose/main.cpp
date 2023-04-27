#include <iostream>

using namespace std;
class flower {
public:
    string color;
    int petals;
    flower(string c,int p){
color=c;
petals=p;
cout<<"Flower Constructor Called"<<endl;
    }
    ~flower(){
cout<<"Flower Destructor Called"<<endl;
    }
    void show(){
cout<<"--------INFO--------"<<endl;
    }
    };
    class rose:public flower
        {
        public:
            string name;
            int durability;
        rose(string n,string c,int p,int d):flower(c,p){
            name=n;
            durability=d;
            cout<<"Rose Constructor Called"<<endl;
        };
        ~rose(){
        cout<<"Rose Destructor Called"<<endl;
        }
        void characteristics(){
        cout<<"Name: "<<name<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Petals: "<<petals<<endl;
        cout<<"Durability(In days): "<<durability<<endl;
        }
        };
int main()
{
rose r1("Rose","Red",5,3);
r1.show();
r1.characteristics();
    return 0;
}

