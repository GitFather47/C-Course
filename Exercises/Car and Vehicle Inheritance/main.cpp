#include <iostream>

using namespace std;
class vehicle{
public:
    string Reg_no;
    string Color;
vehicle(){
}
vehicle(string r,string c){
Reg_no=r;
Color=c;
}
~vehicle(){
}
void Details(){
cout<<"Details: Registration no.,Color,Model no.,Price"<<endl;
}
};
class car:public vehicle
{
public:
    string  model_no;
    int price;
    car(){
    }
    car(string r, string c,string  m, int p):vehicle(r,c)
    {
    model_no=m;
    price=p;
    }
    ~car(){
    }
    void Detailsforcar(){
cout<<"Registration No: " <<reg_no<<endl<<"Color : "<<color<<endl<<"Model No: "<<model_no<<endl<<"Price : "<<price<<endl;
    }
};
int main()
{
car c1("DHA-METRO-GA 11-8202","White","E90",2300000);
c1.Details();
c1.Detailsforcar();
car c2("DHA-METRO-GA 33-2047","Black","E160",2100000);
c2.Detailsforcar();
car c3("DHA-METRO-CA 15-7025","Gray","H300",3000000);
c3.Detailsforcar();
    return 0;
}
