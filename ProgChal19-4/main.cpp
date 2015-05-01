// Tommy Nguyen
// 4.28.15
// Programming Challenge 19-4 - Recursive Array Sum

#include <iostream>

using namespace std;

int arraySum(int[], int);

int main()
{
    int ar[] = {1, 1, 1, 1, 1};

    cout << "The sum is: " << arraySum(ar, 5) << endl;

    return 0;
}

int arraySum(int intArray[], int n) {

    if (n == 1) { //base case
        return intArray[0];
        cout << "inside first if";
    }

    else {  //recursion
        return intArray[n-1] + arraySum(intArray, n-1);
    }
}



