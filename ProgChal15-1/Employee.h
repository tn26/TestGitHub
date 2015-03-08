// Tommy Nguyen
// 3.3.15
// Programming Challenge 15-1

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee {
private:
    string employeeName;
    int employeeNumber;
    string hireDate;
public:
    Employee();

    void setEmployeeName(string);
    void setEmployeeNumber(int);
    void setHireDate(string);

    string getEmployeeName();
    int getEmployeeNumber();
    string getHireDate();
};



Employee::Employee() {
    employeeName = "";
    employeeNumber = 0;
    hireDate = "";
}

void Employee::setEmployeeName(string s) {
    employeeName = s;
}

string Employee::getEmployeeName() {
    return employeeName;
}

void Employee::setEmployeeNumber(int n) {
    employeeNumber = n;
}

int Employee::getEmployeeNumber() {
    return employeeNumber;
}

void Employee::setHireDate(string d) {
    hireDate = d;
}

string Employee::getHireDate() {
    return hireDate;
}

#endif // EMPLOYEE_H
