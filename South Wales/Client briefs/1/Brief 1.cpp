#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string name;
    string studentNumber;
    string emailAddress;
    int tutorial1;
    int tutorial2;
    int coursework3;
    int coursework4;

    // Calculate overall mark considering weighted contributions
    int calculateOverallMark() const {
        return tutorial1 * 0.1 + tutorial2 * 0.2 + coursework3 * 0.3 + coursework4 * 0.4;
    }

    // Calculate grade based on overall mark
    string getGrade() const {
        int mark = calculateOverallMark();
        if (mark < 40) {
            return "Fail";
        } else if (mark < 50) {
            return "Third Class Honours";
        } else if (mark < 60) {
            return "Lower Second-Class Honours (2:2)";
        } else if (mark < 70) {
            return "Upper Second-Class Honours (2:1)";
        } else {
            return "First Class Honours";
        }
    }
};

void addStudent(Student* students, int& numStudents) {
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, students[numStudents].name);
    cout << "Enter student number: ";
    getline(cin, students[numStudents].studentNumber);
    cout << "Enter email address: ";
    getline(cin, students[numStudents].emailAddress);
    students[numStudents].tutorial1 = 0;
    students[numStudents].tutorial2 = 0;
    students[numStudents].coursework3 = 0;
    students[numStudents].coursework4 = 0;
    numStudents++;
}


void listStudents(const Student* students, int numStudents) {
    cout << "Name\t\t\tStudent Number\t\tTotal Mark" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << students[i].name << "\t\t\t"
             << students[i].studentNumber << "\t\t\t"
             << students[i].calculateOverallMark() << endl;
    }
}


void inputMarks(Student* students, int numStudents) {
    int choice;
    do {
        cout << "Choose assignment (1-4) or 0 to exit: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            int studentIndex;
            int mark;
            cout << "Enter student index (0-" << numStudents - 1 << "): ";
            cin >> studentIndex;
            cout << "Enter mark (out of 100): ";
            cin >> mark;

            switch (choice) {
                case 1:
                    students[studentIndex].tutorial1 = mark;
                    break;
                case 2:
                    students[studentIndex].tutorial2 = mark;
                    break;
                case 3:
                    students[studentIndex].coursework3 = mark;
                    break;
                case 4:
                    students[studentIndex].coursework4 = mark;
                    break;
            }
        }
    } while (choice != 0);
}

void showAllMarks(const Student* students, int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student: " << students[i].name << endl;
        cout << "Tutorial 1: " << students[i].tutorial1 << endl;
        cout << "Tutorial 2: " << students[i].tutorial2 << endl;
        cout << "Coursework 3: " << students[i].coursework3 << endl;
        cout << "Coursework 4: " << students[i].coursework4 << endl;
    }
}

void predictGrade(const Student* students, int numStudents) {
    int studentIndex;
    int test1, test2, test3, test4;

    cout << "Enter student index (0-" << numStudents - 1 << "): ";
    cin >> studentIndex;

    cout << "Enter test marks for assignments 1-4: ";
    cin >> test1 >> test2 >> test3 >> test4;

    int totalMark = students[studentIndex].tutorial1 * 0.1 +
                    students[studentIndex].tutorial2 * 0.2 +
                    students[studentIndex].coursework3 * 0.3 +
                    students[studentIndex].coursework4 * 0.4 +
                    test1 * 0.1 + test2 * 0.2 + test3 * 0.3 + test4 * 0.4;

    cout << "Predicted overall mark: " << totalMark << "%" << endl;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void saveStudentsToFile(const Student* students, int numStudents) {
    ofstream file("studentmarks.txt");
    if (file.is_open()) {
        for (int i = 0; i < numStudents; ++i) {
            file << students[i].name << endl;
            file << students[i].studentNumber << endl;
            file << students[i].emailAddress << endl;
            file << students[i].tutorial1 << endl;
            file << students[i].tutorial2 << endl;
            file << students[i].coursework3 << endl;
            file << students[i].coursework4 << endl;
        }
        file.close();
        cout << "Students saved to file." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
}

void readStudentsFromFile(Student*& students, int& numStudents) {
    ifstream file("studentmarks.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            Student* newStudent = new Student;
            newStudent->name = line;
            getline(file, line);
            newStudent->studentNumber = line;
            getline(file, line);
            newStudent->emailAddress = line;
            getline(file, line);
            newStudent->tutorial1 = stoi(line); // Convert string to int
            getline(file, line);
            newStudent->tutorial2 = stoi(line); // Convert string to int
            getline(file, line);
            newStudent->coursework3 = stoi(line); // Convert string to int
            getline(file, line);
            newStudent->coursework4 = stoi(line); // Convert string to int
            students[numStudents++] = *newStudent;
        }
        file.close();
        cout << "Students read from file." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
}

int main() {
    const int MAX_STUDENTS = 100;
    Student* students = new Student[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    readStudentsFromFile(students,numStudents);

    do {
        cout << "\n-----Student Management System-----:\n";
        cout << "1. Add a new student\n";
        cout << "2. List students\n";
        cout << "3. Input marks\n";
        cout << "4. Show all marks\n";
        cout << "5. Grade predictor\n";
        cout << "6. Save students  to file\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, numStudents);
                break;
            case 2:
                listStudents(students, numStudents);
                break;
            case 3:
                inputMarks(students, numStudents);
                break;
            case 4:
                showAllMarks(students, numStudents);
                break;
            case 5:
                predictGrade(students, numStudents);
                break;
            case 6:
                saveStudentsToFile(students, numStudents);
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 0);

    delete[] students;

    return 0;
}
