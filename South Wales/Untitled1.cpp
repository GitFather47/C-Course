#include <iostream>
using namespace std;

int main() {
    int k=0;
    char arr[9] = {'A', 'B', 'C', 'D', 'E', 'D', 'E', 'F', 'G'};
    for (int i = 1; i <= 9; i++) {
        for (int space = 9; space > i; space--) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << arr[k];
        }
        cout << endl;
        k++;
    }
    return 0;
}
