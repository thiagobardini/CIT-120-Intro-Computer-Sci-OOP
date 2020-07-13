//
//  main.cpp
//  CheckPoint6-3
//
//  Created by Thiago Bardini on 7/13/20.
///
// What will the ouput of the following program be if the user enters 10?
//

#include <iostream>
using namespace std;

    void func1 ()
    {
        cout << "Able was I\n";
    }
    
    void func2()
    {
        cout << "I saw Elba\n";
    }
   
    int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    
    if (input < 10)
    {
        func1();
        func2();
    }
    else
    {
        func2();
        func1();
    }
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
