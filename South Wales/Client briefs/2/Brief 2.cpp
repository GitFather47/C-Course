#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Room {
    double length;
    double width;
};

struct Material {
    string name;
    double pricePerSqMeter;
    double installationCost;
};

struct Customer {
    string name;
    string phoneNumber;
    string address;
    double quote;
    Room room; // Added Room struct to store room dimensions
};

const Material CARPET = {"Carpet", 5.0, 50.0};
const Material WOOD = {"Wood", 10.0, 75.0};
const Material TILE = {"Tile", 15.0, 100.0};

const Material* MATERIALS[3] = {&CARPET, &WOOD, &TILE};

void addCustomer(Customer*& customers, int& numCustomers) {
    Customer* newCustomer = new Customer;
    cout << "Enter customer name: ";
    getline(cin, newCustomer->name);
    cout << "Enter customer phone number: ";
    getline(cin, newCustomer->phoneNumber);
    cout << "Enter customer address: ";
    getline(cin, newCustomer->address);
    newCustomer->quote = 0.0;
    customers[numCustomers++] = *newCustomer;
}


void listCustomers(const Customer* customers, int numCustomers) {
  cout << "\nCustomers:\n";
  for (int i = 0; i < numCustomers; ++i) {
    cout << i + 1 << ". " << customers[i].name << " (" << customers[i].phoneNumber<< ") - "
         << customers[i].address << endl;
    if (customers[i].quote > 0.0) {
      cout << "  Most recent quote: $" << fixed << setprecision(2) << customers[i].quote << endl;
    }
  }
}

void updateRoomDimensions(Room& room) {
  cout << "\nEnter new room dimensions:\n";
  cout << "Length: ";
  cin >> room.length;
  cout << "Width: ";
  cin >> room.width;
}

void showCustomerDetails(const Customer& customer) {
  cout << "\nCustomer Details:\n";
  cout << "Name: " << customer.name << endl;
  cout << "Phone number: " << customer.phoneNumber<< endl;
  cout << "Address: " << customer.address << endl;
}


void calculateQuote(const Room& room, const Material& material, double& quote) {
  double area = room.length * room.width;
  quote = material.pricePerSqMeter * area + material.installationCost;
}



void showCustomerQuotes(const Customer& customer, const Material* materials, int numMaterials) {
  cout << "\nCustomer Quotes:\n";
  for (int i = 0; i < numMaterials; ++i) {
    double quote = 0.0;
    calculateQuote(customer.room, materials[i], quote);
    cout << materials[i].name << ": $" << fixed << setprecision(2) << quote << endl;
  }
}



void showAllCustomersSorted(Customer* customers, int numCustomers) {
  // Bubble sort algorithm to sort customers based on their names alphabetically
  for (int i = 0; i < numCustomers - 1; ++i) {
    for (int j = 0; j < numCustomers - i - 1; ++j) {
      // Compare adjacent customer names and swap if necessary
      if (customers[j].name > customers[j + 1].name) {
        // Swap customers
        Customer temp = customers[j];
        customers[j] = customers[j + 1];
        customers[j + 1] = temp;
      }
    }
  }

  // Display sorted customers
  cout << "\nSorted Customers:\n";
  for (int i = 0; i < numCustomers; ++i) {
    cout << i + 1 << ". " << customers[i].name << " (" << customers[i].phoneNumber<< ") - "
         << customers[i].address << endl;
    if (customers[i].quote > 0.0) {
      cout << "  Most recent quote: $" << fixed << setprecision(2) << customers[i].quote << endl;
    }
  }
}



void saveCustomersToFile(const Customer* customers, int numCustomers) {
  ofstream file("floorscustomer.txt");
  if (file.is_open()) {
    for (int i = 0; i < numCustomers; ++i) {
      file << customers[i].name << endl;
      file << customers[i].phoneNumber<< endl;
      file << customers[i].address << endl;
      file << customers[i].quote << endl;
    }
    file.close();
    cout << "Customers saved to file." << endl;
  } else {
    cout << "Error opening file." << endl;
  }
}


void readCustomersFromFile(Customer*& customers, int& numCustomers) {
  ifstream file("floorscustomer.txt");
  if (file.is_open()) {
    string line;
    while (getline(file, line)) {
      Customer* newCustomer = new Customer;
      newCustomer->name = line;
      getline(file, line);
      newCustomer->phoneNumber= line;
      getline(file, line);
      newCustomer->address = line;
      getline(file, line);
      newCustomer->quote = stod(line); // Convert string to double
      customers[numCustomers++] = *newCustomer;
    }
    file.close();
    cout << "Customers read from file." << endl;
  } else {
    cout << "Error opening file." << endl;
  }
}








int main() {
    const int MAX_CUSTOMERS = 100;

  Customer* customers = new Customer[MAX_CUSTOMERS];
  int customerIndex,numCustomers = 0;

  // Read customers from file if exists
  readCustomersFromFile(customers, numCustomers);

  int choice;
  do {
        cout << "\n-----Flooring Quoting System-----\n";
    cout << "1. Add Customer\n";
    cout << "2. Show List of  Customers\n";
    cout << "3. Update Room Dimensions\n";
    cout << "4. Show Customer Details\n";
    cout << "5. Show Customer Quotes\n";
    cout << "6. Show All Customers Sorted\n";
    cout << "7. Save Customers to File\n";
    cout << "8. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

switch (choice) {
      case 1:
        addCustomer(customers, numCustomers);
        break;
      case 2:
        listCustomers(customers, numCustomers);
        break;
      case 3:
        cout << "Enter customer index to update room dimensions: ";
        cin >> customerIndex;
        updateRoomDimensions(customers[customerIndex - 1].room);
        break;
      case 4:
        cout << "Enter customer index to show details: ";
        cin >> customerIndex;
        showCustomerDetails(customers[customerIndex - 1]);
        break;
      case 5:
        cout << "Enter customer index to show quotes: ";
        cin >> customerIndex;
        showCustomerQuotes(customers[customerIndex - 1], *MATERIALS, 3);

        break;
      case 6:
        showAllCustomersSorted(customers, numCustomers);
        break;
      case 7:
        saveCustomersToFile(customers, numCustomers);
        break;
      case 8:
        cout << "Exiting program...\n";
        break;
      default:
        cout << "Invalid choice. Please try again.\n";
    }
  } while (choice != 8);


  delete[] customers;

  return 0;
}
//client brief1
