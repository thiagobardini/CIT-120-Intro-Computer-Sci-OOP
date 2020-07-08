/*
Chapter 5 Project 4
Programming Challenge #7
Pennies for Pay
Author: Thiago Bardini
Week 5
Version: 1.1
 
SUDOCODE
- First  -> User input: How many days did the employee work?
- Second -> The program check the input is less 0 or greater than or equal 31.
            if it is true, then print an error a message. If it is false the progam
            calculate number of pennies earned during the month
- Third  -> Display the output in a dollar amount.
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int totalDays;
    double pay, totalPay = 0;
    
    pay = 1;

    
    do
    {
        cout << "How many days did you work? ";
        cin >> totalDays;
        
        if (totalDays < 0 || totalDays > 31)
            cout << "ERROR: Your number must be greater than zero or less than or equal to 31" << endl;
        break;
    } while (totalDays < 0 || totalDays > 31);
    
    // Showing pay for each day
    cout << "DAY\t\t US$" << endl;
    cout << "-----------------" << endl;
  
    
    // Showing the output in dollars
    cout <<  fixed <<  showpoint << setprecision(2);
    for ( int i = 1 ; i <= totalDays; i++)
    {
        cout << i << "\t\t $" << pay << endl;
        // Total pay
        totalPay += pay;
        // Daily pay
        pay += pay;
    }
    
    cout << endl;
    // Display the total pay
    cout << "Total pay for " << totalDays << " days is $" << totalPay << endl;
         
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}

