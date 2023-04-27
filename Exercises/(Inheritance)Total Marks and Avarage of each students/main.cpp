#include <iostream>
/*We want to calculate the total marks of each student of a class in Physics,
Chemistry and Mathematics and the average marks of the class.
The number of students in the class are entered by the user.
Create a class named Marks with data members for roll number,
name and marks. Create three other classes inheriting the Marks class,
namely Physics, Chemistry and Mathematics,
which are used to define marks in individual subject of each student.
Roll number of each student will be generated automatically.*/
using namespace std;
class marks{
public:
    int roll_numbers;
    cout<<"Enter the number of students"<<endl;
    string name;
    double marks;
    void show(){
    cin>>name

    }

};
class physics:public marks
{
    public:
        void physics(){
        cout<<"Physics: "<<endl;
        }
};
class chemistry:public marks
{
    public:
        void physics(){
        cout<<"Chemistry: "<<endl;
        }
};
class mathematics:public marks
{
    public:
        void mathematics(){
        cout<<"Mathematics: "<<endl;
        }
};
int main()
{
#include <iostream>
#include <string>
using namespace std;

class Marks {
protected:
    int rollNumber;
    string name;
    int marks;

public:
    Marks() {
        rollNumber = 0;
        name = "";
        marks = 0;
    }

    void setDetails(string n, int m) {
        static int rno = 1;
        rollNumber = rno++;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    int getMarks() {
        return marks;
    }
};

class Physics : public Marks {
public:
    void setPhysicsMarks(string n, int m) {
        setDetails(n, m);
    }
};

class Chemistry : public Marks {
public:
    void setChemistryMarks(string n, int m) {
        setDetails(n, m);
    }
};

class Mathematics : public Marks {
public:
    void setMathematicsMarks(string n, int m) {
        setDetails(n, m);
    }
};

int main() {
    /*int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics physicsMarks[numStudents];
    Chemistry chemistryMarks[numStudents];
    Mathematics mathematicsMarks[numStudents];

    // Input marks for each student
    for (int i = 0; i < numStudents; i++) {
        string name;
        int physics, chemistry, mathematics;

        cout << "\nEnter details for Student " << i+1 << endl;
        cout << "Name: ";
        cin >> name;

        cout << "Physics marks: ";
        cin >> physics;
        physicsMarks[i].setPhysicsMarks(name, physics);

        cout << "Chemistry marks: ";
        cin >> chemistry;
        chemistryMarks[i].setChemistryMarks(name, chemistry);

        cout << "Mathematics marks: ";
        cin >> mathematics;
        mathematicsMarks[i].setMathematicsMarks(name, mathematics);
    }

    // Calculate total and average marks for each student
    for (int i = 0; i < numStudents; i++) {
        int totalMarks = physicsMarks[i].getMarks() + chemistryMarks[i].getMarks() + mathematicsMarks[i].getMarks();
        float averageMarks = (float)totalMarks / 3.0;

        cout << "\nDetails for Student " << i+1 << endl;
        physicsMarks[i].display();
        chemistryMarks[i].display();
        mathematicsMarks[i].display();
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Average Marks: " << averageMarks << endl;
    }

    return 0;
}*/

    return 0;
}
