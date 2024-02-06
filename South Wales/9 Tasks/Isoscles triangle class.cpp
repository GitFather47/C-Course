#include <iostream>
#include <cmath>
using namespace std;

class IsoscelesTriangle {
private:
  double base;
  double height;

public:
  IsoscelesTriangle(double base, double height) {
    this->base = base;
    this->height = height;
  }

  double getArea() {
    return 0.5 * base * height;
  }

  double getPerimeter() {
    return base + sqrt(base * base + 4 * height * height);
  }
};

int main() {
  double base, height;

  cout << "Enter the base of the isosceles triangle: ";
  cin >> base;

  cout << "Enter the height of the isosceles triangle: ";
  cin >> height;

  IsoscelesTriangle triangle(base, height);

  cout << "Area of the isosceles triangle: " << triangle.getArea() << endl;
  cout << "Perimeter of the isosceles triangle: " << triangle.getPerimeter() << endl;

  return 0;
}
