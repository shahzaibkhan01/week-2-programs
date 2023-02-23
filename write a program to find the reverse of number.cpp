#include <iostream>
using namespace std;

int main() {
    int arr[100], size, i;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " numbers: ";
    for (i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "The reverse of the numbers is: ";
    for (i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
