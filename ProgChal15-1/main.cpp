// Tommy Nguyen
// 3.3.15
// Programming Challenge 15-1

#include <iostream>

using namespace std;

#include "ProductionWorker.h"

int main()
{
    string name;
    int number;
    string date;
    int shift;
    double payRate;

    ProductionWorker w1;

    cout << "Enter employee's name: ";
    getline(cin, name);
    w1.setEmployeeName(name);

    cout << "Enter employee's number: ";
    cin >> number;
    w1.setEmployeeNumber(number);

    cout << "Enter the date hired: ";
    cin.ignore();
    getline(cin, date);
    w1.setHireDate(date);

    cout << "Enter employee's shift: (1 for day, 2 for night) ";
    cin >> shift;
    w1.setShift(shift);

    cout << "Enter employee's hourly pay rate: ";
    cin >> payRate;
    w1.setHourlyPayRate(payRate);

    cout << "Name: " << w1.getEmployeeName() << endl;
    cout << "Employee number: " << w1.getEmployeeNumber() << endl;
    cout << "Date hired: " << w1.getHireDate() << endl;
    cout << "Shift: " << w1.getShift() << endl;
    cout << "Hourly pay rate: " << w1.getHourlyPayRate() << endl;

    return 0;
}
