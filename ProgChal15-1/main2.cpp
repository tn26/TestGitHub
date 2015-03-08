// Tommy Nguyen
// 3.7.15
// Programming Challenge 15-2

#include <iostream>
#include "ShiftSupervisor.h"

using namespace std;

int main()
{
    string name;
    int number;
    string date;
    double salary;
    double bonus;

    ShiftSupervisor s1;

    cout << "Enter supervisor's name: ";
    getline(cin, name);
    s1.setEmployeeName(name);

    cout << "Enter supervisor's number: ";
    cin >> number;
    s1.setEmployeeNumber(number);

    cout << "Enter supervisor's date hired: ";
    cin.ignore();
    getline(cin, date);
    s1.setHireDate(date);

    cout << "Enter supervisor's salary: ";
    cin >> salary;
    s1.setSalary(salary);

    cout << "Enter supervisor's yearly bonus: ";
    cin >> bonus;
    s1.setYearlyBonus(bonus);

    cout << "Supervisor's name: " << s1.getEmployeeName() << endl;
    cout << "Supervisor's employee number: " << s1.getEmployeeNumber() << endl;
    cout << "Supervisor's date hired: " << s1.getHireDate() << endl;
    cout << "Supervisor's salary: " << s1.getSalary() << endl;
    cout << "Supervisor's yearly bonus: " << s1.getYearlyBonus() << endl;

    return 0;
}

