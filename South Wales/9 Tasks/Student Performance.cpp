#include <iostream>
using namespace std;

class StudentPerformance {
private:
  string name;
  int academicScore;
  int extraCurricularScore;

public:
  StudentPerformance() {}

  void setStudent(string name, int academicScore, int extraCurricularScore) {
    if (academicScore < 0 || academicScore > 100) {
    throw invalid_argument("Academic score must be between 0 and 100.");
  }
  if (extraCurricularScore < 0 || extraCurricularScore > 100) {
    throw invalid_argument("Extra-curricular score must be between 0 and 100.");
  }
    this->name = name;
    this->academicScore = academicScore;
    this->extraCurricularScore = extraCurricularScore;
  }

  string getName() { return name; }
  int getAcademicScore() { return academicScore; }
  int getExtraCurricularScore() { return extraCurricularScore; }

  float getPerformance() {
    return 0.75 * academicScore + 0.25 * extraCurricularScore;
  }
char getGrade() {
    float performance = getPerformance();
    if (performance >= 0 && performance < 40) {
        return 'F';
    } else if (performance >= 40 && performance < 50) {
        return 'D';
    } else if (performance >= 50 && performance < 60) {
        return 'C';
    } else if (performance >= 60 && performance < 70) {
        return 'B';
    } else if (performance >= 70 && performance <= 100) {
        return 'A';
    }
    return ' '; // Handle any other cases not covered
}

};

int main() {
  StudentPerformance studentPerformance;

  // Get the student's name, academic score, and extra-curricular score from the user.
  string name;
  int academicScore;
  int extraCurricularScore;
  cout << "Enter the student's name: ";
  cin >> name;
  cout << "Enter the student's academic score: ";
  cin >> academicScore;
  cout << "Enter the student's extra-curricular score: ";
  cin >> extraCurricularScore;

  // Set the student's performance.
  studentPerformance.setStudent(name, academicScore, extraCurricularScore);

  // Get the student's performance and grade.
  float performance = studentPerformance.getPerformance();
  char grade = studentPerformance.getGrade();

  // Display the student's performance and grade.
  cout << "The student's performance is: " << performance << "%" << endl;
  cout << "The student's grade is: " << grade << endl;

  return 0;
}
