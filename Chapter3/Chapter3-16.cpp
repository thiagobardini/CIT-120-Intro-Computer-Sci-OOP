//
//  main.cpp
//  Chapter3-16
//
//  Created by Thiago Bardini on 6/24/20.
//  Copyright © 2020 Thiago Bardini. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int unus, duo, tres;
    
    unus = duo = tres = 5;
    
    unus += 4;
    duo *= 2;
    tres -= 4;
    unus /=3;
    duo += tres;
    
    cout << unus << endl;
    cout << duo << endl;
    cout << tres << endl;
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
