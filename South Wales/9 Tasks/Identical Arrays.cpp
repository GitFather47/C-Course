#include <iostream>

using namespace std;

bool areIdentical(int arr1[], int arr2[], int size) {
  for (int i = 0; i < size; i++) {
    if (arr1[i] != arr2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int arr1[10];
  int arr2[10];

  // Get input from user
  cout << "Enter 10 elements for the first array: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr1[i];
  }

  cout << "Enter 10 elements for the second array: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr2[i];
  }

  // Check if the arrays are identical
  bool identical = areIdentical(arr1, arr2, 10);

  // Display the result
  if (identical) {
    cout << "The arrays are identical." << endl;
  } else {
    cout << "The arrays are not identical." << endl;
  }

  return 0;
}
