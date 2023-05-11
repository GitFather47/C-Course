#include <iostream>
#include <cmath>
using namespace std;
double taxCalculator(double sal, double sav) {
    double salary=sal;
    double savings =sav;
    double taxableIncome = salary - min(savings, 100000.0);
    double tax = 0.0;

    if (taxableIncome > 500000) {
        tax += 0.3 * (taxableIncome - 500000);
        taxableIncome = 500000;
    }

    if (taxableIncome > 200000) {
        tax += 0.2 * (taxableIncome - 200000);
        taxableIncome = 200000;
    }

    if (taxableIncome > 100000) {
        tax += 0.1 * (taxableIncome - 100000);
        taxableIncome = 100000;
    }

    return tax;
}

int main(){
/*Write a program that takes as input your gross salary and your total saving and
uses another function named taxCalculator() to calculate your tax.
The taxCalculator() function takes as parameters the gross salary as well
as the total savings amount. The tax is calculated as follows:
(a) The savings is deducted from the gross income to calculate the taxable
income. Maximum deduction of savings can be Rs. 100,000, even though the amount
can be more than this.
(b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to
200,000 tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to
500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then
20% of the taxable income exceeding 200,000 (Slab 2); if its more than 500,000,
then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.
*/
/*#include <iostream>

using namespace std;



int main() {
    double grossSalary, totalSavings;
    cout << "Enter your gross salary: ";
    cin >> grossSalary;
    cout << "Enter your total savings: ";
    cin >> totalSavings;

    double tax = taxCalculator(grossSalary, totalSavings);
    cout << "Your tax is: " << tax << endl;

    return 0;
}
*/
double salary, savings;
    cout << "Enter your gross salary: ";
    cout << "Enter your total savings: ";
cout<<"You tax is: "<<taxCalculator(600000,100000)<<endl;
}
