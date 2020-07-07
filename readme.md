# HIGHLIGHTS 
- CIT-120 Intro Computer Sci/OOP
- Starting out with C++,
From Control Structures through Objects <br>
9th Edition, by Tony Gaddis. Pearson
> EXTRA Source - C++ Data Types (https://www.geeksforgeeks.org/c-data-types/)
## Chapter 1 - Introduction C++

![1](https://i.imgur.com/y4Ft1Mu.png)

![](https://i.imgur.com/bJohaBG.pnghttps://i.imgur.com/bJohaBG.png)

### Steps for [programm1-1.cpp](https://github.com/thiagobardini/Object-Oriented-Programming-BHCC/blob/master/programm1-1.cpp)

- Hierarchy Chart 

![](https://i.imgur.com/zDBckRS.png)

- Flowchart 

![](https://i.imgur.com/55e15M7.png)

- Pseudocode 

![](https://i.imgur.com/s6oTGAt.png)



<br><br><br><br>
# Chapter 2 - Introduction to C++

Program 2-1
````
// A simple C++ program
#include <iostream>
using namespace std;

int main()
{
      cout << "Programing is great fun!";
      return 0;
}
`````

- ```//``` comments
- ```#include <iostream>``` 
    - ```#``` The preprocessor reads your program before it is compiled and only executes those lines beginninfg with a ```#``` symbol.
    - ```#include``` it is the header file
    - ```<iostream>``` indicate that is a stardard C++.
    > Because this program uses ```cout``` (see out) to display screen, the ```<iostream>```header file must be included.
- ```using namespace std;``` declare the program will be accessing entities whose names are part of the namespace called std. Yes, even namespces have names. The reason the program needs access to the std namespace is because every name created by the ```iostream``` file is part of that namespace.
- ```int main()```this marks a beginning of a function.
- ```{ }``` Everything between the two braces is the content of the function main.
- ```cout << "Programing is great fun!";```sthe quotation mark is called a string literal or string constant. This is the only line in the program that causes anything to be printed on the screen.
- ```;``` the semicolon marks the end of a sentence.
- ```return 0;``` this sends the integer value 0 back to the operating system upon the programm's completion. The value 0 usually indicates that a program executed successfully.

<hr>
``` << ``` -> Operator is used to send the string "Programming is great fun!"to cout.

```
//INPUT

#include <iostream>
using namespace std;

int main()
{
    cout << "Programming is " << "great fun!";
    return 0;
}
```
```
//OUTPUT
Programming is great fun!
```

<hr>
Using operator endl:
```<< endl```-> new line

```
//INPUT

#include <iostream>
using namespace std;

int main()
{
    cout << "Programming is " << endl;
    cout << "great fun!" << endl;
    return 0;
}
```
```
//OUTPUT
Programming 
is great fun!
```
<hr>

```\n``` -> Another way - new line (string)

```
//INPUT

#include <iostream>
using namespace std;

int main()
{
    cout << "Programming\n;
    cout <<"is";
    cout << "\ngreat\n;
    cout << "\nfun!\n";
    return 0;
}
```
```
//OUTPUT
Programming 
is 
great 
fun!
```
![](https://i.imgur.com/tdvieXV.png)

<hr>

VARIABLES

![](https://i.imgur.com/8134ADd.png)
![](https://i.imgur.com/RogVg7Y.png)

> somentimes ```number= "5"``` isn't a numbeer, but a string.

![](https://i.imgur.com/XWAafim.png)

<hr>

![](https://i.imgur.com/sAyrIUC.png)

![](https://i.imgur.com/IJwFa7j.png)

![](https://i.imgur.com/OtPXRqK.png)

![](https://i.imgur.com/PmRpLRj.png)

![](https://i.imgur.com/T538yPX.png)

![](https://i.imgur.com/LM9CRju.png)
<hr>

![](https://i.imgur.com/mhPmyJN.png)
![](https://i.imgur.com/DZEVNel.png)

<hr>

![](https://i.imgur.com/XzLZ79x.png)

<hr>

![](https://i.imgur.com/0XiDRhJ.png)
![](https://i.imgur.com/61cjmCX.png)

<hr>

![](https://i.imgur.com/YqZB2Uw.png)
![](https://i.imgur.com/qGlUXWb.png)

<hr>

![](https://i.imgur.com/7s85o2L.png)

![](https://i.imgur.com/y4g60tv.png)

![](https://i.imgur.com/i3gDJ2O.png)

// -> Line comments

```
/* 
    Example:
    Multi-Line Comments
*/    
```
<hr>

![](https://i.imgur.com/m3dqbbs.png)

![](https://i.imgur.com/WUbQ2n1.png)

<br><br><br><br>
<hr>

# CHAPTER 3
### EXPRESSIONS AND INTERACTIVITY

![](https://i.imgur.com/usSlmte.png)
![](https://i.imgur.com/w9nCGOD.png)

<hr>

![](https://i.imgur.com/ESm8gNy.png)

![](https://i.imgur.com/rTPSQD0.png)
![](https://i.imgur.com/ZYJkJdB.png)

<hr>

![](https://i.imgur.com/0xM3ofu.png)
![](https://i.imgur.com/V9Y1Tsq.png)

<hr>

![](https://i.imgur.com/VqX2FDA.png)

The POW function 
pow = power (potencia)

<hr>

![](https://i.imgur.com/toSy3EM.png)
![](https://i.imgur.com/srofIXy.png)

<hr>

![](https://i.imgur.com/Vsn2CYD.png)

<hr>

![](https://i.imgur.com/Vp06aCK.png)

<hr>

# How do you detect overflow?
 - The rules for detecting overflow in a two's complement sum are simple:
    -   If the sum of two positive numbers yields a negative result, the sum has overflowed.
    -   If the sum of two negative numbers yields a positive result, the sum has overflowed.
    -   Otherwise, the sum has not overflowed.

![](https://i.imgur.com/075ttiD.png)

<hr>

C++ Data type

![](https://i.imgur.com/l7u8WjX.png)
![](https://i.imgur.com/d9ViSJX.png)
![](https://i.imgur.com/pz3Aq7v.png)
 
 > EXTRA Source - C++ Data Types (https://www.geeksforgeeks.org/c-data-types/)
 
 <hr>

![](https://i.imgur.com/EKZg9D0.png)

### statisc_cast
statisc_cast<DataType>(Value)

![](https://i.imgur.com/ZqT3MEC.png)

![](https://i.imgur.com/44Ord1F.png)

<hr>

![](https://i.imgur.com/NulEIvu.png)
![](https://i.imgur.com/8qm6FKf.png)
![](https://i.imgur.com/9fy5IzA.png)
![](https://i.imgur.com/3xRbERa.png)

<hr>

![](https://i.imgur.com/iWkBdKF.png)
![](https://i.imgur.com/sPhdlQ4.png)


```
//INPUT
//
// This program displays three rows of numbers
#include <iostream>
#include <iomanip>  // Required for setw
using namespace std;

int main()
{
    int num1 = 2897,    num2 = 5,       num3 = 837,
        num4 = 34,      num5 = 7,       num6 = 1623,
        num7 = 390,     num8 = 3456,    num9 = 12;
    
    // Display the first row of numbers
    cout << setw(6) << num1 << setw(6)
    << num2 << setw(6) << num3 << endl;
    
    // Display the second row of numbers
    cout << setw(6) << num4 << setw(6)
    << num5 << setw(6) << num6 << endl;
    
    // Display the third row of numbers
    cout << setw(6) << num7 << setw(6)
    << num8 << setw(6) << num9 << endl;
    
    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
    return 0;
}
```
OUTPUT
```
  2897     5   837
    34     7  1623
   390  3456    12

Press Enter to Continue...
```

![](https://i.imgur.com/BDILPr4.png)

- Using setprecision()
 ![](https://i.imgur.com/VILknhU.png)

 ![](https://i.imgur.com/PrhAEO9.png)

 <hr>

 ![](https://i.imgur.com/aAzXeNc.png)
 ![](https://i.imgur.com/cjE2gYq.png)
 ![](https://i.imgur.com/DLRqrYq.png)

 - SHOWPOINT
 ![](https://i.imgur.com/YjTVQLw.png)
 ![](https://i.imgur.com/7QnGt0f.png)

 <hr>

 ![](https://i.imgur.com/5xtAjt7.png)

 ![](https://i.imgur.com/E8z5kYv.png)

<hr>

![](https://i.imgur.com/R3fG4Jy.png)
![](https://i.imgur.com/ZUFg8F2.png)
![](https://i.imgur.com/AXJJ2OV.png)
![](https://i.imgur.com/aUrO9y2.png)

<hr>

![](https://i.imgur.com/wgeJQ2u.png)

![](https://i.imgur.com/3sjJ4mD.png)
![](https://i.imgur.com/orNmyNQ.png)

![](https://i.imgur.com/yHC0IYS.png)
![](https://i.imgur.com/Pod5QlW.png)
![](https://i.imgur.com/JqJEewM.png)
![](https://i.imgur.com/PIKMFvX.png)

<hr>

![](https://i.imgur.com/SnyO5bZ.png)
![](https://i.imgur.com/wxsKaTk.png)

![](https://i.imgur.com/S0m4eie.png)
![](https://i.imgur.com/E9fF5JI.png)

<hr>

- Random numbers
![](https://i.imgur.com/EdoFDL0.png)
![](https://i.imgur.com/26QKyMC.png)
![](https://i.imgur.com/YGuoVwg.png)
![](https://i.imgur.com/Mq5nb1R.png)
![](https://i.imgur.com/jvMLiLs.png)
![](https://i.imgur.com/q9O0FQ5.png)

<hr>

![](https://i.imgur.com/7IV6MF7.png)
![](https://i.imgur.com/CnG5sb5.png)
![](https://i.imgur.com/ic3RCQ1.png)

<hr>

![](https://i.imgur.com/lW4Fd2L.png)
![](https://i.imgur.com/rQJTrWe.png)
![](https://i.imgur.com/3uVA6AB.png)
![](https://i.imgur.com/VJWpLli.png)

<hr>

## Programming Challenges

![](https://i.imgur.com/0rO2mQj.png)
![](https://i.imgur.com/X0GH1kh.png)

```
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
```

# Chapter 4

![](https://i.imgur.com/QgYbXY5.png)
![](https://i.imgur.com/HpFay2l.png)
![](https://i.imgur.com/g9qJN7l.png)

<hr>

## IF statement 
- if (expreesion) statement;

![](https://i.imgur.com/DT7ySzC.png)
![](https://i.imgur.com/GbkmOXM.png)

> P.S.: (const) Ao modificar uma declaração de dados, a palavra-chave const especifica que o objeto ou a variável não é modificável. 

![](https://i.imgur.com/3qXszlp.png)
> IF doesn't apply SEMICOLON
![](https://i.imgur.com/pKP04sH.png)

<hr>

![](https://i.imgur.com/UdyE64T.png)
![](https://i.imgur.com/ykm3572.png)

![](https://i.imgur.com/EsTXOpK.png)
![](https://i.imgur.com/nGiaUQW.png)

![](https://i.imgur.com/kRNVXyn.png)
![](https://i.imgur.com/hVcl9Oj.png)
![](https://i.imgur.com/W5RQJCW.png)
![](https://i.imgur.com/8oOv0VH.png)
![](https://i.imgur.com/5NxakLT.png)

<hr>

![](https://i.imgur.com/zNoSu6B.png)
![](https://i.imgur.com/TEGF648.png)

![](https://i.imgur.com/YkWMqtA.png)
![](https://i.imgur.com/HB3ZXZA.png)

<hr> 

![](https://i.imgur.com/Ca2hQh8.png)

![](https://i.imgur.com/0grHq3R.png)
![](https://i.imgur.com/JOdIxRo.png)

![](https://i.imgur.com/MoxyNf4.png)
![](https://i.imgur.com/e7xTbrU.png)
![](https://i.imgur.com/rY4AZK6.png)
![](https://i.imgur.com/noVtK5M.png)

<hr>

![](https://i.imgur.com/aoZ7zkD.png)
![](https://i.imgur.com/Lk7pqaJ.png)
![](https://i.imgur.com/BFSNibi.png)

<hr>

![](https://i.imgur.com/q0qTaqO.png)
![](https://i.imgur.com/WNyNtIh.png)

<hr>

![](https://i.imgur.com/Y9vwVJv.png)
![](https://i.imgur.com/HBfyMZ1.png)

<hr>

![](https://i.imgur.com/sbqcTfa.png)
![](https://i.imgur.com/JGX9bYE.png)
![](https://i.imgur.com/EyWbLBR.png)

<hr>

![](https://i.imgur.com/hNsL1BE.png)
![](https://i.imgur.com/aIutlKt.png)
![](https://i.imgur.com/6khqlJh.png)

<hr>

![](https://i.imgur.com/gh1MbnB.png)
![](https://i.imgur.com/7FlGhYi.png)
![](https://i.imgur.com/D5MKNfi.png)

<hr>

![](https://i.imgur.com/bg3REJj.png)
![](https://i.imgur.com/2F75toB.png)
![](https://i.imgur.com/urwpUxe.png )
![](https://i.imgur.com/82r4Qtu.png)
![](https://i.imgur.com/0oqg0sT.png)
![](https://i.imgur.com/rKk8tuT.png)

<hr>

![](https://i.imgur.com/sevPCxO.png)
![](https://i.imgur.com/9jZIVaE.png)
![](https://i.imgur.com/w5lBXMB.png)

<hr>

![](https://i.imgur.com/3owI0yw.png)
![](https://i.imgur.com/XTgjLyk.png)
![](https://i.imgur.com/BB6aDrN.png)

<hr>

![](https://i.imgur.com/tq2Q47n.png)
![](https://i.imgur.com/hsSvyjM.png)

<hr>

![](https://i.imgur.com/fysH7dN.png)
![](https://i.imgur.com/OOURVP3.png)
![](https://i.imgur.com/iv4YSOu.png)

<hr>

![](https://i.imgur.com/lBsDcdJ.png)
![](https://i.imgur.com/TDLPYzP.png)

![](https://i.imgur.com/ADoRi7A.png)

<hr>

![](https://i.imgur.com/Rezot4O.png)
![](https://i.imgur.com/TL9xdXj.png)

<hr>

![](https://i.imgur.com/7FqeFGp.png)
![](https://i.imgur.com/XFEYt1P.png)

![](https://i.imgur.com/iAVxYe3.png)
![](https://i.imgur.com/fXJV4z9.png)

![](https://i.imgur.com/pH7mA9i.png)
![](https://i.imgur.com/NAL9MlA.png)

<hr>

![](https://i.imgur.com/Qy83vcs.png)
![](https://i.imgur.com/ealzZUs.png)
![](https://i.imgur.com/FgoaFQo.png)

<hr>

![](https://i.imgur.com/82M6lhM.png)

![](https://i.imgur.com/LoC3nlk.png)
![](https://i.imgur.com/oJji6hC.png)

![](https://i.imgur.com/z0VwkbE.png)
![](https://i.imgur.com/ZwvftlH.png)

# CHAPTER 5
 
### POSTFIX MODE and PREFIX MODE
- ++num; // use prefix ++ (plus plus) to increment num
- num++; // use prefix ++ (plus plus) to increment num
- num--; // use prefix -- (minus minus) to DECREMENT num (DIMINUIR)
- --num; // use prefix -- (minus minus) to INCREMENT num (ADICIONAR)
![](https://i.imgur.com/JacILms.png)
![](https://i.imgur.com/VttK29t.png)

![](https://i.imgur.com/2HEBpDk.png)
![](https://i.imgur.com/UNuwoZW.png)

![](https://i.imgur.com/ReKgEKp.png)

### LOOP
![](https://i.imgur.com/OVaalmj.png)
![](https://i.imgur.com/J38riFN.png)

![](https://i.imgur.com/6jF4H34.png)

![](https://i.imgur.com/tn8qTgZ.png)

![](https://i.imgur.com/7EqNVfC.png)
![](https://i.imgur.com/k0gXJMT.png)

![](https://i.imgur.com/0ukACxs.png)
![](https://i.imgur.com/YXJtP2i.png)

### The do-while Loop
![](https://i.imgur.com/9o6TNif.png)

![](https://i.imgur.com/pX3dXws.png)
![](https://i.imgur.com/iZUvF4p.png)

![]()
![]()
![]()
![]()
![]()
![]()
![]()
![]()
![]()
![]()
