/*
date: 10Sep19
Author: Jefferson Fernandes, Ace Mentor
Sumary: vineyard
*/
#include <iostream>
using namespace std;
int main() {
	/*
V is the number of grapevines that will fit in the row.
R is the length of the row, in feet.
E is the amount of space, in feet, used by an end-post assembly.
S is the space between vines, in feet.
V=(R-2E)/S
	*/
	double V, R, E, S;
	cout << "Please enter the length of the row, in feet.\n";
	cout << "Please enter the amount of space, in feet, used by an end-post assembly.\n";
	cout << "Please enter space between vines, in feet.\n";
	cin >> R >> E >> S;
	V = (R - 2.2 * E) / S;
	cout << "\nThe number of grapevines that will fit in the row is " << V;
	cout << "\nThe number of grapevines that will fit in the row is " << static_cast<int>(V);
	cin.ignore(5, '\n');
	cin.get();
	//cin.get();
	return 0;
}