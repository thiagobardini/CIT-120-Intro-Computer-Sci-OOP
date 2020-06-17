//A simple C++ program
#include <iostream>
using namespace std;

int main() {
	/*
	1 2 4 8 16 32 64 128 
	1 2 3 4  5  6  7  8  
	*/
	short int lengthA = 65536; //32k
	unsigned short int lengthB = lengthA; //65k
	//0 - 65535
	double population = 5.6;
	//lengthB = population;
	char myChar = 'J'; //74
	long long int USADeficit = 32LL;
	//population = lengthA * lengthB;
	
	cout << "Programming is great fun!\\"<<"n"<<"\n"
		<< "Programming is \"somewhat\" fun!\n"  
		<< "Programming is not fun!" << lengthB << endl;
	//
	cin.get();
	return 0;
}