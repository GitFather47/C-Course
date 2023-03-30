#include <iostream>

using namespace std;

int main()
{
    double sum=0,quantity,price;
    cout << "Please enter the item price followed by the quantity: ";
    //do it until comes 0
    do {
    cin>>price;
    if (price==0){
        break;
    }
    cin>>quantity;
    sum=price*quantity;

    }while (price!=0);
    cout<<"total= "<<sum<<endl;
    /*#include <iostream>
using namespace std;

int main() {

    // Declare and initialize variables
    double price = 0, quantity = 0, totalCost = 0;

    // Ask user to input the price and quantity of different items
    cout << "Please enter the price and quantity of each item:" << endl;

    // Loop until user enters 0 for the price
    while (price != 0) {
        cout << "Price: ";
        cin >> price;
        if (price == 0) break;
        cout << "Quantity: ";
        cin >> quantity;

        // Calculate the total cost
        totalCost += price * quantity;
    }

    // Print out the total cost
    cout << "The total cost is " << totalCost << endl;
    return 0;
}*/
    return 0;
}
