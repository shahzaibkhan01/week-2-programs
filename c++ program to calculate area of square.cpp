#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float pi = 3.14159265359;

    cout<< "Enter the radius of the circle: ";
    cin>> radius;

    area= pi * radius * radius;

    cout<< "The area of the circle is: " << area << endl;

    return 0;
}
