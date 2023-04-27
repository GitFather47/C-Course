#include <iostream>

using namespace std;
class func_ol {
public:
    void func(int a) {
        //a function with one parameter
 cout << "value of a is " << a << endl;
}
    void func(double a) {
        /*same function with one parameter but with
        change data type*/
cout << "value of a is " << a << endl;
}
    void func(int a, int b) {
        //same function with 2 parameters
cout << "value of a and b is " << a << ", " << b << endl;
}
};
int main()
{
  func_ol o1;
  o1.func(5);
  func_ol o2;
  o2.func(5.55);
  func_ol o3;
  o3.func(2,3);
//same function name for different purposes by changing the number of parameter and types of parameter.
    return 0;
}
