#include <iostream>
using namespace std;
int main()
{

    int *arr = new int[4]; // allocating memory for an array of 4 integers using the new keyword
arr[0]=11;
arr[1]=22;
arr[2]=33;
arr[3]=44;
    // printing out the values of the array
    cout << "Array values after using new keyword : ";
    cout <<"arr[0] : "<<arr[0] << " , " <<"arr[1] : "<<arr[1] << " , " <<"arr[2] : "<<arr[2] << "," <<"arr[3] : "<<arr[3] << endl;

    delete[] arr;//deallocating the memory for the array that was allocated earlier using the new operator.
    cout << "Array values after using delete keyword : ";
cout <<"arr[0] : "<<arr[0] << " , " <<"arr[1] : "<<arr[1] << " , " <<"arr[2] : "<<arr[2] << "," <<"arr[3] : "<<arr[3]<< endl;
    return 0;
}







