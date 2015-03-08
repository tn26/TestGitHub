// Tommy Nguyen
// 3.7.15
// Programming Challenge 15-3

#include <iostream>
#include "TeamLeader.h"

using namespace std;

int main() {

    string name;
    int number;
    string date;
    int shift;
    double payRate;
    double monthlyBonus;
    double reqTrainingHours;
    double trainingHours;

    TeamLeader t1;

    cout << "Enter team leader's name: ";
    getline(cin, name);
    t1.setEmployeeName(name);

    cout << "Enter team leader's employee number: ";
    cin >> number;
    t1.setEmployeeNumber(number);

    cout << "Enter the date hired: ";
    cin.ignore();
    getline(cin, date);
    t1.setHireDate(date);

    cout << "Enter team leader's shift: (1 for day, 2 for night) ";
    cin >> shift;
    t1.setShift(shift);

    cout << "Enter team leader's hourly pay rate: ";
    cin >> payRate;
    t1.setHourlyPayRate(payRate);

    cout << "Enter team leader's monthly bonus: ";
    cin >> monthlyBonus;
    t1.setMonthlyBonus(monthlyBonus);

    cout << "Enter team leader's required training hours: ";
    cin >> reqTrainingHours;
    t1.setRequiredTrainingHours(reqTrainingHours);

    cout << "Enter team leader's training hours: ";
    cin >> trainingHours;
    t1.setTrainingHours(trainingHours);

    cout << "Team leader's name: " << t1.getEmployeeName() << endl;
    cout << "Team leader's employee number: " << t1.getEmployeeNumber() << endl;
    cout << "Team leader's date hired: " << t1.getHireDate() << endl;
    cout << "Team leader's shift: " << t1.getShift() << endl;
    cout << "Team leader's hourly pay rate: " << t1.getHourlyPayRate() << endl;
    cout << "Team leader's monthly bonus: " << t1.getMonthlyBonus() << endl;
    cout << "Team leader's required training hours: " << t1.getRequiredTrainingHours() << endl;
    cout << "Team leader's training hours: " << t1.getTrainingHours() << endl;

    return 0;
}
