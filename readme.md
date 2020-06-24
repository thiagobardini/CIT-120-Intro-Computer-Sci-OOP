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
