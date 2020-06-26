/*
Chapter 3 Project 2
Programming Challenge #25
Word Game
Author: Thiago Bardini
Week 3
Version: 1.1
 
 25 - Write a program that plays a word game with the user.
 The program should ask the user to enter the following:
 
 - His or her name
 - His or her age
 - The name of a city
 - The name of a college
 - A profession
 - A type of animal
 - A pet's name
 
 After the user has entered these items, the program should display the following story,
 inserting the user's input into the appropriate locations:
 
 There once was a person named NAME who lived in CITY. At the age of AGE,
 NAME went to college at COLLEGE. NAME graduated and went to work as a PROFESSION.
 Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after!
 
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables
    string name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string petname;
    
    // Get the information
    cout << "Please enter the data bellow:" << endl;
    cout << "\nWhat's your name? ";
    getline(cin,name);
    cout << "\nWhat's your age? ";
    getline(cin, age);
    cout << "\nWhere do you live? ";
    getline(cin, city);
    cout << "\nWhat's name of your college? ";
    getline(cin, college);
    cout << "\nWhat's your profession? ";
    getline(cin, profession);
    cout << "\nWhat type of animal do you have? ";
    getline(cin, animal);
    cout << "\nWhat's your pet's name? ";
    getline(cin, petname);
    
    // Display the result
    cout << "\nThere once was a person named " << name << " who lived in " << city << ".";
    cout << "At the age of " << age << ", ";
    cout << name << " went to college at " << college << ". ";
    cout << name << " graduated and went to work as a " << profession << ". ";
    cout << "Then, "<< name << " adopted a(n) " << animal << " named " << petname << ". ";
    cout << "They both lived happily ever after!\n";
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
