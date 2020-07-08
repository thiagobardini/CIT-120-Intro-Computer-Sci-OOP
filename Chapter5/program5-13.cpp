#include <iostream>
using namespace std;

int main()
{
    int game = 1, // Game counter
        points,       // To hold a number of points
        total = 0;    // Accumulator
    
    cout << "Enter the number of points your team has earned\n";
    cout << "so far in the season, then enter -1 when finished.\n\n";
    
    cout << "Enter the points for game " << game << ": ";
    cin >> points;
    
    while (points != -1)
    {
        total += points;
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }
    
    cout << "\nThe toal points are " << total << endl;
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
