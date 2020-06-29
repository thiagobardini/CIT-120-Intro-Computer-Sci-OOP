//
//  program4-6.cpp
//  program4-6
//
//  Created by Thiago Bardini on 6/29/20.
//

#include <iostream>
#include <iomanip>  // setprecision
using namespace std;

int main()
{
    const int HIGH_SCORE = 95;  // A higher score is 95 or greater
    int score1, score2, score3; // To hold test scroes
    double average; // To hold three average score
    
    // Get the three test scores
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    
    // Calculate and display the average acore.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed <<  showpoint <<  setprecision(1);
    cout << "Your average is "<< average << endl;
    
    // If the average is high, congratulate the user.
    if (average > HIGH_SCORE)
    {
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
        
    }
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
