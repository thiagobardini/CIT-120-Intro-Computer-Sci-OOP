//
//  main.cpp
//  program5-7
//
//  Created by Thiago Bardini on 7/5/20.
//
// This program averages 3 test scores. It repeats as
// many times as the user wishes.

#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3; // Three scores
    double average;             // Average socre
    char again;                 // To hold Y or N input
    
    do
    {
        // Get three scores.
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;
        
        // Calculate and display the average.
        average = (score1 + score2 + score3)  / 3.0;
        cout << "The average is " << average << ".\n";
        
        // Does the user want to average another set?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
