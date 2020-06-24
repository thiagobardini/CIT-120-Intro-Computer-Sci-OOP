// This programm calculates the user's pay.
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay; //double in this statement indicates that the variables will be used to hold double precision "floating-point numbers"

    // Get the number hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $"<< pay << endl;
    return 0;
}