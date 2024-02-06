#include <iostream>
using namespace std;

int main() {
    int k=0;
    char arr[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    for (int i = 1; i <= 7; i++) {
        for (int space = 7; space > i; space--) {//9 used as a starting point for space ,like 9 to 1(8 space), 9 to 2(7 space) .
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
