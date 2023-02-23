#include <iostream>
using namespace std;

int main()
{
    float radius, area;
    const float pi = 3.14; //  value of pi

    cout<< "Enter the radius of the circle: ";
    cin>> radius;

    area= pi * radius * radius;

    cout<< "The area of the circle is: " << area << endl;

    return 0;
}
