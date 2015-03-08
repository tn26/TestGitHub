// Tommy Nguyen
// 3.7.15
// Programming Challenge 15-2

#include "Employee.h"

using namespace std;

class ShiftSupervisor : public Employee {
private:
    double salary;
    double yearlyBonus;
public:
    ShiftSupervisor();

    void setSalary(double);
    void setYearlyBonus(double);

    double getSalary() const;
    double getYearlyBonus() const;
};

ShiftSupervisor::ShiftSupervisor() {
    salary = 0.0;
    yearlyBonus = 0.0;
}

void ShiftSupervisor::setSalary(double s) {
    salary = s;
}

void ShiftSupervisor::setYearlyBonus(double b) {
    yearlyBonus = b;
}

double ShiftSupervisor::getSalary() const {
    return salary;
}

double ShiftSupervisor::getYearlyBonus() const {
    return yearlyBonus;
}

