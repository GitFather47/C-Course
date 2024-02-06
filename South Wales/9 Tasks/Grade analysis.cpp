#include <iostream>

using namespace std;

int countOver50(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 50) {
      count++;
    }
  }
  return count;
}

int main() {
  int numberOfStudents; // Number of students in the class

  cout<<"Enter the number of the students in the class: " <<endl;
  cin>>numberOfStudents;

  int students[numberOfStudents]; // Array to store the percentages of the students

  // Read the percentages from the user
  for (int i = 0; i < numberOfStudents; i++) {
    cout << "Enter the percentage of student " << i + 1 << ": ";
    cin >> students[i];
  }

  // Count the number of students who have obtained more than 50%
  int count = countOver50(students, numberOfStudents);

  // Print the result to the console
  cout << "The scores you entered include " << count << " percentages over 50." << endl;

  return 0;
}
