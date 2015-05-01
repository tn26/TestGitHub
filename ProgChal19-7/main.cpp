// Tommy Nguyen
// 4.28.15
// Programming Challenge 19-7 - Sum of Numbers

#include <iostream>

using namespace std;

int sum(int);

int main()
{
    cout << "The sum is: " << sum(10) << endl;

    return 0;
}

int sum(int num) {
    if (num == 1) // base case
    {
        return 1;
    }
    else
    {
        return num + sum(num - 1);
    }
}
