#include <iostream>
using namespace std;

int main() {
    int num, i;
    long long fact = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    for (i = 1; i <= num; ++i) {
        fact *= i;
    }

    cout << "The factorial of " << num << " is " << fact << endl;

    return 0;
}
