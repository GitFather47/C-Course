#include <iostream>
using namespace std;
//Cxxdroid don't support destructor.
class WallStreet {
public:
    string name;
    int year_of_joining;

    // constructor to initialize the members
    WallStreet(string n, int y) {
        name = n;
        year_of_joining = y;
        cout<<"Parent Called"<<endl;
    }
};
class Employee:public WallStreet
{
	public:
	    float salary;
    string address;
	Employee(string n, int y, float s, string a):WallStreet(n,y){
		salary = s;
        address = a;
        cout<<"Child called"<<endl;
}

    // function to print the employee information
    void print_info() {
        cout << name << "\t" << year_of_joining << "\t" << address << endl;
    }
};
int main() {
    // create three employee objects
    Employee robert("Robert", 2002, 50000, "64C- WallsStreat");
    Employee sam("Sam", 2000, 45000, "68D- WallsStreet");
    Employee jordan("Jordan", 1999, 550000, "26B- WallsStreet");

    // print the employee information
    cout << "Name\tYear of joining\tAddress" << endl;
    robert.print_info();
    sam.print_info();
    jordan.print_info();

    return 0;
}
