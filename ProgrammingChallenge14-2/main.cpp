// Tommy Nguyen
// Programming Challenge 14-2
// This program takes a user's input and convert it into month-day format.

#include <iostream>

using namespace std;

class DayOfYear
{
private:
    int day;
    static string monthArray[];
public:
    DayOfYear(int);

    void print();
};

string DayOfYear::monthArray[] = {"", "January", "February", "March", "April", "May", "June",
                                    "July", "August", "September", "October", "November", "December"};

int main()
{
    int input;

    while (true) {
    cout << "Enter a positive integer between 1 and 365 to translate to month-day format: ";
    cin >> input;

    // Loop if user's input is not between 1 and 365
    while (input < 1 || input > 365)
    {
        cout << "Invalid input. ";
        cout << "Enter a positive integer between 1 and 365 to translate to month-day format: ";
        cin >> input;
    }

    DayOfYear d1(input);

    d1.print();

    } // Ends first while loop

    return 0;
}

DayOfYear::DayOfYear(int d) {
    day = d;
}

void DayOfYear::print() {
    if (day >= 1 && day <= 31)  // January 31 days
        cout << monthArray[1] << " " << day << endl;

    if (day >= 32 && day <= 59)  // February 28 days
        cout << monthArray[2] << " " << day - 31 << endl;

    if (day >= 60 && day <= 90)  // March 31 days
        cout << monthArray[3] << " " << day - 59 << endl;

    if (day >= 91 && day <= 120)  // April 30 days
        cout << monthArray[4] << " " << day - 90 << endl;

    if (day >= 121 && day <= 151)  // May 31 days
        cout << monthArray[5] << " " << day - 120 << endl;

    if (day >= 152 && day <= 181)  // June 30 days
        cout << monthArray[6] << " " << day - 151 << endl;

    if (day >= 182 && day <= 212)  // July 31 days
        cout << monthArray[7] << " " << day - 181 << endl;

    if (day >= 213 && day <= 243)  // August 31 days
        cout << monthArray[8] << " " << day - 212 << endl;

    if (day >= 244 && day <= 273)  // September 30 days
        cout << monthArray[9] << " " << day - 243 << endl;

    if (day >= 274 && day <= 304)  // October 31 days
        cout << monthArray[10] << " " << day - 273 << endl;

    if (day >= 305 && day <= 334)  // November 30 days
        cout << monthArray[11] << " " << day - 304 << endl;

    if (day >= 335 && day <= 365)  // December 31 days
        cout << monthArray[12] << " " << day - 334 << endl;
}
