// Tommy Nguyen
// 2.18.15
// Programming Challenge 14-4

#include <iostream>
#include <iomanip>

using namespace std;

class NumDays
{
private:
    double hours;
    double days;
public:
    // Constructor
    NumDays();
    NumDays(double);

    // Setters
    void setHours(double);
    void setDays();

    // Getters
    double getHours();
    double getDays();

    // Prototypes
    NumDays operator+ (const NumDays &);
    NumDays operator- (const NumDays &);
    NumDays operator++();
    NumDays operator++(int);
    NumDays operator--();
    NumDays operator--(int);
    void print();

};

int main()
{
    int input;
    NumDays total;

    cout << "Enter the hours worked: ";
    cin >> input;
    NumDays d1(input);

    cout << "Enter the hours worked: ";
    cin >> input;
    NumDays d2(input);

    total = d1.operator+(d2);
    total.print();

    total = d1.operator-(d2);
    total.print();

    d1 = d2++;

    d1 = ++d2;

    d1 = d2--;

    d1 = --d2;

    return 0;
}

NumDays::NumDays() {
    hours = 0;
}

NumDays::NumDays(double h) {
    hours = h;
}

void NumDays::setHours(double h) {
    hours = h;
}

void NumDays::setDays() {
    days = hours / 8.0;
}

double NumDays::getHours() {
    return hours;
}

double NumDays::getDays() {
    return days;
}

NumDays NumDays::operator+ (const NumDays &d) {
    NumDays temp;
    temp.hours = hours + d.hours;
    return temp;
}

NumDays NumDays::operator- (const NumDays &d) {
    NumDays temp;
    temp.hours = hours - d.hours;
    return temp;
}

NumDays NumDays::operator++() {
    ++hours;
    return *this;
}

NumDays NumDays::operator++(int) {
    NumDays temp(hours);
    hours++;
    return *this;
}

NumDays NumDays::operator--() {
    --hours;
    return *this;
}

NumDays NumDays::operator--(int) {
    NumDays temp(hours);
    hours--;
    return *this;
}

void NumDays::print() {
    setDays();
    cout << setprecision(2);
    cout << "Number of days you worked: " << getDays() << endl;
    cout << "The difference in hours is: " << getHours() << endl;
}
