// Tommy Nguyen
// 4.28.15
// Programming Challenge 19-2 - Recursive Conversion

#include <iostream>

using namespace std;

void sign(int);

int main()
{
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    sign(num);

    return 0;
}

void sign(int n) {
    if (n > 0) {
        cout << "No Parking\n";
        sign(n - 1);
    }
}
