#include <iostream>

using namespace std;

int main() {
  // Initialize the array with the names in the list.
  string names[] = {"Amy", "Rick", "John", "Patrick", "Manna", "Richard", "Raj", "Marcia", "Amy", "Richard", "John", "Rick", "Patrick", "Amy", "Raj", "John", "Patrick", "Richard"};


  int count = 0;

  // Get the name entered by the user.
  string name;
  cout << "Enter a name: ";
  cin >> name;

  // Use a linear search algorithm to count the number of times the name entered by the user appears.
  for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
    if (names[i] == name) {
      count++;
    }
  }

  // If the name is found in the array, display the number of occurrences. Otherwise, display a message indicating that the name is not in the list.
  if (count > 0) {
    cout << "The name " << name << " appears " << count << " times in the list." << endl;
  } else {
    cout << "The name " << name << " does not appear in the list." << endl;
  }

  return 0;
}
