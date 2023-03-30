#include <iostream>

using namespace std;

int main()
{
    //Scenario: You are developing a program that calculates the sum of the first N even numbers and the first N odd numbers, where N is a positive integer entered by the user. The program should use post-increment, pre-increment, pre-decrement, and post-decrement operators, as well as for, while, and do-while loops, and if-else statements.

Here's the pseudocode to get you started:
// Prompt the user to enter a positive integer N
int N;
cout << "Enter a positive integer N: ";
cin >> N;

// Use a while loop to ensure that the user enters a positive integer
while (N <= 0) {
  cout << "Invalid input. Enter a positive integer N: ";
  cin >> N;
}

// Initialize variables for the sum of the first N even and odd numbers
int sumEven = 0;
int sumOdd = 0;

// Use a for loop to calculate the sum of the first N even numbers
for (int i = 1; i <= N; i++) {
  int evenNum = i * 2; // Use post-increment to calculate the even number
  sumEven += evenNum;
}

// Use a while loop to calculate the sum of the first N odd numbers
int j = 1;
while (j <= N) {
  int oddNum = j * 2 - 1; // Use pre-increment and pre-decrement to calculate the odd number
  sumOdd += oddNum;
  ++j;
}

// Use a do-while loop to calculate the sum of the first N even numbers again, this time using post-decrement
int k = N;
do {
  int evenNum = k * 2;
  sumEven += evenNum;
} while (--k > 0);

// Use an if-else statement to determine which sum is greater and display the result
if (sumEven > sumOdd) {
  cout << "The sum of the first " << N << " even numbers is greater than the sum of the first " << N << " odd numbers." << endl;
} else if (sumEven < sumOdd) {
  cout << "The sum of the first " << N << " odd numbers is greater than the sum of the first " << N << " even numbers." << endl;
} else {
  cout << "The sum of the first " << N << " even numbers and the sum of the first " << N << " odd numbers are equal." << endl;
}
/*Explanation:
The program begins by prompting the user to enter a positive integer N. The program uses a while loop to ensure that the user enters a positive integer. The program then initializes variables for the sum of the first N even and odd numbers.

The program uses a for loop to calculate the sum of the first N even numbers. The loop counter variable i is initialized to 1 and increments by 1 each time the loop iterates, until it reaches the value of N. Inside the loop, the program calculates the even number using post-increment and adds it to the sum of even numbers.

The program uses a while loop to calculate the sum of the first N odd numbers. The loop counter variable j is initialized to 1 and increments by 1 each time the loop iterates, until it reaches the value of N. Inside the loop, the program calculates the odd number using pre-increment and pre-decrement and adds it to the sum of odd numbers.

The program uses a do-while loop to calculate the sum of the first N even numbers again, this time using post-decrement. The loop counter variable k is initialized to N and decrements by 1
/*

}
