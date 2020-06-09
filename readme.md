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

## Chapter 2 - Introduction to C++

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
- ```{ }`` Everything between the two braces is the content of the function main.
- ```cout << "Programing is great fun!";```sthe quotation mark is called a string literal or string constant. This is the only line in the program that causes anything to be printed on the screen.
- ```;``` the semicolon marks the end of a sentence.
- ```return 0;``` this sends the integer value 0 back to the operating system upon the programm's completion. The value 0 usually indicates that a program executed successfully.

![](https://i.imgur.com/yjLB6TC.png)

