/*
Chapter 2 Project 1
Programming Challenge #4
Restaurant Bill
Author: Thiago Bardini
Week 2
Version: 1.1
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables
    double meal,tax,mealTax,trip,total;
    
    // Meal charge
    meal=88.67;
    
    //The tax 6.75% = 0.0675 
    tax=meal*0.0675;

    // Total meal + Tax
    mealTax=meal+tax;

    // Trip 20% after adding the tax (20% = 0.2)
    trip=mealTax*0.2;

    // Total meal, tax and trip
    total=meal+tax+trip;

    cout << "Meal Cost is "<<"$" << mealTax;
    cout << "\n Tax Amount is "<<"$" << tax;
    cout << "\n Trip Amount is "<<"$" << trip;
    cout << "\n Total Bill is "<<"$" << total;
 
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}

<hr>
VARIABLES
```
""
```
