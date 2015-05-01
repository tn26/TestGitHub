// Tommy Nguyen
// 4.28.15
// Programming Challenge 19-5 - Recursive Multiplication

#include <iostream>

using namespace std;

int multiply(int, int);

int main()
{
    cout << "The product is: " << multiply(2, 9) << endl;

    return 0;
}

int multiply(int num1, int num2) {
    if (num1 == 0) { // base case 1
        return 0;
    }
    if (num1 == 1) { // base case 2
        return num2;
    }
    else {  // recursion
        return num2 + multiply(num1 - 1, num2);
    }
}
