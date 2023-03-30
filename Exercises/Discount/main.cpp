#include <iostream>

using namespace std;

int main()
{
    /* Scenario: You are developing a program for a small retail store that sells clothing items. The store is having a sale, and they want to give a discount to customers based on the number of items they purchase. The discount is calculated as follows:

If a customer purchases 1-3 items, they get a 10% discount.
If a customer purchases 4-6 items, they get a 20% discount.
If a customer purchases 7 or more items, they get a 30% discount.
Your task is to write a C++ program that does the following:

Prompts the user to enter the number of items they want to purchase.
Calculates the discount based on the number of items purchased.
Calculates the total cost of the purchase after the discount is applied.
Displays the total cost of the purchase to the user.
Your program should use post-increment, pre-increment, pre-decrement, and post-decrement operators, as well as for, while, and do-while loops, and if-else statements.

Here's some sample pseudocode to get you started:
*/

// Prompt the user to enter the number of items they want to purchase
int numItems;
cout << "Enter the number of items you want to purchase: ";
cin >> numItems;

// Initialize the discount and the total cost
double discount;
double totalCost = 0.0;

// Calculate the discount based on the number of items purchased
if (numItems >= 1 && numItems <= 3) {
  discount = 0.1; // 10% discount
} else if (numItems >= 4 && numItems <= 6) {
  discount = 0.2; // 20% discount
} else if (numItems >= 7) {
  discount = 0.3; // 30% discount
} else {
  cout << "Invalid number of items." << endl;
  // Use a do-while loop to ensure that the user enters a valid number of items
  do {
    cout << "Enter the number of items you want to purchase: ";
    cin >> numItems;
  } while (numItems < 1);
}

// Calculate the total cost of the purchase after the discount is applied
// Use a for loop to iterate through each item
for (int i = 1; i <= numItems; i++) {
  // Prompt the user to enter the price of each item
  double price;
  cout << "Enter the price of item " << i << ": ";
  cin >> price;

  // Calculate the discounted price of each item using post-increment and pre-decrement operators
  //PROBLEM!!!
  double discountedPrice = price * (1 - discount++);
  discountedPrice = discountedPrice * (--discount);

  // Add the discounted price of each item to the total cost
  totalCost += discountedPrice;
}

// Display the total cost of the purchase to the user
cout << "Total cost after discount: $" << totalCost << endl;
    return 0;
}
