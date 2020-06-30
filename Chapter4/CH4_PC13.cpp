/*
Chapter 4 Project 3
Programming Challenge #13
Book Club Points
Author: Thiago Bardini
Week 4
Version: 1.1
 
 13. Book Club Points
 Serendipity Booksellers has a book club that awards points to its customers based on the number of books purchased each month. The points are awared as follows:
 - If a customer purchases 0 books, he or she earns 0 points.
 - If a customer purchases 1 books, he or she earns 5 points.
 - If a customer purchases 2 books, he or she earns 15 points.
 - If a customer purchases 3 books, he or she earns 30 points.
 - If a customer purchases 4 or more books, he or she earns 60 points.
 Write a program that asks the user to enter the number of books he or she has purchased this month then displays the number of points awarded.
*/

#include <iostream>
using namespace std;

int main()
{
    const int A_CUSTOMER = 0,
              B_CUSTOMER = 1,
              C_CUSTOMER = 2,
              D_CUSTOMER = 3,
              E_CUSTOMER = 4;
    
    // Variables
    int purchased;
    
    cout << "Enter number of books purchased on this month? ";
    cin >> purchased;
    
    // Customer purchases
    if (purchased == A_CUSTOMER)
        cout << "You earn 0 points.\n";
    else if (purchased == B_CUSTOMER)
        cout << "You earn 5 points.\n";
    else if (purchased == C_CUSTOMER)
        cout << "You earn 15 points.\n";
    else if (purchased == D_CUSTOMER)
        cout << "You earn 30 points.\n";
    else
        cout << "You earn 60 points.\n";

    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
