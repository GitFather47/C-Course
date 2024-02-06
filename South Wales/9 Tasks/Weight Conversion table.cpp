#include <iostream>

using namespace std;

const double TONS_TO_POUNDS = 2240.0;
const double TONS_TO_KILOGRAMS = 1016.05;

void printTable(int tons) {
  cout << "Tons\tPounds\tKilograms" << endl;
  for (int i = 2; i <= tons; i += 2) {
    cout << i << "\t" << i * TONS_TO_POUNDS << "\t" << i * TONS_TO_KILOGRAMS << endl;
  }
}

int main() {
  printTable(20);
  return 0;
}
