#include <iostream>
using namespace std;

int main() {
    int days, years, weeks, remaining_days;

    cout << "Enter the number of days: ";
    cin >> days;

    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = days - (years * 365) - (weeks * 7);

    cout<<days<<" days is equivalent to "<<years<<" years, "<<weeks<<" weeks, and "<<remaining_days<< " days."<< endl;

    return 0;
}
